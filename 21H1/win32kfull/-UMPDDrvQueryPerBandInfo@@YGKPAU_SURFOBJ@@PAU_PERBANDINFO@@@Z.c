/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YGKPAU_SURFOBJ@@PAU_PERBANDINFO@@@Z @ 0x20E10C
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // ebx
  UMPDOBJ *v3; // esi
  struct _SURFOBJ *v4; // edi
  char *v5; // eax
  char *v6; // edi
  struct _SURFOBJ *v7; // ecx
  void *v9; // [esp+Ch] [ebp-40h] BYREF
  void *v10; // [esp+10h] [ebp-3Ch] BYREF
  int v11; // [esp+14h] [ebp-38h] BYREF
  char *v12; // [esp+18h] [ebp-34h]
  int v13; // [esp+1Ch] [ebp-30h] BYREF
  UMPDOBJ *v14; // [esp+20h] [ebp-2Ch] BYREF
  struct _SURFOBJ *v15; // [esp+24h] [ebp-28h]
  unsigned int v16; // [esp+28h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+2Ch] [ebp-20h] BYREF

  v15 = a1;
  v2 = 0;
  v12 = (char *)a2;
  v16 = 1;
  v11 = 0;
  v13 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v14);
  v3 = v14;
  v10 = 0;
  v9 = 0;
  memset(Src, 0, sizeof(Src));
  if ( v14 )
  {
    v4 = v15;
    if ( !*((_DWORD *)v14 + 58)
      || (v16 = 52, (v16 = UMPDOBJ::bThunkLargeBitmap(v14, v15, &v10, &v9, &v11, &v13, &v16)) != 0) )
    {
      Src[0] = 28;
      Src[1] = 75;
      Src[4] = *(_DWORD *)v3;
      Src[5] = v4;
      if ( UMPDOBJ::pso(v3, (UMPDOBJ *)((char *)v3 + 40), (struct _SURFOBJ **)&Src[5], v13) )
      {
        v5 = UMPDOBJ::_AllocUserMem(v3, (char *)0x14, 0);
        Src[6] = v5;
        if ( v5 )
        {
          v6 = v12;
          if ( v12 )
          {
            qmemcpy(UMPDOBJ::GetKernelPtr(v3, v5), v12, 0x14u);
            v3 = v14;
            v6 = v12;
          }
          if ( UMPDOBJ::Thunk(v3, Src, 0x1Cu, &v16, (char *)4) != -1 && v6 )
          {
            qmemcpy(v6, UMPDOBJ::GetKernelPtr(v3, (char *)Src[6]), 0x14u);
            v3 = v14;
          }
        }
      }
    }
    if ( v11 )
    {
      if ( v13 )
        UMPDOBJ::bDeleteLargeBitmaps(v3, v15, 0, 0);
      v7 = v15;
      v15->pvBits = v10;
      v7->pvScan0 = v9;
    }
    v2 = v16;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v14);
  return v2;
}
