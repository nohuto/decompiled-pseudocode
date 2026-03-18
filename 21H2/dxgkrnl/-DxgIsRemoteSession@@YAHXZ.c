/*
 * XREFs of ?DxgIsRemoteSession@@YAHXZ @ 0x1C01C0A44
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C08BC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGPROCESS *__fastcall DxgIsRemoteSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
