/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01D8F18
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1C01D9F50 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 RawInputMouseRequestedByForeground(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(gpqForeground + 96LL);
    if ( v1 )
    {
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        return (unsigned int)IsDesktopApp(*(_QWORD *)(v1 + 416)) != 0;
    }
  }
  return v0;
}
