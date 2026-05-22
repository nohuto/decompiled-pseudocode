/*
 * XREFs of ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180142D94
 * Callers:
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1801428A0 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x180142B10 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer *a2)
{
  __int64 v3; // rax
  __int64 i; // r8

  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)a2 + 8LL))(a2);
  for ( i = *((_QWORD *)this + 4);
        i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != *(_DWORD *)(v3 + 36);
        i = *(_QWORD *)(i + 48) )
  {
    ;
  }
  if ( i )
    return (struct Microsoft::BamoImpl::BamoStubImpl *)(-(__int64)(*(_BYTE *)(i + 32) != 0) & i);
  return (struct Microsoft::BamoImpl::BamoStubImpl *)i;
}
