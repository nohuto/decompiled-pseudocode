/*
 * XREFs of ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x180099FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C824 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

SystemControlDeviceCollection *__fastcall SystemControlDeviceCollection::`scalar deleting destructor'(
        SystemControlDeviceCollection *this,
        char a2)
{
  _QWORD **v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &SystemControlDeviceCollection::`vftable';
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 2784);
  v4 = (_QWORD **)*((_QWORD *)this + 346);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x40);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((void **)this + 346), (const struct std::nothrow_t *)0x40);
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB08);
    else
      free(this);
  }
  return this;
}
