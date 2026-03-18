/*
 * XREFs of PopFxEnableEnhancedAccounting @ 0x14056E504
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x14056F30C (PopPepInitializeVetoMasks.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopFxEnableEnhancedAccounting(signed __int32 *a1)
{
  bool v1; // r8
  signed __int32 v2; // eax
  bool v3; // zf

  v1 = 0;
  v2 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  if ( v2 >= 1 )
  {
    v3 = v2 == _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, v2 | 0x80000000, v2);
    v2 |= 0x80000000;
    v1 = v3;
  }
  *a1 = v2;
  return v1;
}
