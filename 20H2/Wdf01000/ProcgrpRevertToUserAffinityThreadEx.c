/*
 * XREFs of ProcgrpRevertToUserAffinityThreadEx @ 0x1C0091630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcgrpRevertToUserAffinityThreadEx(unsigned __int64 Affinity)
{
  if ( !Affinity )
    KeRevertToUserAffinityThread();
}
