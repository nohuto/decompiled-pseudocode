/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C004ADA4
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C00A6F24 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rcx
  struct CInputSpaceRegion *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r10
  _QWORD **v16; // r15
  _QWORD *v17; // rdi
  struct CInputSpaceRegion *v18; // rax
  int v19; // edx
  struct _ERESOURCE *v20; // rcx
  _QWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+74h] [rbp+Ch]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v9 = 0LL;
  v10 = *((_QWORD *)a2 + 2);
  v11 = 0;
  v12 = *(_DWORD *)a4;
  v13 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v23 = HIDWORD(v10);
  if ( v12 )
  {
    v14 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v15 = 200LL * v11;
      if ( *(_DWORD *)(v15 + v14 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v15 + v14 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v11 >= v12 )
        goto LABEL_8;
    }
    v10 = *(_QWORD *)(200LL * v11 + v14 + 16);
    v13 = *(_DWORD *)(200LL * v11 + v14 + 24);
    v23 = HIDWORD(v10);
  }
LABEL_8:
  v16 = (_QWORD **)((char *)a3 + 1424);
  v22[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v17 = *v16;
  v22[1] = v16;
  while ( 1 )
  {
    v22[2] = v17;
    if ( v17 == v16 || v17 == (_QWORD *)-16LL )
      break;
    v18 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v22);
    v19 = *((_DWORD *)v18 + 6);
    if ( *((_DWORD *)a2 + 4) == v19
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v18 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v18 + 8) )
    {
      v20 = CInputConfig::slock;
      *a5 = v18;
      ExReleaseResourceLite(v20);
      KeLeaveCriticalRegion();
      return 1;
    }
    if ( (_DWORD)v10 == v19 && __PAIR64__(v13, v23) == *(_QWORD *)((char *)v18 + 28) )
      v9 = v18;
    v17 = (_QWORD *)*v17;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    *a5 = v9;
    return 1;
  }
  return 0;
}
