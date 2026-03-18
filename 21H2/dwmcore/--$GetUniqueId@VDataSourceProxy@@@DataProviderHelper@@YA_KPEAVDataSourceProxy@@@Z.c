/*
 * XREFs of ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801BB3BC
 * Callers:
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801BCE5C (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderHelper::GetUniqueId<DataSourceProxy>(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h]

  v1 = a1 + 8;
  LODWORD(v3) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  HIDWORD(v3) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) + 4);
  return v3;
}
