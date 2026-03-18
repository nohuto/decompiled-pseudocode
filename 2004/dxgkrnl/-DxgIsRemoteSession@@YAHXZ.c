/*
 * XREFs of ?DxgIsRemoteSession@@YAHXZ @ 0x1C015EAE8
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C015E958 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020CBEC (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A5C4 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGPROCESS *__fastcall DxgIsRemoteSession(__int64 a1, __int64 a2)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent(a1, a2);
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
