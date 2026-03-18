/*
 * XREFs of PsGetAllocatedFullProcessImageName @ 0x1406B813C
 * Callers:
 *     PfCalculateProcessHash @ 0x1406B7C60 (PfCalculateProcessHash.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1406B8108 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PnpLogVetoInformation @ 0x140720534 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     ViCreateProcessCallbackInternal @ 0x1409D9A94 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rbx

  v2 = *(_QWORD *)(a1 + 1472);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(v2 + 2) + 16LL, 0x6E497350u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = *(_OWORD *)v2;
    if ( PoolWithTag[1] )
    {
      PoolWithTag[1] = PoolWithTag + 2;
      memmove(PoolWithTag + 2, *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
    }
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
