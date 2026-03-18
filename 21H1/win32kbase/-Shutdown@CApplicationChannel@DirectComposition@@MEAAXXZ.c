/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00B3C90
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0039888 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00B3E48 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C00B3F68 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00B9354 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00B9C14 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01D75CC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C01FBDA4 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  struct _ERESOURCE *v2; // rbx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  DirectComposition::CBatch *v9; // rcx
  DirectComposition::CAnimationBinding *v10; // rcx
  struct DirectComposition::CrossChannelVisualData *v11; // rdx
  int v12; // esi
  CInputManager *v13; // rcx
  __int64 i; // rbx
  __int64 v15; // rdx
  char v16; // r8
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rcx

  v2 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  v3 = 6;
  v4 = *((_QWORD *)this + 5);
  if ( *((int *)this + 6) <= 2 )
    v3 = 2;
  *((_DWORD *)this + 6) = v3;
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 8));
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 6) == 2 )
  {
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 48LL))(this, v5);
  }
  DirectComposition::CApplicationChannel::ReleaseAllResources(this, 0LL);
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v8 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    do
    {
      v17 = (_QWORD *)*v8;
      Win32FreePool((__int64)v8, v6, v7);
      *((_QWORD *)this + 23) = v17;
      v8 = v17;
    }
    while ( v17 );
  }
  v9 = (DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v9 )
  {
    DirectComposition::CBatch::Clear(v9);
    v20 = *((_QWORD *)this + 21);
    if ( v20 )
      Win32FreePool(v20, v18, v19);
    *((_QWORD *)this + 21) = 0LL;
  }
  v10 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
  if ( v10 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v10, this);
    *((_QWORD *)this + 44) = 0LL;
  }
  v11 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v11 )
  {
    *((_QWORD *)this + 49) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v11);
  }
  v12 = *((_DWORD *)this + 174);
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 120, 0LL);
    v13 = g_pInputManager;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)g_pInputManager + 28); v13 = g_pInputManager )
    {
      v21 = (_QWORD *)((char *)v13 + 104);
      if ( *(_DWORD *)(*(_QWORD *)(*v21 + 8 * i) + 4LL) == v12 )
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(v21, (unsigned int)i);
      else
        i = (unsigned int)(i + 1);
    }
    ExReleasePushLockSharedEx((char *)v13 + 120, 0LL);
  }
  v15 = *((_QWORD *)this + 22);
  if ( v15 )
  {
    *(_BYTE *)(v15 + 32) ^= (*(_BYTE *)(v15 + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *(_DWORD *)(v15 + 16) = ++*((_DWORD *)this + 94);
    v16 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 22) = 0LL;
    DirectComposition::CConnection::UnregisterChannel(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v15,
      v16 & 1);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
