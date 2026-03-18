/*
 * XREFs of _GetDPIMETRICSForDpiUnsafe@4 @ 0x91A30
 * Callers:
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YGPAUtagDpiKMMetricsCacheNode@@H@Z @ 0x154FA4 (-EnsureKMDpiMetricsCacheNode@@YGPAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YGXPAUtagDpiKMMetricsCacheNode@@@Z @ 0x155135 (-RefreshDpiKMMetricsCacheNode@@YGXPAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

char *__thiscall GetDPIMETRICSForDpiUnsafe(void *this, int a2)
{
  struct tagDpiKMMetricsCacheNode *v3; // esi
  int v4; // [esp+0h] [ebp-4h]
  struct tagDpiKMMetricsCacheNode *v5; // [esp+0h] [ebp-4h]

  if ( this == (void *)*(unsigned __int16 *)(_gpsi + 6242) )
    return (char *)GetSessionDpiMetrics();
  if ( this == (void *)96 )
    return (char *)Get96DpiMetrics();
  v3 = EnsureKMDpiMetricsCacheNode(v4);
  if ( !v3 )
    return 0;
  RefreshDpiKMMetricsCacheNode(v5);
  return (char *)v3 + 8;
}
