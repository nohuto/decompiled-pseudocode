/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x1409C64F4
 * Callers:
 *     IovCallDriver @ 0x1409C5CB4 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x14036E534 (IopfCallDriver.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopPerfCallDriver @ 0x140507F40 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1405A1BD8 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x1409C6B24 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x1409D1E84 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D2078 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PADAPTER_OBJECT DmaAdapter, ULONG_PTR a2, __int64 a3)
{
  bool v6; // zf
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v14[24]; // [rsp+28h] [rbp-81h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = *(_WORD *)a2 == 6;
  v14[20] = DmaAdapter;
  v14[21] = a2;
  v14[22] = a3;
  if ( !v6 && (MmVerifierData & 0x400000) == 0 )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_OWORD *)&xmmword_140D4A040 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    qword_140D4A038 = a2;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(DmaAdapter) && (v7 & MmVerifierData) == 0 )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_OWORD *)&xmmword_140D4A040 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    qword_140D4A038 = (ULONG_PTR)DmaAdapter;
    VfBugCheckNoStackUsage();
  }
  v8 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v8 - 72) )
  {
    v9 = *(_QWORD *)(v8 - 24);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 80) & 0x204000) == 0x204000 && (v7 & MmVerifierData) == 0 )
      {
        BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        *(&xmmword_140D4A040 + 1) = *(_QWORD *)(v8 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140D4A038 = (ULONG_PTR)DmaAdapter;
        xmmword_140D4A040 = a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  v10 = VfBeforeCallDriver(DmaAdapter, a2, v14);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v11 = IopPerfCallDriver(DmaAdapter, a2);
  else
    v11 = IopfCallDriver((__int64)DmaAdapter, a2);
  v13 = v11;
  VfAfterCallDriver(v14, &v13, v10);
  return v13;
}
