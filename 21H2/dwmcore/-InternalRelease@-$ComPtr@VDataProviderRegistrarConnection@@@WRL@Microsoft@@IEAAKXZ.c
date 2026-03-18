/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801956A4
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180193334 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180195374 (--1DataProviderManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180193738 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  }
  return result;
}
