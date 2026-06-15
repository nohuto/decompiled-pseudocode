/*
 * XREFs of ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800E32C8
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180030350 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E321C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroup.c)
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x1800E3E88 (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800E7090 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
        _QWORD *a1,
        const struct StreamGroupParams **a2,
        struct STREAM_GROUP_DESCRIPTOR **a3,
        unsigned int *a4)
{
  CExclusiveStreamGroupProxy *v8; // rax
  int v9; // edi
  CExclusiveStreamGroupProxy *v10; // rbx

  *a1 = 0LL;
  v8 = (CExclusiveStreamGroupProxy *)operator new(0x250uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy(v8);
    v9 = CExclusiveStreamGroupProxy::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
      v9 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>>(
             (__int64)v10,
             &GUID_e969a7df_0ef8_4763_9e1a_d1296f5f5adf,
             a1);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release((__int64)v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
