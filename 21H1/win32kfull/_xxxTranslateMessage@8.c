/*
 * XREFs of _xxxTranslateMessage@8 @ 0xA5F1E
 * Callers:
 *     _NtUserTranslateMessage@8 @ 0xA5EA8 (_NtUserTranslateMessage@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     __PostMessageExtended@20 @ 0x6DA3C (__PostMessageExtended@20.c)
 *     ??1CEtwTraceTranslateMessage@@QAE@XZ @ 0xA60BA (--1CEtwTraceTranslateMessage@@QAE@XZ.c)
 *     ??0CEtwTraceTranslateMessage@@QAE@I@Z @ 0xA60DE (--0CEtwTraceTranslateMessage@@QAE@I@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __fastcall xxxTranslateMessage(int a1, int a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  BOOL v11; // esi
  int v13; // eax
  unsigned int v14; // ebx
  _DWORD *v15; // ecx
  _WORD *v16; // esi
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  _DWORD *v20; // eax
  _BYTE v21[4]; // [esp+8h] [ebp-38h] BYREF
  int v22; // [esp+Ch] [ebp-34h]
  _DWORD *v23; // [esp+10h] [ebp-30h]
  int v24; // [esp+14h] [ebp-2Ch]
  int v25; // [esp+18h] [ebp-28h] BYREF
  _BYTE v26[32]; // [esp+1Ch] [ebp-24h] BYREF

  v24 = 0;
  v25 = 0;
  v23 = (_DWORD *)a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 < 0x100 )
    return 0;
  if ( v4 <= 0x101 )
    goto LABEL_3;
  if ( v4 == 260 )
  {
    v24 = 1;
  }
  else if ( v4 != 261 )
  {
    return 0;
  }
LABEL_3:
  v22 = _gptiCurrent;
  CEtwTraceTranslateMessage::CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)v21, v4);
  v5 = *(_DWORD *)(_gptiCurrent + 328);
  if ( !v5 )
    goto LABEL_4;
  v20 = *(_DWORD **)(*(_DWORD *)v5 + 8);
  if ( v20 )
    v20 = (_DWORD *)*v20;
  if ( v20 == *(_DWORD **)a1 )
    v6 = a2 | 1;
  else
LABEL_4:
    v6 = a2 & 0xFFFFFFFE;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = xxxInternalToUnicode(
         *(unsigned __int16 *)(a1 + 8),
         HIWORD(v7),
         *(_DWORD *)(v22 + 236) + 152,
         v26,
         16,
         v6,
         &v25,
         0);
  v9 = v8;
  v10 = v25 & 0x4000000 | v7;
  if ( v8 )
  {
    if ( v8 <= 0 )
    {
      v9 = -v8;
      v13 = 259;
    }
    else
    {
      v13 = 258;
    }
    v24 = v13 + 4 * v24;
    if ( (v25 & 0x8000) != 0 )
      v14 = v10 | 0x80000000;
    else
      v14 = v10 & 0x7FFFFFFF;
    v15 = (_DWORD *)ValidateHwnd(*v23);
    v23 = v15;
    if ( v15 )
    {
      v16 = v26;
      while ( v9 > 0 )
      {
        if ( v9 > 1 )
          v17 = 0x2000000;
        else
          v17 = 0;
        v18 = _PostMessageExtended(v15, v24, (unsigned __int16)*v16, v14 | v17, 0);
        *v16++ = 0;
        if ( v18 >= (unsigned int)_MmSystemRangeStart
          && *(_DWORD *)(v18 + 12) == 258
          && (*(_BYTE *)(v22 + 764) & 1) != 0 )
        {
          v19 = *(_DWORD *)(v18 + 64) | 0x4000;
          *(_DWORD *)(v18 + 64) = v19;
          if ( (v25 & 0x8000000) != 0 )
            *(_DWORD *)(v18 + 64) = v19 | 0x8000;
        }
        v15 = v23;
        --v9;
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = (v6 & 2) == 0;
  }
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)v21);
  return v11;
}
