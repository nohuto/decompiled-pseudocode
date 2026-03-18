/*
 * XREFs of ObDeassignSecurity @ 0x1406CCE9C
 * Callers:
 *     WmipSecurityMethod @ 0x1406CCC50 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObDeassignSecurity(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  ObDereferenceSecurityDescriptor(v1 & 0xFFFFFFFFFFFFFFF0uLL, (v1 & 0xF) + 1);
  return 0LL;
}
