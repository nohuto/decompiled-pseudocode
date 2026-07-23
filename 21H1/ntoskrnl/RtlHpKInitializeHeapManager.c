/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1403C0058
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403BFB94 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x14039A268 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x14039A81C (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C00E0 (RtlHpGlobalsInitialize.c)
 */

NTSTATUS RtlHpKInitializeHeapManager()
{
  _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_140C57F90 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140C57F90 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1u, (_RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
