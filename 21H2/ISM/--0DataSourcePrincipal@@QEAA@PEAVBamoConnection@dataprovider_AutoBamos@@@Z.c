/*
 * XREFs of ??0DataSourcePrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x1801414D8
 * Callers:
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1801428A0 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003017C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

DataSourcePrincipal *__fastcall DataSourcePrincipal::DataSourcePrincipal(
        DataSourcePrincipal *this,
        struct dataprovider_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoDataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((DataSourcePrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoDataSourcePrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  return this;
}
