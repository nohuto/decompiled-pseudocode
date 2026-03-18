/*
 * XREFs of _xxxInitWindowStation@0 @ 0xD69D6
 * Callers:
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 * Callees:
 *     _SetKeyboardRate@4 @ 0xD696C (_SetKeyboardRate@4.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     ?xxxLoadSomeStrings@@YGXXZ @ 0xD9A20 (-xxxLoadSomeStrings@@YGXXZ.c)
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 *     _SetMinMetrics@8 @ 0xDA05C (_SetMinMetrics@8.c)
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 */

int __stdcall xxxInitWindowStation()
{
  int ProfileUserName; // edi
  int v1; // esi
  _BYTE v3[12]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v3, 0, sizeof(v3));
  ProfileUserName = CreateProfileUserName(v3);
  FastGetProfileIntFromID(ProfileUserName, 2, 606, 0, &guDdeSendTimeout, 0);
  SetKeyboardRate();
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !GreTextInitialized() || (v1 = xxxSetWindowNCMetrics(ProfileUserName, 0, -1)) != 0 )
  {
    SetMinMetrics(ProfileUserName, 0);
    v1 = SetIconMetrics(ProfileUserName, 0);
    if ( v1 )
    {
      v1 = FinalUserInit();
      if ( v1 )
        *(_DWORD *)(_gpsi + 6228) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v3);
  return v1;
}
