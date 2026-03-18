/*
 * XREFs of _GreGetGlyphIndicesW@24 @ 0x8564C
 * Callers:
 *     _NtGdiGetGlyphIndicesWInternal@24 @ 0x85522 (_NtGdiGetGlyphIndicesWInternal@24.c)
 *     _GreGetCharacterPlacementW@24 @ 0x2221E7 (_GreGetCharacterPlacementW@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 */

unsigned int __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  _WORD *v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v9; // ecx
  unsigned int *v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  unsigned int *v13; // ecx
  __int16 v15; // si
  unsigned int v16; // edx
  unsigned int *v17; // ecx
  __int16 v18; // ax
  _DWORD v19[3]; // [esp+Ch] [ebp-18h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  unsigned __int16 *v21; // [esp+1Ch] [ebp-8h]
  unsigned int *v22; // [esp+20h] [ebp-4h]

  v6 = (_WORD *)a4;
  v7 = 0;
  v21 = a2;
  v19[1] = 0;
  v8 = -1;
  v19[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( v19[0] )
  {
    a4 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&a4, (struct XDCOBJ *)v19, 0, 2u) )
      GreAcquireSemaphore(*(_DWORD *)(a4 + 548));
    if ( a4 )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a4 + 80) + 20);
      v20 = *(unsigned __int8 *)(v9 + 108);
      if ( a3 )
      {
        v10 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463, 1);
        v22 = v10;
        if ( v10 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&a4, v21, a3, v10, a5, a6);
          v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a4 + 80) + 12) + 4);
          if ( (v11 & 6) != 0 )
          {
            if ( (v11 & 2) != 0 && (v15 = v20) != 0 )
            {
              v16 = &v6[a3] >= v6 ? (2 * a3 + 1) >> 1 : 0;
              if ( v16 )
              {
                v17 = v22;
                do
                {
                  v18 = *(_WORD *)v17;
                  a6 = 0xFFFF;
                  if ( v18 != -1 || a5 != 1 )
                    v18 += v15;
                  *v6 = v18;
                  ++v17;
                  ++v6;
                  ++v7;
                }
                while ( v7 < v16 );
              }
            }
            else
            {
              v12 = &v6[a3] >= v6 ? (2 * a3 + 1) >> 1 : 0;
              if ( v12 )
              {
                v13 = v22;
                do
                {
                  ++v7;
                  *v6++ = *(_WORD *)v13++;
                }
                while ( v7 < v12 );
              }
            }
            v8 = a3;
          }
          Win32FreePool(v22);
        }
      }
      else if ( *(_DWORD *)(v9 + 4) <= 8u )
      {
        v8 = 0;
      }
      else
      {
        v8 = *(_DWORD *)(v9 + 192);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v19);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a4);
  }
  return v8;
}
