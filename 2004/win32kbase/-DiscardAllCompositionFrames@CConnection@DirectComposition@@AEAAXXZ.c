/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C001D7C4
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C001C724 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C001CC80 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
}
