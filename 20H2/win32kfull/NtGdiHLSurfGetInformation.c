/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x1C0090020
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmGetDirtyRgn @ 0x1C00933FC (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00C2E64 (GreDwmGetSurfaceData.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026ED34 (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(__int64 a1, int a2, void *a3, ULONG64 a4)
{
  _DWORD *v4; // r13
  NTSTATUS v7; // ebx
  unsigned int *v8; // rax
  unsigned int v9; // r8d
  unsigned int v10; // edi
  size_t v11; // r14
  int v12; // esi
  ULONG64 v13; // rax
  int v14; // edx
  int v15; // edx
  NTSTATUS SurfaceData; // eax
  __int64 HDEV; // rax
  ULONG v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int128 Src; // [rsp+58h] [rbp-50h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h] BYREF
  __int128 v24; // [rsp+78h] [rbp-30h] BYREF
  __int64 v25; // [rsp+88h] [rbp-20h] BYREF

  v4 = (_DWORD *)a4;
  v7 = -1073741811;
  Src = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( a2 >= 11 )
    goto LABEL_27;
  v8 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  switch ( a2 )
  {
    case 3:
      v10 = 0;
      if ( !a3 )
        goto LABEL_28;
      v11 = 48LL;
      if ( v9 >= 0x30 )
      {
        v12 = 48;
        goto LABEL_11;
      }
      goto LABEL_35;
    case 4:
      goto LABEL_6;
    case 6:
      v10 = 0;
      if ( !a3 )
        goto LABEL_28;
      v12 = 32;
      if ( v9 >= 0x20 )
      {
        v11 = 32LL;
        goto LABEL_11;
      }
LABEL_35:
      v7 = -1073741306;
      goto LABEL_28;
  }
  if ( a2 != 9 )
  {
LABEL_27:
    v7 = -1073741821;
    v10 = 0;
    goto LABEL_28;
  }
LABEL_6:
  v10 = 0;
  if ( !a3 )
  {
LABEL_28:
    v19 = RtlNtStatusToDosError(v7);
    EngSetLastError(v19);
    return v10;
  }
  v11 = 56LL;
  if ( v9 < 0x38 )
    goto LABEL_35;
  v12 = 56;
  v13 = (ULONG64)a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  Src = *(_OWORD *)v13;
  v23 = *(_OWORD *)(v13 + 16);
  v24 = *(_OWORD *)(v13 + 32);
  v25 = *(_QWORD *)(v13 + 48);
LABEL_11:
  v14 = a2 - 3;
  if ( !v14 )
  {
    HDEV = UserGetHDEV();
    SurfaceData = GreDwmGetSurfaceData(HDEV, a1, &Src);
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    SurfaceData = GreSfmGetDirtyRgn(a1, Src, (char *)&Src + 8, &v23, 0LL, 0LL, 0LL, &v25, (char *)&v25 + 4);
LABEL_14:
    v7 = SurfaceData;
    goto LABEL_15;
  }
  v20 = v15 - 2;
  if ( !v20 )
  {
    UserGetHDEV();
    SurfaceData = GreDwmGetRedirectionStyle(v21, a1, &Src);
    goto LABEL_14;
  }
  if ( v20 == 3 )
  {
    SurfaceData = GreSfmGetDirtyRgn(
                    a1,
                    Src,
                    (char *)&Src + 8,
                    &v23,
                    (char *)&v23 + 8,
                    &v24,
                    (char *)&v24 + 8,
                    &v25,
                    (char *)&v25 + 4);
    goto LABEL_14;
  }
LABEL_15:
  if ( v7 < 0 )
    goto LABEL_28;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void *)MmUserProbeAddress;
  memmove(a3, &Src, v11);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  *v4 = v12;
  return 1;
}
