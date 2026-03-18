/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1C00C3890
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00C1478 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00C2848 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C00C3B2C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C3CD4 (GreSfmCloseCompositorRef.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026F1D0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026F318 (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x1C02A0284 (GreSfmGenerateMoveData.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(HLSURF a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v5; // ebx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  NTSTATUS updated; // eax
  __int64 HDEV; // rax
  int v16; // edx
  HDEV v17; // rax
  ULONG v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21[6]; // [rsp+38h] [rbp-40h] BYREF

  v5 = -1073741811;
  memset(v21, 0, sizeof(v21));
  if ( a2 >= 11 )
  {
    v5 = -1073741821;
    v6 = 0;
    goto LABEL_60;
  }
  switch ( a2 )
  {
    case 1:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v7 = *(_DWORD *)a3;
      break;
    case 2:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 8 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      *(_QWORD *)v21 = *(_QWORD *)a3;
      goto LABEL_45;
    case 5:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 0x18 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      *(_OWORD *)v21 = *(_OWORD *)a3;
      *(_QWORD *)&v21[4] = *(_QWORD *)(a3 + 16);
      goto LABEL_45;
    case 7:
      v6 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    case 8:
      v6 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    case 10:
      v6 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v7 = *(_DWORD *)a3;
      break;
    default:
      v5 = -1073741821;
      v6 = 0;
      goto LABEL_51;
  }
  v21[0] = v7;
LABEL_45:
  v8 = a2 - 1;
  if ( !v8 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetPresentFlags(v20, a1, (unsigned int)v21[0]);
    goto LABEL_50;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetUpdateId(v19, a1, *(_QWORD *)v21);
    goto LABEL_50;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    if ( *(_OWORD *)&v21[2] == 0LL )
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, v21[0]);
    }
    else
    {
      HDEV = UserGetHDEV();
      updated = GreSetRedirectionSurfaceSignaling(HDEV, (__int64)a1, *(__int64 *)&v21[4], *(__int64 *)&v21[2], v21[0]);
    }
    goto LABEL_50;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    UserGetHDEV();
    updated = GreSfmOpenCompositorRef(v12, a1);
LABEL_50:
    v5 = updated;
    goto LABEL_51;
  }
  v16 = v11 - 1;
  if ( !v16 )
  {
    v17 = (HDEV)UserGetHDEV();
    updated = GreSfmCloseCompositorRef(v17, a1);
    goto LABEL_50;
  }
  if ( v16 == 2 )
    GreSfmGenerateMoveData((unsigned int)v21[0]);
LABEL_51:
  if ( v5 < 0 )
  {
LABEL_60:
    v18 = RtlNtStatusToDosError(v5);
    EngSetLastError(v18);
    return v6;
  }
  return 1;
}
