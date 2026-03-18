/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C0096DF4
 * Callers:
 *     OSInterruptVector @ 0x1C00BD810 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     IcAddPossibleReference @ 0x1C0091BA4 (IcAddPossibleReference.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0093490 (IcCopyInputStateToDeviceState.c)
 *     ProcessorCopyData @ 0x1C00941D0 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1C0094670 (IcClearPossibleData.c)
 *     IrqArbGetDeviceIrql @ 0x1C0094E68 (IrqArbGetDeviceIrql.c)
 *     IcRemapInputs @ 0x1C0094F98 (IcRemapInputs.c)
 *     IcSetPossibleInput @ 0x1C0096318 (IcSetPossibleInput.c)
 *     IcCopyData @ 0x1C0096FE4 (IcCopyData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00BC930 (IrqPolicyGetDistributionDisposition.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00BCA38 (IrqLibpSetSciConnectionData.c)
 */

__int64 __fastcall AcpiIrqLibSetupSciInterrupt(unsigned __int16 a1, void *a2)
{
  __int64 v2; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *UserData; // rbx
  char v6; // bp
  ULONGLONG v7; // rcx
  char v8; // dl
  int v9; // eax
  __int64 result; // rax
  __int128 v11; // [rsp+50h] [rbp-78h] BYREF
  __int128 v12; // [rsp+60h] [rbp-68h]
  _OWORD v13[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v14; // [rsp+90h] [rbp-38h]

  v2 = a1;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  *UserData = 1;
  v6 = 3;
  UserData[2] = 1;
  v7 = (unsigned int)v2;
  UserData[11] = 2;
  if ( (unsigned int)v2 < 0x10 )
  {
    LODWORD(v2) = *((_DWORD *)&IsaVectorOverrides + 2 * v2);
    v8 = *((_BYTE *)&IsaVectorOverrides + 8 * v7 + 4);
    if ( v8 != -1 )
    {
      v9 = UserData[11];
      v6 = *((_BYTE *)&IsaVectorOverrides + 8 * v7 + 4);
      if ( (v8 & 1) == 0 )
        v9 = 1;
      UserData[11] = v9;
    }
  }
  UserData[22] = v2;
  IrqLibSciGsiv = v2;
  RtlAddRange(RangeList, v7, v7, 0, 0x12u, UserData, a2);
  result = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _OWORD *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             a2,
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v13,
             1,
             0,
             1,
             1,
             &v11);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v11;
    UserData[9] = DWORD1(v12);
    result = IrqArbGetDeviceIrql(UserData + 8, (_BYTE *)UserData + 40);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      result = IcSetPossibleInput(v2, (__int64)&v11, v6, 0);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v2, 0);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState((__int64)&IrqLibArbiterInstance, 0);
            result = IcCopyData(0LL);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(UserData + 8, a2);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
