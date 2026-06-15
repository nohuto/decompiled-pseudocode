/*
 * XREFs of ??1EndpointCollection@@MEAA@XZ @ 0x18013EAC0
 * Callers:
 *     ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x18013EB78 (--_EEndpointCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800D1E64 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@.c)
 */

void __fastcall EndpointCollection::~EndpointCollection(EndpointCollection *this)
{
  *(_QWORD *)this = &EndpointCollection::`vftable'{for `IEndpointCollection'};
  *((_QWORD *)this + 1) = &EndpointCollection::`vftable'{for `CUnknown'};
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll((_QWORD *)this + 3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
