/*
 * XREFs of ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801BCE5C
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800F2DAC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801954E0 (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180212290 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A518 (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801BB3BC (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAV?$CWeakReference@VCResource@@@@@?$vector@PEAV?$CWeakReference@VCResource@@@@V?$allocator@PEAV?$CWeakReference@VCResource@@@@@std@@@std@@QEAAPEAPEAV?$CWeakReference@VCResource@@@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801BBF60 (--$_Emplace_reallocate@AEBQEAV-$CWeakReference@VCResource@@@@@-$vector@PEAV-$CWeakReference@VCRe.c)
 *     ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x1801BC4A4 (-DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z.c)
 *     ?ReaderRegistered@DataProviderProxy@@QEAAX_K@Z @ 0x1801BE444 (-ReaderRegistered@DataProviderProxy@@QEAAX_K@Z.c)
 */

__int64 __fastcall DataSourceProxy::RegisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _BYTE *v5; // rdx
  DataProviderProxy *v6; // rbx
  unsigned __int64 Unique; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakResourceReference *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( DataSourceProxy::DoesReaderHaveAccess(this, a2) )
  {
    v9 = 0LL;
    CWeakReference<CResource>::Create(a2, &v9);
    v5 = (_BYTE *)*((_QWORD *)this + 26);
    if ( v5 == *((_BYTE **)this + 27) )
    {
      std::vector<CWeakReference<CResource> *,std::allocator<CWeakReference<CResource> *>>::_Emplace_reallocate<CWeakReference<CResource> * const &>(
        (const void **)this + 25,
        v5,
        &v9);
    }
    else
    {
      *(_QWORD *)v5 = v9;
      *((_QWORD *)this + 26) += 8LL;
    }
    *((_BYTE *)a2 + 80) |= 1u;
    v6 = (DataProviderProxy *)*((_QWORD *)this + 24);
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    DataProviderProxy::ReaderRegistered(v6, Unique);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
