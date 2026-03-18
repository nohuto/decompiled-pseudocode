/*
 * XREFs of VslInitializeSecureProcess @ 0x1404F75E4
 * Callers:
 *     KeSecureProcess @ 0x14050E5D0 (KeSecureProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x140391744 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140391798 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall VslInitializeSecureProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7,
        unsigned __int64 a8)
{
  __int64 result; // rax
  unsigned int v13; // edi
  __int64 *v14[10]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[14]; // [rsp+80h] [rbp-80h] BYREF

  memset(v14, 0, 0x48uLL);
  memset(v15, 0, 0x68uLL);
  v15[6] = a6;
  v15[3] = a1;
  v15[1] = a2;
  v15[4] = a3;
  v15[2] = a4;
  v15[5] = a5;
  if ( !a8 )
  {
LABEL_6:
    v13 = VslpEnterIumSecureMode(2u, 7, 0, (__int64)v15);
    if ( a8 )
      VslpUnlockPagesForTransfer(v14);
    return v13;
  }
  if ( a8 > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v14, a7, a8, 0, 0);
  if ( (int)result >= 0 )
  {
    v15[7] = v14[0];
    v15[8] = v14[7];
    goto LABEL_6;
  }
  return result;
}
