/*
 * XREFs of W32kCddClipRegion @ 0x1C0278D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001C99C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C015A418 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C015A454 (--1EngModeState@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3)
{
  struct RGNOBJ *v6; // rbp
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  char v11; // [rsp+70h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v11);
  v6 = (struct RGNOBJ *)((a3 + 56) & -(__int64)(a3 != 0));
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 1);
  v7 = 0;
  if ( v10[0] && v9[0] )
    v7 = RGNOBJAPI::iCombine((RGNOBJAPI *)v10, (struct RGNOBJ *)v9, v6, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
  EngModeState::~EngModeState((EngModeState *)&v11);
  return v7;
}
