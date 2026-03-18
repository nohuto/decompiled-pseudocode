/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_XFORMOBJ@@KKPAXK3@Z @ 0x20D90D
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z @ 0x1F467B (-pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

int __stdcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        unsigned int a4,
        void *a5,
        void *a6,
        size_t a7,
        void *a8)
{
  int v8; // edi
  UMPDOBJ *v9; // esi
  unsigned int v10; // edi
  char *v11; // edi
  char *v12; // ecx
  char *KernelPtr; // eax
  struct _SURFOBJ *v14; // ecx
  unsigned int v16; // [esp+0h] [ebp-A8h]
  unsigned int v17; // [esp+0h] [ebp-A8h]
  unsigned int v18; // [esp+0h] [ebp-A8h]
  unsigned int v19; // [esp+0h] [ebp-A8h]
  unsigned int *v20; // [esp+4h] [ebp-A4h]
  unsigned int *v21; // [esp+4h] [ebp-A4h]
  unsigned int *v22; // [esp+4h] [ebp-A4h]
  unsigned int *v23; // [esp+4h] [ebp-A4h]
  unsigned int v24; // [esp+20h] [ebp-88h]
  void *v25; // [esp+24h] [ebp-84h] BYREF
  void *v26; // [esp+28h] [ebp-80h] BYREF
  int v27; // [esp+2Ch] [ebp-7Ch] BYREF
  size_t MaxCount; // [esp+30h] [ebp-78h]
  struct _XLATEOBJ *v29; // [esp+34h] [ebp-74h]
  unsigned int v30; // [esp+38h] [ebp-70h] BYREF
  unsigned int v31; // [esp+3Ch] [ebp-6Ch] BYREF
  void *v32; // [esp+40h] [ebp-68h]
  int v33; // [esp+44h] [ebp-64h] BYREF
  UMPDOBJ *v34; // [esp+48h] [ebp-60h] BYREF
  unsigned int v35; // [esp+4Ch] [ebp-5Ch] BYREF
  unsigned int v36; // [esp+50h] [ebp-58h] BYREF
  struct _SURFOBJ *v37; // [esp+54h] [ebp-54h]
  _DWORD v38[14]; // [esp+58h] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+90h] [ebp-18h]

  v32 = a8;
  v37 = a1;
  v29 = a2;
  MaxCount = a7;
  v8 = 1;
  v36 = 1;
  v27 = 0;
  v33 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  v26 = 0;
  v25 = 0;
  memset(v38, 0, 0x34u);
  v9 = v34;
  if ( !v34 )
    goto LABEL_32;
  if ( *((_DWORD *)v34 + 58) )
  {
    if ( v29 )
      v10 = ((4 * v29->cEntries + 3) & 0xFFFFFFFC) + 80;
    else
      v10 = 60;
    v35 = v10;
    v31 = 0;
    if ( (ULongAdd(3, (unsigned int)a5, (int *)&v31, v16, v20) & 0x80000000) == 0 )
    {
      v36 = v31 & 0xFFFFFFFC;
      v30 = 0;
      if ( (ULongAdd(3, MaxCount, (int *)&v30, v17, v21) & 0x80000000) == 0 )
      {
        v24 = v30 & 0xFFFFFFFC;
        if ( (ULongAdd(v36, v10, (int *)&v35, v18, v22) & 0x80000000) == 0
          && (ULongAdd(v24, v35, (int *)&v35, v19, v23) & 0x80000000) == 0 )
        {
          v8 = UMPDOBJ::bThunkLargeBitmap(v9, v37, &v26, &v25, &v27, &v33, &v35);
          v36 = v8;
          goto LABEL_11;
        }
      }
    }
LABEL_32:
    XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v34);
    return 0;
  }
LABEL_11:
  if ( v8 )
  {
    v38[0] = 52;
    v38[1] = 76;
    v38[4] = *(_DWORD *)v9;
    v38[5] = v37;
    v38[6] = v29;
    v38[7] = a3;
    v11 = (char *)MaxCount;
    v32 = MaxCount != 0 ? v32 : 0;
    v38[8] = a4;
    v38[9] = a5;
    v38[10] = a5 != 0 ? a6 : 0;
    v38[11] = MaxCount;
    v38[12] = v32;
    if ( (!a5 || UMPDOBJ::ThunkMemBlock(v9, (void **)&v38[10], a5))
      && (!v11 || (v38[12] = UMPDOBJ::_AllocUserMem(v9, v11, 1)) != 0)
      && UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 40), (struct _SURFOBJ **)&v38[5], v33)
      && UMPDOBJ::pxlo(v9, (struct _XLATEOBJ **)&v38[6])
      && UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 144), (void **)&v38[7], 4u, 0)
      && UMPDOBJ::Thunk(v9, v38, 0x34u, &v36, (char *)4) != -1 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( v11 )
      {
        v12 = (char *)v38[12];
        if ( (unsigned int)&v11[v38[12]] > _MmUserProbeAddress || (unsigned int)&v11[v38[12]] < v38[12] )
          *(_BYTE *)_MmUserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, v12);
        memcpy(v32, KernelPtr, (size_t)v11);
      }
      ms_exc.registration.TryLevel = -2;
      v8 = v36;
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v27 )
  {
    if ( v33 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, v37, 0, 0);
    v14 = v37;
    v37->pvBits = v26;
    v14->pvScan0 = v25;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v34);
  return v8;
}
