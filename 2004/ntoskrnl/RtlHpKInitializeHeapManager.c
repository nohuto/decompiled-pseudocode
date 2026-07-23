/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1403C0F18
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403C0A54 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x14039A9F8 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x14039AFAC (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C0FA0 (RtlHpGlobalsInitialize.c)
 */

NTSTATUS RtlHpKInitializeHeapManager()
{
  _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_140C57E90 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140C57E90 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1u, (_RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
