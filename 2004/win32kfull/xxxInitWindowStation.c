/*
 * XREFs of xxxInitWindowStation @ 0x1C0009574
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00C1C7C (xxxCreateWindowStation.c)
 * Callees:
 *     SetKeyboardRate @ 0x1C00094E0 (SetKeyboardRate.c)
 *     FinalUserInit @ 0x1C000AA3C (FinalUserInit.c)
 *     SetIconMetrics @ 0x1C000AFC0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C000B1DC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C000B32C (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C000C248 (GreTextInitialized.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0048468 (-xxxLoadSomeStrings@@YAXXZ.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  unsigned int v1; // ebx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v3);
  FastGetProfileIntFromID(v0, 2LL, 606LL);
  SetKeyboardRate();
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized() || (v1 = xxxSetWindowNCMetrics(v0, 0LL)) != 0 )
  {
    SetMinMetrics(v0);
    v1 = SetIconMetrics(v0);
    if ( v1 )
    {
      v1 = FinalUserInit();
      if ( v1 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(v0, &v3);
  return v1;
}
