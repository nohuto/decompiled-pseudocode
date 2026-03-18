/*
 * XREFs of VslPrepareDriverForPatch @ 0x1404F7B9C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C47258);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 72, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C4725C;
  if ( result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C47260;
  _InterlockedIncrement(v3);
  return result;
}
