/*
 * XREFs of ?UMPDDrvEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z @ 0x20C1E1
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QBEHPAX@Z @ 0x1F43DE (-bNeedThunk@UMPDOBJ@@QBEHPAX@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

int __stdcall UMPDDrvEscape(struct _SURFOBJ *a1, unsigned int a2, void *a3, void **a4, size_t a5, void *a6)
{
  int v6; // edi
  void *v7; // ebx
  UMPDOBJ *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  void **v12; // edx
  struct _SURFOBJ *v13; // ecx
  char *KernelPtr; // eax
  struct _SURFOBJ *v15; // ecx
  size_t v17; // [esp-4h] [ebp-74h]
  unsigned int v18; // [esp+0h] [ebp-70h]
  unsigned int v19; // [esp+0h] [ebp-70h]
  unsigned int v20; // [esp+0h] [ebp-70h]
  unsigned int v21; // [esp+0h] [ebp-70h]
  unsigned int *v22; // [esp+4h] [ebp-6Ch]
  unsigned int *v23; // [esp+4h] [ebp-6Ch]
  unsigned int *v24; // [esp+4h] [ebp-6Ch]
  unsigned int *v25; // [esp+4h] [ebp-6Ch]
  int v26; // [esp+10h] [ebp-60h]
  void *v27; // [esp+14h] [ebp-5Ch] BYREF
  void *v28; // [esp+18h] [ebp-58h] BYREF
  int v29; // [esp+1Ch] [ebp-54h] BYREF
  void **v30; // [esp+20h] [ebp-50h]
  UMPDOBJ *v31; // [esp+24h] [ebp-4Ch] BYREF
  int v32; // [esp+28h] [ebp-48h] BYREF
  size_t MaxCount; // [esp+2Ch] [ebp-44h]
  unsigned int v34; // [esp+30h] [ebp-40h] BYREF
  void *v35; // [esp+34h] [ebp-3Ch] BYREF
  void *v36; // [esp+38h] [ebp-38h] BYREF
  struct _SURFOBJ *v37; // [esp+3Ch] [ebp-34h]
  _DWORD v38[11]; // [esp+40h] [ebp-30h] BYREF

  v30 = a4;
  v37 = a1;
  v6 = -1;
  MaxCount = a5;
  v32 = -1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v7 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v35 = 0;
  memset(v38, 0, sizeof(v38));
  v8 = v31;
  if ( !v31 )
    goto LABEL_28;
  if ( *((_DWORD *)v31 + 58) )
  {
    v36 = 0;
    v34 = 52;
    if ( (ULongAdd(3, (unsigned int)a3, (int *)&v36, v18, v22) & 0x80000000) != 0 )
      goto LABEL_28;
    v9 = (unsigned int)v36 & 0xFFFFFFFC;
    v36 = 0;
    v26 = v9;
    if ( (ULongAdd(3, MaxCount, (int *)&v36, v19, v23) & 0x80000000) != 0 )
      goto LABEL_28;
    v10 = (unsigned int)v36 & 0xFFFFFFFC;
    if ( (ULongAdd(v26, 0x34u, (int *)&v34, v20, v24) & 0x80000000) != 0
      || (ULongAdd(v10, v34, (int *)&v34, v21, v25) & 0x80000000) != 0 )
    {
      goto LABEL_28;
    }
    v11 = UMPDOBJ::bThunkLargeBitmap(v8, v37, &v28, &v27, &v29, (int *)&v35, &v34);
    v7 = v35;
    if ( !v11 )
      goto LABEL_23;
  }
  v38[0] = 44;
  v38[1] = 24;
  v12 = a3 != 0 ? v30 : 0;
  v38[4] = *(_DWORD *)v8;
  v38[5] = v37;
  v38[9] = MaxCount;
  v38[7] = a3;
  v8 = v31;
  v35 = MaxCount != 0 ? a6 : 0;
  v30 = v12;
  v38[6] = a2;
  v38[8] = v12;
  v38[10] = v35;
  if ( a2 != 25 )
    goto LABEL_13;
  v13 = v37;
  if ( *((int *)v37->hdev + 280) >= 0 )
    goto LABEL_13;
  if ( !v12 )
    goto LABEL_24;
  v36 = v12[5];
  if ( UMPDOBJ::ThunkDDIOBJ(v31, (UMPDOBJ *)((char *)v31 + 144), &v36, 4u, 0) )
  {
    v12 = v30;
    *(_DWORD *)(v38[8] + 20) = v36;
LABEL_13:
    if ( (!a3 || !UMPDOBJ::bNeedThunk(v8, v12) || UMPDOBJ::ThunkMemBlock(v8, (void **)&v38[8], a3))
      && (!MaxCount || (v38[10] = UMPDOBJ::_AllocUserMem(v8, (char *)MaxCount, 1)) != 0)
      && UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 40), (struct _SURFOBJ **)&v38[5], (int)v7)
      && UMPDOBJ::Thunk(v8, v38, 0x2Cu, &v32, (char *)4) != -1 )
    {
      if ( MaxCount )
      {
        v17 = MaxCount;
        KernelPtr = UMPDOBJ::GetKernelPtr(v8, (char *)v38[10]);
        memcpy(v35, KernelPtr, v17);
      }
      v6 = v32;
    }
  }
LABEL_23:
  v13 = v37;
LABEL_24:
  if ( v29 )
  {
    if ( v7 )
      UMPDOBJ::bDeleteLargeBitmaps(v8, v13, 0, 0);
    v15 = v37;
    v37->pvBits = v28;
    v15->pvScan0 = v27;
  }
LABEL_28:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v31);
  return v6;
}
