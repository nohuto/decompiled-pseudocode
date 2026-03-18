/*
 * XREFs of ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180212290
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x18019547C (-AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801955B0 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801BCE5C (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 8) = v3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 9) = v5;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(
                      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL),
                      v3,
                      v5);
  if ( !DataSourceProxy )
  {
    DataProviderManager::AddReaderToReadyList(*(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL), this, v7, v8);
    return 0LL;
  }
  v9 = DataSourceProxy::RegisterReader(DataSourceProxy, this);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v9);
    if ( v10 == -2147024891 )
      return 0LL;
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  return 0LL;
}
