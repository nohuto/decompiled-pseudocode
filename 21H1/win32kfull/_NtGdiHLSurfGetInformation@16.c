/*
 * XREFs of _NtGdiHLSurfGetInformation@16 @ 0x2259C
 * Callers:
 *     <none>
 * Callees:
 *     _GreSfmGetDirtyRgn@40 @ 0x22718 (_GreSfmGetDirtyRgn@40.c)
 *     _GreDwmGetSurfaceData@12 @ 0x2320E (_GreDwmGetSurfaceData@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreDwmGetRedirectionStyle@12 @ 0x1CE113 (_GreDwmGetRedirectionStyle@12.c)
 */

int __stdcall NtGdiHLSurfGetInformation(int a1, int a2, void *a3, ULONG a4)
{
  NTSTATUS v4; // ebx
  size_t v5; // esi
  unsigned int *v6; // ecx
  unsigned int v7; // ecx
  const void *v8; // esi
  void *v9; // edi
  int SurfaceData; // eax
  _DWORD *v11; // eax
  int v12; // esi
  ULONG v14; // eax
  size_t Src[12]; // [esp+10h] [ebp-5Ch] BYREF
  size_t MaxCount; // [esp+4Ch] [ebp-20h]
  int v17; // [esp+50h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v4 = -1073741811;
  v5 = 48;
  memset(Src, 0, sizeof(Src));
  if ( a2 >= 11 )
    goto LABEL_26;
  ms_exc.registration.TryLevel = 0;
  v6 = (unsigned int *)a4;
  if ( a4 >= _MmUserProbeAddress )
    v6 = (unsigned int *)_MmUserProbeAddress;
  v7 = *v6;
  v17 = v7;
  ms_exc.registration.TryLevel = -2;
  switch ( a2 )
  {
    case 3:
      v9 = a3;
      if ( !a3 )
        goto LABEL_27;
LABEL_23:
      if ( v7 >= v5 )
      {
        v17 = v5;
        goto LABEL_11;
      }
      goto LABEL_33;
    case 4:
      goto LABEL_6;
    case 6:
      v9 = a3;
      if ( !a3 )
        goto LABEL_27;
      v5 = 24;
      goto LABEL_23;
  }
  if ( a2 != 9 )
  {
LABEL_26:
    v4 = -1073741821;
    goto LABEL_27;
  }
LABEL_6:
  if ( !a3 )
  {
LABEL_27:
    v12 = 0;
    v14 = RtlNtStatusToDosError(v4);
    EngSetLastError(v14);
    return v12;
  }
  MaxCount = 40;
  if ( v7 < 0x28 )
  {
LABEL_33:
    v4 = -1073741306;
    goto LABEL_27;
  }
  v17 = 40;
  ms_exc.registration.TryLevel = 1;
  v8 = a3;
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    v8 = (const void *)_MmUserProbeAddress;
  qmemcpy(Src, v8, 0x28u);
  ms_exc.registration.TryLevel = -2;
  v5 = MaxCount;
  v9 = a3;
LABEL_11:
  switch ( a2 )
  {
    case 3:
      UserGetHDEV();
      SurfaceData = GreDwmGetSurfaceData((struct tagDWMSURFACEDATA *)Src);
      break;
    case 4:
      SurfaceData = GreSfmGetDirtyRgn(a1, &Src[2], Src[0], Src[1], &Src[3], 0, 0, 0, &Src[8], &Src[9]);
      break;
    case 6:
      UserGetHDEV();
      SurfaceData = GreDwmGetRedirectionStyle((enum _HLSURF_REDIRECTIONSTYLE *)Src);
      break;
    default:
      SurfaceData = GreSfmGetDirtyRgn(a1, &Src[2], Src[0], Src[1], &Src[3], &Src[4], &Src[5], &Src[6], &Src[8], &Src[9]);
      break;
  }
  v4 = SurfaceData;
  if ( SurfaceData >= 0 )
  {
    ms_exc.registration.TryLevel = 2;
    if ( (unsigned int)v9 >= _MmUserProbeAddress )
      v9 = (void *)_MmUserProbeAddress;
    memcpy(v9, Src, v5);
    v11 = (_DWORD *)_MmUserProbeAddress;
    if ( a4 < _MmUserProbeAddress )
      v11 = (_DWORD *)a4;
    *v11 = v5;
    ms_exc.registration.TryLevel = -2;
  }
  v12 = 1;
  if ( v4 < 0 )
    goto LABEL_27;
  return v12;
}
