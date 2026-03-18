/*
 * XREFs of CreateProfileUserName @ 0x1C0025900
 * Callers:
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C0024F00 (NtUserSetSysColors.c)
 *     xxxSystemParametersInfo @ 0x1C0025210 (xxxSystemParametersInfo.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C013CC24 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013CEC4 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0079E64 (-InitPreviousUserString@@YAXXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateProfileUserName(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  struct _UNICODE_STRING *v4; // rdi

  result = Win32AllocPoolWithQuota(528LL, 1852863317LL);
  v4 = (struct _UNICODE_STRING *)result;
  if ( result )
  {
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(result, a1, Win32FreePool, v3);
    v4[32].Buffer = &v4->Length;
    v4[32].MaximumLength = 512;
    v4[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v4 + 32, &PreviousUserString);
    return (__int64)&v4[32];
  }
  return result;
}
