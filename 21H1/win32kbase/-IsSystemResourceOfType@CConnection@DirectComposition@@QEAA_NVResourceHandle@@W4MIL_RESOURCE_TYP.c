/*
 * XREFs of ?IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00B8910
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00B87A0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C00B3F00 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CConnection::IsSystemResourceOfType(__int64 a1, int a2, unsigned int a3)
{
  struct _ERESOURCE *v6; // rdi
  _QWORD *v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // si
  __int64 v11; // rdi
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *v15; // rbx
  struct _ERESOURCE *v16; // rbx

  v6 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = *(_QWORD **)(a1 + 152);
  v8 = (unsigned int)(a2 - 1);
  if ( a2 && v8 < v7[17] )
  {
    _mm_lfence();
    v9 = *(_QWORD *)(v8 * v7[18] + v7[14]);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9 && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, a3);
  v11 = *(_QWORD *)(a1 + 152);
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 2, 1) == 1 )
    {
      v13 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, 0LL);
      v14 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v14, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
        *(_DWORD *)(v11 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 5, 4) == 4 )
    {
      v15 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
      v16 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
        *(_DWORD *)(v11 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v11 + 24) == 1 );
  return v10;
}
