/*
 * XREFs of ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801F066C
 * Callers:
 *     ??_GCSynchronousSuperWetInk@@UEAAPEAXI@Z @ 0x1801F07F0 (--_GCSynchronousSuperWetInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D080C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180175554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180196C04 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??1CSuperWetSource@@UEAA@XZ @ 0x1801C4D64 (--1CSuperWetSource@@UEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801EFF84 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAX@s.c)
 */

void __fastcall CSynchronousSuperWetInk::~CSynchronousSuperWetInk(CSynchronousSuperWetInk *this)
{
  struct CSuperWetSource *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  v2 = (CSynchronousSuperWetInk *)((char *)this + 112);
  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable'{for `CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>'};
  *((_QWORD *)this + 14) = &CSynchronousSuperWetInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CSynchronousSuperWetInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CSynchronousSuperWetInk::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 208;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 224;
  if ( *((_QWORD *)this + 11) )
  {
    if ( *((_BYTE *)this + 248) )
      (*(void (__fastcall **)(_QWORD, CSynchronousSuperWetInk *))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 504LL),
        this);
    CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 128LL), v2);
    *(_QWORD *)(*((_QWORD *)this + 11) + 184LL) = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_SYNCHRONOUSSUPERWETINK_DESTROYED, (__int64)this);
  std::vector<unsigned char>::_Tidy((__int64)this + 224);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 27);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
    (__int64)this + 184,
    (__int64)this + 184,
    *(__int64 **)(*((_QWORD *)this + 23) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 23), 0x38uLL);
  v6 = (void *)*((_QWORD *)this + 22);
  if ( v6 )
    operator delete(v6);
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CSuperWetSource::~CSuperWetSource(v2);
  CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>((struct CResource **)this);
}
