/*
 * XREFs of KiRspInIstStack @ 0x140513138
 * Callers:
 *     KeQueryCurrentStackInformationEx @ 0x140208360 (KeQueryCurrentStackInformationEx.c)
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14020EB20 (MiComputeMaximumFaultCluster.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     KeInvalidAccessAllowed @ 0x1402F6560 (KeInvalidAccessAllowed.c)
 *     KiMcheckFastForward @ 0x140520BC0 (KiMcheckFastForward.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiRspInIstStack(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  _BOOL8 result; // rax

  v2 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  v3 = 24576LL;
  if ( KiKvaShadow )
    v3 = 464LL;
  result = 1;
  if ( a2 > v2 || a2 < v2 - v3 )
  {
    if ( !KiKvaShadow )
      return 0;
    v4 = *(_QWORD *)(v2 + 8);
    if ( a2 > v4 || a2 < v4 - 24544 )
      return 0;
  }
  return result;
}
