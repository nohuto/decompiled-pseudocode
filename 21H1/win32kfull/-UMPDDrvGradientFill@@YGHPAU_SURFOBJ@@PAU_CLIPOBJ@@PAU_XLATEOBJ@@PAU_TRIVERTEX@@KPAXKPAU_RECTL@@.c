/*
 * XREFs of ?UMPDDrvGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x20C966
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z @ 0x1F467B (-pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

BOOL __stdcall UMPDDrvGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v10; // ebx
  UMPDOBJ *v11; // esi
  unsigned int v12; // eax
  struct _POINTL *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  BOOL v16; // edi
  bool v17; // zf
  struct _SURFOBJ *v18; // ebx
  int v20; // [esp-4h] [ebp-84h]
  ULONG *v21; // [esp+0h] [ebp-80h]
  unsigned int v22; // [esp+0h] [ebp-80h]
  unsigned int v23; // [esp+0h] [ebp-80h]
  unsigned int v24; // [esp+0h] [ebp-80h]
  unsigned int v25; // [esp+0h] [ebp-80h]
  unsigned int *v26; // [esp+4h] [ebp-7Ch]
  unsigned int *v27; // [esp+4h] [ebp-7Ch]
  unsigned int *v28; // [esp+4h] [ebp-7Ch]
  unsigned int *v29; // [esp+4h] [ebp-7Ch]
  UMPDOBJ *v30; // [esp+10h] [ebp-70h] BYREF
  void *v31; // [esp+14h] [ebp-6Ch] BYREF
  void *v32; // [esp+18h] [ebp-68h] BYREF
  struct _SURFOBJ *v33; // [esp+1Ch] [ebp-64h]
  int v34; // [esp+20h] [ebp-60h] BYREF
  struct _POINTL *v35; // [esp+24h] [ebp-5Ch]
  int v36; // [esp+28h] [ebp-58h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-54h]
  struct _XLATEOBJ *v38; // [esp+30h] [ebp-50h]
  unsigned int v39; // [esp+34h] [ebp-4Ch]
  unsigned int v40; // [esp+38h] [ebp-48h] BYREF
  unsigned int v41; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v42[15]; // [esp+40h] [ebp-40h] BYREF

  v37 = (unsigned int)a2;
  v38 = a3;
  v40 = (unsigned int)a4;
  v39 = (unsigned int)a6;
  v10 = 0;
  v33 = a1;
  v35 = a9;
  v41 = 1;
  v34 = 0;
  v36 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v32 = 0;
  v31 = 0;
  memset(v42, 0, sizeof(v42));
  v11 = v30;
  if ( !v30 )
    goto LABEL_31;
  v42[0] = 60;
  v42[1] = 68;
  v42[4] = *(_DWORD *)v30;
  v42[6] = v37;
  v42[8] = v40;
  v42[9] = a5;
  v42[10] = v39;
  v42[12] = a8;
  v42[13] = v35;
  v42[5] = a1;
  v42[7] = v38;
  v42[11] = a7;
  v42[14] = a10;
  if ( a10 <= 1 )
  {
    v20 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_31;
    v20 = 12;
  }
  v37 = a7 * v20;
  if ( *((_DWORD *)v30 + 58) )
  {
    if ( v38 )
      v12 = 4 * v38->cEntries + 132;
    else
      v12 = 112;
    v39 = 0;
    v38 = (struct _XLATEOBJ *)v12;
    v41 = v12;
    if ( ULongLongToULong(16LL * a5, v21) >= 0 )
    {
      v40 = 0;
      if ( (ULongAdd(3, v39, (int *)&v40, v22, v26) & 0x80000000) == 0 )
      {
        v13 = (struct _POINTL *)(v40 & 0xFFFFFFFC);
        v40 = 0;
        v35 = v13;
        if ( (ULongAdd(3, v37, (int *)&v40, v23, v27) & 0x80000000) == 0 )
        {
          v14 = v40 & 0xFFFFFFFC;
          if ( (ULongAdd((int)v35, (unsigned int)v38, (int *)&v41, v24, v28) & 0x80000000) == 0
            && (ULongAdd(v14, v41, (int *)&v41, v25, v29) & 0x80000000) == 0 )
          {
            v15 = UMPDOBJ::bThunkLargeBitmap(v11, a1, &v32, &v31, &v34, &v36, &v41);
            v10 = v36;
            v16 = v15;
            v41 = v15;
            if ( !v15 )
              goto LABEL_27;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_31:
    v16 = 0;
    goto LABEL_32;
  }
LABEL_16:
  v16 = UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 40), (struct _SURFOBJ **)&v42[5], v10)
     && UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 64), (void **)&v42[6], 0x18u, 0)
     && UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&v42[7])
     && UMPDOBJ::ThunkMemBlock(v11, (void **)&v42[8], (void *)(16 * a5))
     && UMPDOBJ::ThunkMemBlock(v11, (void **)&v42[10], (void *)v37)
     && UMPDOBJ::ThunkMemBlock(v11, (void **)&v42[12], (void *)0x10)
     && UMPDOBJ::ThunkMemBlock(v11, (void **)&v42[13], (void *)8)
     && UMPDOBJ::Thunk(v11, v42, 0x3Cu, &v41, (char *)4) != -1
     && v41;
LABEL_27:
  if ( v34 )
  {
    v17 = v10 == 0;
    v18 = v33;
    if ( !v17 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, v33, 0, 0);
    v18->pvBits = v32;
    v18->pvScan0 = v31;
  }
LABEL_32:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v30);
  return v16;
}
