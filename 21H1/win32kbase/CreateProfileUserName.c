/*
 * XREFs of CreateProfileUserName @ 0x1C0012C40
 * Callers:
 *     NtUserSetSysColors @ 0x1C00113D0 (NtUserSetSysColors.c)
 *     xxxSystemParametersInfo @ 0x1C00116E0 (xxxSystemParametersInfo.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0142F74 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0143214 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C00146FC (-InitPreviousUserString@@YAXXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateProfileUserName(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING *v3; // rdi

  result = Win32AllocPoolWithQuota(528LL, 1852863317LL);
  v3 = (struct _UNICODE_STRING *)result;
  if ( result )
  {
    if ( qword_1C0257E80 )
      qword_1C0257E80(result, a1, Win32FreePool);
    v3[32].Buffer = &v3->Length;
    v3[32].MaximumLength = 512;
    v3[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v3 + 32, &PreviousUserString);
    return (__int64)&v3[32];
  }
  return result;
}
