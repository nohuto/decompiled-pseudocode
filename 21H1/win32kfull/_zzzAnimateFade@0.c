/*
 * XREFs of _zzzAnimateFade@0 @ 0x153DEC
 * Callers:
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?DrawSonar@@YGXPAUHDC__@@@Z @ 0x1532D7 (-DrawSonar@@YGXPAUHDC__@@@Z.c)
 *     ?zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z @ 0x1535CE (-zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 */

HDEV __stdcall zzzAnimateFade()
{
  int v0; // edi
  int v1; // ecx
  int v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // ebx
  bool v8; // zf
  HDEV result; // eax
  struct tagPOINT *v10; // [esp+0h] [ebp-20h]
  struct _BLENDFUNCTION *v11; // [esp+4h] [ebp-1Ch]
  _BYTE v12[8]; // [esp+10h] [ebp-10h] BYREF
  unsigned int v13; // [esp+18h] [ebp-8h]
  struct HDC__ v14; // [esp+1Ch] [ebp-4h] BYREF

  v0 = MEMORY[0xFFDF0004];
  v13 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v2 = MEMORY[0xFFDF0324];
    v3 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v2 = MEMORY[0xFFDF0324];
        v3 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v0 = v13;
    }
    v1 = v0 * (v2 << 8) + (((unsigned int)v0 * (unsigned __int64)v3) >> 24);
  }
  else
  {
    v1 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v4 = v1 - (_DWORD)_gfade[8];
  v5 = (unsigned int)_gfade[7];
  if ( v4 > v5 )
    return StopFade();
  v13 = (unsigned int)_gfade[9] & 1;
  if ( v13 )
    v6 = 255 * v4;
  else
    v6 = 255 * (v5 - v4);
  LOWORD(v14.unused) = 0;
  v7 = v6 / v5;
  HIWORD(v14.unused) = (unsigned __int8)(v6 / v5);
  if ( SLOBYTE(_gfade[9]) >= 0 )
  {
    zzzUpdateFade(0, 0, 0, 0, (struct tagPOINT *)&v14, v10, v11);
  }
  else
  {
    DrawSonar(_gfade[1]);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
    zzzUpdateFade((HDC)&_gfade[5], &_gfade[3], (struct tagPOINT *)_gfade[1], _gZero, 0, v10, v11);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
    giSonarRadius -= 20;
  }
  if ( v13 )
    v8 = (_BYTE)v7 == 0xFF;
  else
    v8 = (_BYTE)v7 == 0;
  if ( v8 || (result = _gfade[0], SLOBYTE(_gfade[9]) < 0) && giSonarRadius < 0 )
  {
    _gfade[9] = (HDEV)((unsigned int)_gfade[9] | 2);
    return StopFade();
  }
  return result;
}
