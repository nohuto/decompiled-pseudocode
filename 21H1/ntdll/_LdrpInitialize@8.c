/*
 * XREFs of _LdrpInitialize@8 @ 0x4B2E62EF
 * Callers:
 *     _LdrInitializeThunk@8 @ 0x4B2E62C0 (_LdrInitializeThunk@8.c)
 * Callees:
 *     _InitSecurityCookie@0 @ 0x4B331309 (_InitSecurityCookie@0.c)
 */

struct _TEB *__fastcall LdrpInitialize(int a1, int a2)
{
  struct _TEB *result; // eax

  if ( !SecurityCookieInitialized )
    InitSecurityCookie();
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
    return (struct _TEB *)_LdrpInitialize(a1, a2);
  return result;
}
