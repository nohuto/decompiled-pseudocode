/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C009D86C
 * Callers:
 *     OSInterruptVector @ 0x1C00BE3B0 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     IcAddPossibleReference @ 0x1C00972E0 (IcAddPossibleReference.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0098F48 (IcCopyInputStateToDeviceState.c)
 *     ProcessorCopyData @ 0x1C009B4BC (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1C009B940 (IcClearPossibleData.c)
 *     IrqArbGetDeviceIrql @ 0x1C009BA8C (IrqArbGetDeviceIrql.c)
 *     IcRemapInputs @ 0x1C009BB28 (IcRemapInputs.c)
 *     IcSetPossibleInput @ 0x1C009D180 (IcSetPossibleInput.c)
 *     IcCopyData @ 0x1C009DA5C (IcCopyData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00BDE8C (IrqPolicyGetDistributionDisposition.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00BDF94 (IrqLibpSetSciConnectionData.c)
 */

__int64 __fastcall AcpiIrqLibSetupSciInterrupt(unsigned __int16 a1, void *a2)
{
  __int64 v2; // rdi
  _DWORD *Pool2; // rax
  _DWORD *UserData; // rbx
  _DWORD *v6; // rsi
  char v7; // bp
  ULONGLONG v8; // rcx
  char v9; // dl
  int v10; // eax
  __int64 result; // rax
  __int128 v12; // [rsp+50h] [rbp-78h] BYREF
  __int128 v13; // [rsp+60h] [rbp-68h]
  _OWORD v14[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v15; // [rsp+90h] [rbp-38h]

  v2 = a1;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 120LL, 1232102209LL);
  UserData = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[12] = 0;
  v6 = Pool2 + 8;
  Pool2[8] = 0;
  *Pool2 = 1;
  v7 = 3;
  Pool2[2] = 1;
  v8 = (unsigned int)v2;
  Pool2[11] = 2;
  if ( (unsigned int)v2 < 0x10 )
  {
    LODWORD(v2) = *((_DWORD *)&IsaVectorOverrides + 2 * v2);
    v9 = *((_BYTE *)&IsaVectorOverrides + 8 * v8 + 4);
    if ( v9 != -1 )
    {
      v10 = Pool2[11];
      v7 = *((_BYTE *)&IsaVectorOverrides + 8 * v8 + 4);
      if ( (v9 & 1) == 0 )
        v10 = 1;
      UserData[11] = v10;
    }
  }
  UserData[22] = v2;
  IrqLibSciGsiv = v2;
  RtlAddRange(RangeList, v8, v8, 0, 0x12u, UserData, a2);
  result = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _OWORD *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             a2,
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v14,
             1,
             0,
             1,
             1,
             &v12);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v12;
    UserData[9] = DWORD1(v13);
    result = IrqArbGetDeviceIrql(v6, (_BYTE *)UserData + 40);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      result = IcSetPossibleInput(v2, (__int64)&v12, v7, 0);
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
              result = IrqLibpSetSciConnectionData(v6, a2);
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
