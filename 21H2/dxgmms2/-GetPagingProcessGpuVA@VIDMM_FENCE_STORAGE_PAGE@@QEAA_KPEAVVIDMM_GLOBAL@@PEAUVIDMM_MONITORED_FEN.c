/*
 * XREFs of ?GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1C00BBAC4
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00B3D54 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0012D20 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4)
{
  __int64 **i; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v13,
    (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 72));
  for ( i = (__int64 **)*((_QWORD *)this + 7); ; i = (__int64 **)*i )
  {
    if ( i == (__int64 **)((char *)this + 56) )
      goto LABEL_7;
    if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
      break;
  }
  v12 = i[4];
  if ( v12 == (__int64 *)(i + 4) )
  {
LABEL_7:
    v10 = 0LL;
    goto LABEL_8;
  }
  while ( *((_QWORD *)a2 + 5048) != *(v12 - 1) || *((_DWORD *)v12 + 5) != 1 << a4 )
  {
    v12 = (__int64 *)*v12;
    if ( v12 == (__int64 *)(i + 4) )
      goto LABEL_7;
  }
  v10 = *(v12 - 4) + *((unsigned int *)a3 + 4);
LABEL_8:
  if ( v14 )
  {
    v11 = v13;
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  return v10;
}
