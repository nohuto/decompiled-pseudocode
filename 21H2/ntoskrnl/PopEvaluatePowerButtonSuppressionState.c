/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x1409960C8
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x140828E20 (PopLidSwitchReliabilityUpdateCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi

  v0 = dword_140C20B60;
  v1 = 0;
  if ( !BYTE1(PopPowerButtonSuppression) && dword_140C20B60 == 1 )
    v0 = 2;
  if ( HIDWORD(PopPowerButtonSuppression) == v0 )
  {
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C20B50);
  }
  else
  {
    HIDWORD(PopPowerButtonSuppression) = v0;
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C20B50);
    v1 = -1073741822;
    if ( qword_140C5ADF0 )
      return (unsigned int)qword_140C5ADF0(v0);
  }
  return v1;
}
