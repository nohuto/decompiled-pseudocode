/*
 * XREFs of ?ReadTabletButtonSettings@@YGXXZ @ 0x146F47
 * Callers:
 *     ?RegisterTabletButtonHandler@@YGXXZ @ 0x146FC0 (-RegisterTabletButtonHandler@@YGXXZ.c)
 * Callees:
 *     ?ReadTabletButtonConfig@@YGJIQBGPAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x146BAE (-ReadTabletButtonConfig@@YGJIQBGPAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 *     ?ReadTabletButtonIndex@@YGJIPAK@Z @ 0x146DD6 (-ReadTabletButtonIndex@@YGJIPAK@Z.c)
 */

void __stdcall ReadTabletButtonSettings()
{
  unsigned int i; // edi
  int v1; // esi
  const unsigned __int16 *v2; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v3; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v4; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v5; // [esp+0h] [ebp-10h]
  struct tagTABLET_BUTTON_DESK_CONFIG *v6; // [esp+4h] [ebp-Ch]
  struct tagTABLET_BUTTON_DESK_CONFIG *v7; // [esp+4h] [ebp-Ch]
  struct tagTABLET_BUTTON_DESK_CONFIG *v8; // [esp+4h] [ebp-Ch]
  struct tagTABLET_BUTTON_DESK_CONFIG *v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  for ( i = 0; i < 0xA; ++i )
  {
    v10 = 0;
    if ( ReadTabletButtonIndex(i, &v10) >= 0 )
    {
      v1 = v10 << 7;
      ReadTabletButtonConfig((int)L"PrimaryLandscape", i, (unsigned int)&TabButtonConfig + 128 * v10, v2, v6);
      ReadTabletButtonConfig((int)L"PrimaryPortrait", i, (unsigned int)&unk_275728 + v1, v3, v7);
      ReadTabletButtonConfig((int)L"SecondaryLandscape", i, (unsigned int)&unk_275748 + v1, v4, v8);
      ReadTabletButtonConfig((int)L"SecondaryPortrait", i, (unsigned int)&unk_275768 + v1, v5, v9);
    }
  }
}
