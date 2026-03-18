/*
 * XREFs of ?UMPDDrvSendPage@@YGHPAU_SURFOBJ@@@Z @ 0x20E509
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

unsigned int __stdcall UMPDDrvSendPage(struct _SURFOBJ *a1)
{
  unsigned int v1; // ebx
  UMPDOBJ *v2; // esi
  struct _SURFOBJ *v3; // edi
  int v4; // edi
  struct _SURFOBJ *v5; // ecx
  unsigned int v7; // [esp+Ch] [ebp-3Ch] BYREF
  struct _SURFOBJ *v8; // [esp+10h] [ebp-38h]
  int v9; // [esp+14h] [ebp-34h] BYREF
  unsigned int v10; // [esp+18h] [ebp-30h] BYREF
  int v11; // [esp+1Ch] [ebp-2Ch] BYREF
  void *v12; // [esp+20h] [ebp-28h] BYREF
  void *v13; // [esp+24h] [ebp-24h] BYREF
  UMPDOBJ *v14; // [esp+28h] [ebp-20h] BYREF
  _DWORD Src[6]; // [esp+2Ch] [ebp-1Ch] BYREF

  v1 = 0;
  v8 = a1;
  v10 = 1;
  v11 = 0;
  v9 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v14);
  v2 = v14;
  v12 = 0;
  v13 = 0;
  memset(Src, 0, sizeof(Src));
  if ( v14 )
  {
    v3 = v8;
    if ( !*((_DWORD *)v14 + 58)
      || (v7 = 28, v7 = UMPDOBJ::bThunkLargeBitmap(v14, v8, &v12, &v13, &v11, &v9, &v7), (v10 = v7) != 0) )
    {
      Src[0] = 24;
      Src[1] = 32;
      Src[4] = *(_DWORD *)v2;
      Src[5] = v3;
      v4 = v9;
      if ( !UMPDOBJ::pso(v2, (UMPDOBJ *)((char *)v2 + 40), (struct _SURFOBJ **)&Src[5], v9)
        || UMPDOBJ::Thunk(v2, Src, 0x18u, &v10, (char *)4) == -1
        || (v7 = 1, !v10) )
      {
        v7 = 0;
      }
    }
    else
    {
      v4 = v9;
    }
    if ( v11 )
    {
      if ( v4 )
        UMPDOBJ::bDeleteLargeBitmaps(v2, v8, 0, 0);
      v5 = v8;
      v8->pvBits = v12;
      v5->pvScan0 = v13;
    }
    v1 = v7;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v14);
  return v1;
}
