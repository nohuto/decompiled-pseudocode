/*
 * XREFs of ?EnsureKMDpiMetricsCacheNode@@YGPAUtagDpiKMMetricsCacheNode@@H@Z @ 0x154FA4
 * Callers:
 *     _GetDPIMETRICSForDpiUnsafe@4 @ 0x91A30 (_GetDPIMETRICSForDpiUnsafe@4.c)
 * Callees:
 *     ?IsValidPlateauDPI@@YG_NH@Z @ 0x155103 (-IsValidPlateauDPI@@YG_NH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagDpiKMMetricsCacheNode *__thiscall EnsureKMDpiMetricsCacheNode(void *this)
{
  unsigned __int16 v1; // di
  unsigned __int16 *v2; // esi
  int v4; // [esp+0h] [ebp-8h]

  v1 = (unsigned __int16)this;
  v2 = (unsigned __int16 *)_gpDpiKernelModeMetricsMRUNode;
  if ( !_gpDpiKernelModeMetricsMRUNode || (void *)(unsigned __int16)*_gpDpiKernelModeMetricsMRUNode != this )
  {
    v2 = (unsigned __int16 *)_gpDpiKernelModeMetricsCache;
    if ( !_gpDpiKernelModeMetricsCache )
      goto LABEL_7;
    do
    {
      if ( (void *)*v2 == this )
        break;
      v2 = (unsigned __int16 *)*((_DWORD *)v2 + 1);
    }
    while ( v2 );
  }
  if ( v2 )
  {
LABEL_11:
    _gpDpiKernelModeMetricsMRUNode = v2;
    return (struct tagDpiKMMetricsCacheNode *)v2;
  }
LABEL_7:
  if ( IsValidPlateauDPI(v4) )
  {
    v2 = (unsigned __int16 *)Win32AllocPoolZInit(60, 1768973397);
    if ( !v2 )
      return (struct tagDpiKMMetricsCacheNode *)v2;
    *v2 = v1;
    v2[1] = 1;
    *((_DWORD *)v2 + 1) = _gpDpiKernelModeMetricsCache;
    _gpDpiKernelModeMetricsCache = v2;
  }
  if ( v2 )
    goto LABEL_11;
  return (struct tagDpiKMMetricsCacheNode *)v2;
}
