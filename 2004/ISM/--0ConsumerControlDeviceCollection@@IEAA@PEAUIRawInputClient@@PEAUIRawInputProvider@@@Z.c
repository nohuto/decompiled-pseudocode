/*
 * XREFs of ??0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800990E4
 * Callers:
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180099208 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 * Callees:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180024A18 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@1@@Z @ 0x180097418 (--0-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-$_Uhash_compare@KU-$ha.c)
 */

ConsumerControlDeviceCollection *__fastcall ConsumerControlDeviceCollection::ConsumerControlDeviceCollection(
        ConsumerControlDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+44h] [rbp+1Ch]

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &ConsumerControlDeviceCollection::`vftable';
  v7 = ((unsigned __int64)this + 2760) >> 32;
  v6 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>(
    (__int64)this + 2760,
    &v6);
  *((_QWORD *)this + 3) = a3;
  return this;
}
