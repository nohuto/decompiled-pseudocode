/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C004BA60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

struct DXGTHREAD *DXGTHREAD_GetCurrent(void)
{
  return DXGTHREAD::GetCurrent();
}
