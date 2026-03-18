/*
 * XREFs of _NtGdiHLSurfSetInformation@16 @ 0x21FD4
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetRedirectionSurfaceSignaling@24 @ 0x21A20 (_GreSetRedirectionSurfaceSignaling@24.c)
 *     _GreSfmCloseCompositorRef@8 @ 0x21E0A (_GreSfmCloseCompositorRef@8.c)
 *     _GreSfmOpenCompositorRef@8 @ 0x2212A (_GreSfmOpenCompositorRef@8.c)
 *     _GreSfmRegisterLogicalSurfaceForSignaling@8 @ 0xAB694 (_GreSfmRegisterLogicalSurfaceForSignaling@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreHLsurfSetPresentFlags@12 @ 0x1CE44E (_GreHLsurfSetPresentFlags@12.c)
 *     _GreHLsurfSetUpdateId@16 @ 0x1CE54B (_GreHLsurfSetUpdateId@16.c)
 *     _GreSfmGenerateMoveData@4 @ 0x2014BE (_GreSfmGenerateMoveData@4.c)
 */

int __stdcall NtGdiHLSurfSetInformation(int a1, int a2, ULONG a3, unsigned int a4)
{
  NTSTATUS v4; // ebx
  int v5; // esi
  int v6; // esi
  int updated; // eax
  const void *v9; // esi
  int HDEV; // eax
  HDEV v11; // eax
  ULONG v12; // eax
  int *v13; // esi
  int *v14; // ecx
  int v15; // [esp-10h] [ebp-70h]
  int v16; // [esp-8h] [ebp-68h]
  int v17; // [esp-4h] [ebp-64h]
  _DWORD v18[12]; // [esp+10h] [ebp-50h] BYREF
  NTSTATUS v19; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v4 = -1073741811;
  v5 = 0;
  memset(v18, 0, sizeof(v18));
  if ( a2 >= 11 )
  {
    v4 = -1073741821;
    goto LABEL_33;
  }
  ms_exc.registration.TryLevel = 0;
  switch ( a2 )
  {
    case 1:
      goto LABEL_48;
    case 2:
      v14 = (int *)a3;
      if ( !a3 )
        goto LABEL_47;
      if ( a4 < 8 )
      {
LABEL_46:
        v4 = -1073741306;
        goto LABEL_47;
      }
      if ( a3 >= _MmUserProbeAddress )
        v14 = (int *)_MmUserProbeAddress;
      v6 = *v14;
      v18[1] = v14[1];
LABEL_10:
      ms_exc.registration.TryLevel = -2;
      switch ( a2 )
      {
        case 1:
          UserGetHDEV();
          updated = GreHLsurfSetPresentFlags(v6);
          break;
        case 2:
          UserGetHDEV();
          updated = GreHLsurfSetUpdateId(v6, v18[1]);
          break;
        case 5:
          if ( v18[4] || v18[2] || v18[3] )
          {
            v17 = v18[3];
            v16 = v18[2];
            v15 = v18[4];
            HDEV = UserGetHDEV();
            updated = GreSetRedirectionSurfaceSignaling(HDEV, a1, v15, v6, v16, v17);
          }
          else
          {
            updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, v6);
          }
          break;
        case 7:
          UserGetHDEV();
          updated = GreSfmOpenCompositorRef();
          break;
        case 8:
          v11 = (HDEV)UserGetHDEV();
          updated = GreSfmCloseCompositorRef(v11, a1);
          break;
        default:
          GreSfmGenerateMoveData(v6);
          goto LABEL_16;
      }
      v4 = updated;
LABEL_16:
      v5 = 0;
      goto LABEL_17;
    case 5:
      v9 = (const void *)a3;
      if ( !a3 )
      {
LABEL_53:
        v19 = v4;
        ms_exc.registration.TryLevel = -2;
        goto LABEL_16;
      }
      if ( a4 >= 0x14 )
      {
        if ( a3 >= _MmUserProbeAddress )
          v9 = (const void *)_MmUserProbeAddress;
        qmemcpy(v18, v9, 0x14u);
        goto LABEL_9;
      }
LABEL_40:
      v4 = -1073741306;
      goto LABEL_53;
  }
  if ( a2 != 7 && a2 != 8 )
  {
    if ( a2 != 10 )
    {
      v4 = -1073741821;
      goto LABEL_47;
    }
LABEL_48:
    v13 = (int *)a3;
    if ( !a3 )
      goto LABEL_53;
    if ( a4 >= 4 )
    {
      if ( a3 >= _MmUserProbeAddress )
        v13 = (int *)_MmUserProbeAddress;
      v6 = *v13;
      goto LABEL_10;
    }
    goto LABEL_40;
  }
  if ( !a3 )
  {
    if ( !a4 )
    {
LABEL_9:
      v6 = v18[0];
      goto LABEL_10;
    }
    goto LABEL_46;
  }
LABEL_47:
  v19 = v4;
  ms_exc.registration.TryLevel = -2;
LABEL_17:
  if ( v4 < 0 )
  {
LABEL_33:
    v12 = RtlNtStatusToDosError(v4);
    EngSetLastError(v12);
    return v5;
  }
  return 1;
}
