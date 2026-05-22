/*
 * XREFs of ??0MPCHeadUpdateListener@@QEAA@XZ @ 0x18008D0E0
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18008CB10 (--$_Callback_once@V-$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@1@@Z @ 0x18008D028 (--0-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V.c)
 */

MPCHeadUpdateListener *__fastcall MPCHeadUpdateListener::MPCHeadUpdateListener(MPCHeadUpdateListener *this)
{
  char *v2; // rcx
  MPCHeadUpdateListener *result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  *(_QWORD *)this = 1LL;
  v2 = (char *)this + 8;
  v5 = HIDWORD(v2);
  v4 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>(
    (__int64)v2,
    &v4);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 152), 0, 0);
  *((_WORD *)this + 96) = 0;
  result = this;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 194) = 0;
  return result;
}
