/*
 * XREFs of ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005D178
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C00024B0 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C005FE44 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0063E00 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01CF2CC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C01CF34C (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F24C0 (-ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplication.c)
 * Callees:
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005D11C (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0067630 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReleaseSystemResource(__int64 a1, int a2)
{
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rbx
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx

  v4 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  DirectComposition::CSystemChannel::ReleaseSystemResource(*(DirectComposition::CApplicationChannel **)(a1 + 152), a2);
  v5 = *(_QWORD *)(a1 + 152);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 24), 2, 1) == 1 )
    {
      v7 = *(struct _ERESOURCE **)(v5 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v7, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, 0LL);
      v8 = *(struct _ERESOURCE **)(*(_QWORD *)(v5 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v8, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v5 + 40)) )
        *(_DWORD *)(v5 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 24), 5, 4) == 4 )
    {
      v9 = *(struct _ERESOURCE **)(v5 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v9, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
      v10 = *(struct _ERESOURCE **)(*(_QWORD *)(v5 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v5 + 40)) )
        *(_DWORD *)(v5 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    result = *(unsigned int *)(v5 + 24);
  }
  while ( (_DWORD)result == 1 );
  return result;
}
