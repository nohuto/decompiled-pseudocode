/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14003CB40
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006010 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14003CCA8 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003CE40 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14003CFC4 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400431E0 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14003C01C (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5)
{
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rcx
  const struct CConnectionInstance *v12; // r12
  int v13; // eax
  struct IAudioProcessingObject *v14; // rbx
  struct IAudioProcessingObject *v15; // rdi
  struct IAudioProcessingObject *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v8 = *((_QWORD *)this + 3);
  v9 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD **)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    v12 = *(const struct CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v11);
    if ( *(_DWORD *)(v10 + 40) == 2 )
    {
      v16 = 0LL;
      v13 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL), &v16);
      v14 = v16;
      if ( v13 >= 0 )
      {
        v17 = 0LL;
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v16->lpVtbl->QueryInterface)(
               v16,
               a2,
               &v17) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v10;
          if ( a4 )
            *a4 = v12;
          v15 = v14;
          if ( a5 )
          {
            v14 = 0LL;
            v16 = 0LL;
            *a5 = v15;
            v15 = 0LL;
          }
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          if ( v15 )
            ((void (__fastcall *)(struct IAudioProcessingObject *))v14->lpVtbl->Release)(v14);
          return;
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v14 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v14->lpVtbl->Release)(v14);
    }
  }
}
