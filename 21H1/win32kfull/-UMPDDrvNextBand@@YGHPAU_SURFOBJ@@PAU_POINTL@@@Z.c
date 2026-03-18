/*
 * XREFs of ?UMPDDrvNextBand@@YGHPAU_SURFOBJ@@PAU_POINTL@@@Z @ 0x20D15F
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvNextBand(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v2; // ebx
  UMPDOBJ *v3; // esi
  struct _SURFOBJ *v4; // edi
  int v5; // edi
  char *KernelPtr; // eax
  struct _POINTL *v7; // edx
  struct _SURFOBJ *v8; // ecx
  UMPDOBJ *v10; // [esp+Ch] [ebp-40h] BYREF
  void *v11; // [esp+10h] [ebp-3Ch] BYREF
  void *v12; // [esp+14h] [ebp-38h] BYREF
  int v13; // [esp+18h] [ebp-34h] BYREF
  struct _POINTL *v14; // [esp+1Ch] [ebp-30h]
  int v15; // [esp+20h] [ebp-2Ch] BYREF
  struct _SURFOBJ *v16; // [esp+24h] [ebp-28h]
  unsigned int v17; // [esp+28h] [ebp-24h] BYREF
  _DWORD v18[7]; // [esp+2Ch] [ebp-20h] BYREF

  v16 = a1;
  v2 = 0;
  v14 = a2;
  v17 = 1;
  v13 = 0;
  v15 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  v3 = v10;
  v12 = 0;
  v11 = 0;
  memset(v18, 0, sizeof(v18));
  if ( v10 )
  {
    v4 = v16;
    if ( !*((_DWORD *)v10 + 58)
      || (v17 = 40, (v17 = UMPDOBJ::bThunkLargeBitmap(v10, v16, &v12, &v11, &v13, &v15, &v17)) != 0) )
    {
      v18[0] = 28;
      v18[1] = 58;
      v18[4] = *(_DWORD *)v3;
      v18[5] = v4;
      v5 = v15;
      v18[6] = v14;
      if ( UMPDOBJ::pso(v3, (UMPDOBJ *)((char *)v3 + 40), (struct _SURFOBJ **)&v18[5], v15)
        && UMPDOBJ::ThunkMemBlock(v3, (void **)&v18[6], (void *)8)
        && UMPDOBJ::Thunk(v3, v18, 0x1Cu, &v17, (char *)4) != -1
        && v14 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v3, (char *)v18[6]);
        v7 = v14;
        v14->x = *(_DWORD *)KernelPtr;
        v7->y = *((_DWORD *)KernelPtr + 1);
      }
    }
    else
    {
      v5 = v15;
    }
    if ( v13 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v3, v16, 0, 0);
      v8 = v16;
      v16->pvBits = v12;
      v8->pvScan0 = v11;
    }
    v2 = v17;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v10);
  return v2;
}
