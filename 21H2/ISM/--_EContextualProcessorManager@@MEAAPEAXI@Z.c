/*
 * XREFs of ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1801496B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@0AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180049814 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 */

ContextualProcessorManager *__fastcall ContextualProcessorManager::`vector deleting destructor'(
        ContextualProcessorManager *this,
        char a2)
{
  bool v2; // zf
  void *v5; // rsi

  v2 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &ContextualProcessorManager::`vftable';
  if ( !v2 )
    NtMITSetKeyboardInputRoutingPolicy(0LL);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
      *((__int64 **)this + 2),
      *((__int64 **)this + 3));
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 4) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x30);
    else
      free(this);
  }
  return this;
}
