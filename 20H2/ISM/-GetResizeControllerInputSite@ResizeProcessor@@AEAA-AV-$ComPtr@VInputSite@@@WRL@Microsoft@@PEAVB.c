/*
 * XREFs of ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180044EFC
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEF6C (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013150 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     memmove_0 @ 0x18004A647 (memmove_0.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x18008321C (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x1800FCDA8 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ResizeProcessor::GetResizeControllerInputSite(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  struct InputSiteManager *v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r15
  size_t size_of; // rax
  size_t v12; // rbx
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-8h]
  _QWORD *v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = a2;
  *a2 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v6 = InputSiteManager;
  v14 = 0LL;
  v15 = 0LL;
  v7 = *((_QWORD *)InputSiteManager + 8);
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)InputSiteManager + 7) != v7 )
  {
    v10 = (v7 - *((_QWORD *)InputSiteManager + 7)) >> 3;
    size_of = std::_Get_size_of_n<8>(v10);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)&v14 = v8;
    v15 = &v8[v10];
    v12 = *((_QWORD *)v6 + 8) - *((_QWORD *)v6 + 7);
    memmove_0(v8, *((const void **)v6 + 7), v12);
    v9 = (_QWORD *)((char *)v8 + v12);
    *((_QWORD *)&v14 + 1) = v9;
  }
  while ( v8 != v9 )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v8, &v16);
    if ( v16 && v16 == a3 )
    {
      Microsoft::WRL::ComPtr<InputSite>::operator=(a2, *v8);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v16);
      break;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v16);
    ++v8;
  }
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(&v14);
  return a2;
}
