/*
 * XREFs of VslPrepareDriverForPatch @ 0x1404FB42C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1408CBA38 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C472B8);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 72, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C472BC;
  if ( result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C472C0;
  _InterlockedIncrement(v3);
  return result;
}
