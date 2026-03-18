/*
 * XREFs of _W32kCddClipRegion@12 @ 0x1D4779
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ??0EngModeState@@QAE@XZ @ 0xF6218 (--0EngModeState@@QAE@XZ.c)
 *     ??1EngModeState@@QAE@XZ @ 0xF623E (--1EngModeState@@QAE@XZ.c)
 */

int __stdcall W32kCddClipRegion(HRGN a1, HRGN a2, int a3)
{
  int v3; // ebx
  _DWORD v5[3]; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v6[3]; // [esp+14h] [ebp-10h] BYREF
  _BYTE v7[4]; // [esp+20h] [ebp-4h] BYREF

  EngModeState::EngModeState((EngModeState *)v7);
  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 1);
  if ( v5[0] && v6[0] )
    v3 = RGNOBJAPI::iCombine((RGNOBJAPI *)v5, (struct RGNOBJ *)v6, a3 != 0 ? (struct RGNOBJ *)(a3 + 48) : 0, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  EngModeState::~EngModeState((EngModeState *)v7);
  return v3;
}
