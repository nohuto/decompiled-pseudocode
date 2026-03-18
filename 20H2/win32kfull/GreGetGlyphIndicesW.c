/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C010B4F8
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C010B310 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C02BAC10 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0060F30 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(HDC a1, WCHAR *a2, unsigned int a3, _WORD *a4, unsigned int a5, int a6)
{
  unsigned __int64 v7; // rbx
  _WORD *v8; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int16 v12; // r13
  unsigned int *v13; // rax
  unsigned int *v14; // r14
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int16 v20; // cx
  unsigned int *v21; // [rsp+30h] [rbp-20h]
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v7 = 0LL;
  v8 = a4;
  v22[1] = 0LL;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  XDCOBJ::vLock((XDCOBJ *)v22, a1);
  if ( v22[0] )
  {
    v24 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v24, (struct XDCOBJ *)v22, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v24 + 504));
    if ( v24 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v24 + 120) + 32LL);
      v12 = *(unsigned __int8 *)(v11 + 108);
      if ( a3 )
      {
        v13 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v21 = v13;
        v14 = v13;
        if ( v13 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v24, a2, a3, v13, a5, a6);
          v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 120) + 16LL) + 4LL);
          if ( (v15 & 6) != 0 )
          {
            if ( (v15 & 2) != 0 && v12 )
            {
              v18 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v18 = 0LL;
              if ( v18 )
              {
                v19 = a5;
                do
                {
                  v20 = *(_WORD *)v14;
                  if ( *(_WORD *)v14 != 0xFFFF || v19 != 1 )
                    v20 += v12;
                  *v8 = v20;
                  ++v14;
                  ++v8;
                  ++v7;
                }
                while ( v7 < v18 );
              }
            }
            else
            {
              v16 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v16 = 0LL;
              if ( v16 )
              {
                do
                {
                  ++v7;
                  *v8++ = *(_WORD *)v14++;
                }
                while ( v7 < v16 );
              }
            }
            v9 = a3;
          }
          Win32FreePool(v21);
        }
      }
      else if ( *(_DWORD *)(v11 + 4) <= 8u )
      {
        v9 = 0;
      }
      else
      {
        v9 = *(_DWORD *)(v11 + 200);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  }
  return v9;
}
