/*
 * XREFs of ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180170CC0
 * Callers:
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801710D0 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800CD8B4 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     ??$As@UIAttachableInputObjectSampleProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1DF4 (--$As@UIAttachableInputObjectSampleProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 i; // rdi
  _QWORD *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 408);
  for ( i = *(_QWORD *)(a1 + 400); i != v3; i += 16LL )
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IAttachableInputObjectSampleProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(i + 8),
                &v7) >= 0 )
    {
      v5 = (_QWORD *)a2[1];
      if ( (_QWORD *)a2[2] == v5 )
      {
        std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
          a2,
          (__int64)v5,
          &v7);
      }
      else
      {
        *v5 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        a2[1] += 8LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  return a2;
}
