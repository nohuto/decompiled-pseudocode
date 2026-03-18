/*
 * XREFs of ProcgrpSetSystemGroupAffinityThread @ 0x1C0091FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ProcgrpSetSystemGroupAffinityThread(_GROUP_AFFINITY *NewAffinity, _GROUP_AFFINITY *PreviousAffinity)
{
  unsigned __int64 Mask; // rdx
  unsigned __int64 v4; // rax

  Mask = 0LL;
  if ( !NewAffinity->Group && !NewAffinity->Reserved[0] && !NewAffinity->Reserved[1] && !NewAffinity->Reserved[2] )
    Mask = NewAffinity->Mask;
  v4 = ((__int64 (__fastcall *)(unsigned __int64))WPP_GLOBAL_WDF_Control.SecurityDescriptor)(Mask);
  if ( PreviousAffinity )
  {
    *(_QWORD *)&PreviousAffinity->Group = 0LL;
    PreviousAffinity->Mask = v4;
  }
}
