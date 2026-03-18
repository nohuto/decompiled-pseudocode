/*
 * XREFs of ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801C0260
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x18016649C (-AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801665CC (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x180181F28 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  DataSourceProxy *DataSourceProxy; // rax
  __int64 v7; // r8
  const char *v8; // r9
  DataSourceProxy *v9; // rsi
  int v10; // eax
  int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 7) = v3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 8) = v5;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(
                      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1096LL),
                      v3,
                      v5);
  v9 = DataSourceProxy;
  if ( DataSourceProxy )
  {
    v10 = DataSourceProxy::RegisterReader(DataSourceProxy, this);
    v11 = v10;
    if ( v10 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x178,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
        (const char *)(unsigned int)v10);
    if ( v11 == -2147024891 )
      return 0LL;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
  }
  if ( !v9 )
    DataProviderManager::AddReaderToReadyList(*(DataProviderManager **)(*((_QWORD *)this + 2) + 1096LL), this, v7, v8);
  return 0LL;
}
