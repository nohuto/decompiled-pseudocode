/*
 * XREFs of ?vInitBuffer@@YGXPAU_STRRUN@@PAU_RECTL@@K@Z @ 0x49144
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __userpurge vInitBuffer(_DWORD *a1@<edx>, _DWORD *a2@<ecx>, ULONG Pattern, struct _RECTL *a4, unsigned int a5)
{
  int v5; // eax

  a2[2] = *a1;
  v5 = a1[2] - *a1;
  a2[3] = v5;
  RtlFillMemoryUlong(a2 + 4, 4 * v5, Pattern);
}
