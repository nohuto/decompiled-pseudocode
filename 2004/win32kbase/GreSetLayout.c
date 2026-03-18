/*
 * XREFs of GreSetLayout @ 0x1C003CF80
 * Callers:
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GreCreateCompatibleDC @ 0x1C0091E80 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003CFE0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0071D3C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
