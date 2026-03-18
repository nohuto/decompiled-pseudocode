/*
 * XREFs of VslGetSecurePageList @ 0x1404F72A0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F28A4 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1404F29D0 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F34C0 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1404F3E74 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslGetSecurePageList(unsigned __int8 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  __int64 v5; // rbx
  NTSTATUS result; // eax
  _QWORD v9[14]; // [rsp+20h] [rbp-98h] BYREF

  v5 = a1;
  memset(v9, 0, 0x68uLL);
  v9[1] = v5;
  v9[2] = a2;
  result = VslpEnterIumSecureMode(2u, 2050, 0, (__int64)v9);
  if ( result >= 0 )
  {
    *a4 = v9[2];
    if ( a3 )
      *a3 = v9[3];
  }
  return result;
}
