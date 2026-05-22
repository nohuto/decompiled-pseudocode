/*
 * XREFs of ?GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z @ 0x18014C6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064630 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7338 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall ContextualProcessorBuffer::GetWindowId(ContextualProcessorBuffer *this, unsigned __int64 *a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 19) + 16LL);
  if ( *v3 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v3, &v6) >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v6 + 64LL))(v6, a2);
  else
    v4 = -2147467259;
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>(&v6);
  return v4;
}
