/*
 * XREFs of ?UMPDDrvEndDoc@@YGHPAU_SURFOBJ@@K@Z @ 0x20C0BB
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvEndDoc(struct _SURFOBJ *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  UMPDOBJ *v3; // esi
  struct _SURFOBJ *v4; // edi
  int v5; // edi
  struct _SURFOBJ *v6; // ecx
  UMPDOBJ *v8; // [esp+Ch] [ebp-40h] BYREF
  void *v9; // [esp+10h] [ebp-3Ch] BYREF
  void *v10; // [esp+14h] [ebp-38h] BYREF
  int v11; // [esp+18h] [ebp-34h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-30h] BYREF
  int v13; // [esp+20h] [ebp-2Ch] BYREF
  struct _SURFOBJ *v14; // [esp+24h] [ebp-28h]
  unsigned int v15; // [esp+28h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+2Ch] [ebp-20h] BYREF

  v2 = 0;
  v14 = a1;
  v12 = 1;
  v11 = 0;
  v13 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v3 = v8;
  v10 = 0;
  v9 = 0;
  memset(Src, 0, sizeof(Src));
  if ( v8 )
  {
    v4 = v14;
    if ( !*((_DWORD *)v8 + 58)
      || (v15 = 32, v15 = UMPDOBJ::bThunkLargeBitmap(v8, v14, &v10, &v9, &v11, &v13, &v15), (v12 = v15) != 0) )
    {
      Src[0] = 28;
      Src[1] = 34;
      Src[4] = *(_DWORD *)v3;
      Src[5] = v4;
      v5 = v13;
      Src[6] = a2;
      if ( !UMPDOBJ::pso(v3, (UMPDOBJ *)((char *)v3 + 40), (struct _SURFOBJ **)&Src[5], v13)
        || UMPDOBJ::Thunk(v3, Src, 0x1Cu, &v12, (char *)4) == -1
        || (v15 = 1, !v12) )
      {
        v15 = 0;
      }
    }
    else
    {
      v5 = v13;
    }
    if ( v11 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v3, v14, 0, 0);
      v6 = v14;
      v14->pvBits = v10;
      v6->pvScan0 = v9;
    }
    v2 = v15;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v8);
  return v2;
}
