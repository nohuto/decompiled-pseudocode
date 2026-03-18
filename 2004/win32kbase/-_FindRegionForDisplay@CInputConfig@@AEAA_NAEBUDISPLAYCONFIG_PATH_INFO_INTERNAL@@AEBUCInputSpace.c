/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C000BEF4
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C000C6A4 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C00126A0 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct CInputSpaceRegion *v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // r10
  _QWORD **v19; // r15
  _QWORD *v20; // rdi
  struct CInputSpaceRegion *v21; // rax
  int v22; // edx
  struct _ERESOURCE *v23; // rcx
  _QWORD v25[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+74h] [rbp+Ch]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v12 = 0LL;
  v13 = *((_QWORD *)a2 + 2);
  v14 = 0;
  v15 = *(_DWORD *)a4;
  v16 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v26 = HIDWORD(v13);
  if ( v15 )
  {
    v17 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v18 = 200LL * v14;
      if ( *(_DWORD *)(v18 + v17 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v18 + v17 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v14 >= v15 )
        goto LABEL_8;
    }
    v13 = *(_QWORD *)(200LL * v14 + v17 + 16);
    v16 = *(_DWORD *)(200LL * v14 + v17 + 24);
    v26 = HIDWORD(v13);
  }
LABEL_8:
  v19 = (_QWORD **)((char *)a3 + 1424);
  v25[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v20 = *v19;
  v25[1] = v19;
  while ( 1 )
  {
    v25[2] = v20;
    if ( v20 == v19 || v20 == (_QWORD *)-16LL )
      break;
    v21 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v25);
    v22 = *((_DWORD *)v21 + 6);
    if ( *((_DWORD *)a2 + 4) == v22
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v21 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v21 + 8) )
    {
      v23 = CInputConfig::slock;
      *a5 = v21;
      ExReleaseResourceLite(v23);
      KeLeaveCriticalRegion();
      return 1;
    }
    if ( (_DWORD)v13 == v22 && __PAIR64__(v16, v26) == *(_QWORD *)((char *)v21 + 28) )
      v12 = v21;
    v20 = (_QWORD *)*v20;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    *a5 = v12;
    return 1;
  }
  return 0;
}
