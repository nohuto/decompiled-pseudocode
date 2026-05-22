/*
 * XREFs of ??0?$CBaseInputObserverServer@$0M@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x18002E9BC
 * Callers:
 *     ??0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003041C (--0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@1@@Z @ 0x180024E8C (--0-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@@V-$_Uhash_com.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z@std@@@Z @ 0x18002E858 (-Initialize@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseInputObserverServer<12>::CBaseInputObserverServer<12>(__int64 a1)
{
  int v2; // eax
  _QWORD v4[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v6; // [rsp+88h] [rbp+28h] BYREF
  __int64 v7; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)a1 = &CBaseInputObserverServer<12>::`vftable';
  *(_DWORD *)(a1 + 8) = 12;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = "CMK:Observation";
  v7 = a1 + 152;
  v6 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>(
    a1 + 152,
    &v6);
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v7);
  v2 = CoreUICreate(&v7);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
      (const char *)(unsigned int)v2,
      v4[0]);
    JUMPOUT(0x18002EAB0LL);
  }
  v4[0] = off_1801B3710;
  v4[1] = a1;
  v4[7] = v4;
  KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::Initialize(
    (_QWORD *)(a1 + 16),
    &v7,
    *(_DWORD *)(a1 + 8),
    (__int64)v4);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v7);
  return a1;
}
