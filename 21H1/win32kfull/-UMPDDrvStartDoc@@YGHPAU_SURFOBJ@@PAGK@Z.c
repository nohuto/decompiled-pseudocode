/*
 * XREFs of ?UMPDDrvStartDoc@@YGHPAU_SURFOBJ@@PAGK@Z @ 0x20E79C
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z @ 0x20AAA2 (-ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

int __stdcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, unsigned int a3)
{
  int v3; // ebx
  UMPDOBJ *v4; // esi
  int v5; // edi
  unsigned int v6; // eax
  struct _SURFOBJ *v7; // ecx
  unsigned int v9; // [esp+0h] [ebp-58h]
  unsigned int v10; // [esp+0h] [ebp-58h]
  unsigned int *v11; // [esp+4h] [ebp-54h]
  unsigned int *v12; // [esp+4h] [ebp-54h]
  unsigned int v13; // [esp+10h] [ebp-48h] BYREF
  struct _SURFOBJ *v14; // [esp+14h] [ebp-44h]
  int v15; // [esp+18h] [ebp-40h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-3Ch] BYREF
  const unsigned __int16 *v17; // [esp+20h] [ebp-38h]
  int v18; // [esp+24h] [ebp-34h] BYREF
  void *v19; // [esp+28h] [ebp-30h] BYREF
  void *v20; // [esp+2Ch] [ebp-2Ch] BYREF
  UMPDOBJ *v21; // [esp+30h] [ebp-28h] BYREF
  _DWORD Src[8]; // [esp+34h] [ebp-24h] BYREF

  v14 = a1;
  v3 = 0;
  v17 = a2;
  v13 = 1;
  v18 = 0;
  v15 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v19 = 0;
  v20 = 0;
  v4 = v21;
  memset(Src, 0, sizeof(Src));
  v5 = 0;
  if ( !v21 )
    goto LABEL_17;
  if ( *((_DWORD *)v21 + 58) )
  {
    v16 = 36;
    if ( v17 )
    {
      v13 = 0;
      if ( (ULongAdd(3, 2 * wcslen(v17) + 2, (int *)&v13, v9, v11) & 0x80000000) != 0
        || (ULongAdd(v13 & 0xFFFFFFFC, 0x24u, (int *)&v16, v10, v12) & 0x80000000) != 0 )
      {
        goto LABEL_17;
      }
    }
    v6 = UMPDOBJ::bThunkLargeBitmap(v4, v14, &v19, &v20, &v18, &v15, &v16);
    v3 = v15;
    v5 = v6;
    v13 = v6;
    if ( !v6 )
      goto LABEL_13;
    v5 = 0;
  }
  Src[0] = 32;
  Src[1] = 35;
  Src[4] = *(_DWORD *)v4;
  Src[5] = v14;
  Src[6] = v17;
  Src[7] = a3;
  if ( UMPDOBJ::pso(v4, (UMPDOBJ *)((char *)v4 + 40), (struct _SURFOBJ **)&Src[5], v3)
    && UMPDOBJ::ThunkStringW(v4, (unsigned __int16 **)&Src[6])
    && UMPDOBJ::Thunk(v4, Src, 0x20u, &v13, (char *)4) != -1
    && v13 )
  {
    v5 = 1;
  }
LABEL_13:
  if ( v18 )
  {
    if ( v3 )
      UMPDOBJ::bDeleteLargeBitmaps(v4, v14, 0, 0);
    v7 = v14;
    v14->pvBits = v19;
    v7->pvScan0 = v20;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v21);
  return v5;
}
