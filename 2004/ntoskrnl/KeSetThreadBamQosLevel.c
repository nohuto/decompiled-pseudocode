/*
 * XREFs of KeSetThreadBamQosLevel @ 0x1405190F0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140519CF0 (KiConvertDynamicHeteroPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetThreadBamQosLevel(__int64 a1, int a2)
{
  __int64 result; // rax
  signed __int32 v3; // ett

  do
  {
    v3 = *(_DWORD *)(a1 + 512);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), a2 | v3 & 0xFFFFFF00, v3);
  }
  while ( v3 != (_DWORD)result );
  return result;
}
