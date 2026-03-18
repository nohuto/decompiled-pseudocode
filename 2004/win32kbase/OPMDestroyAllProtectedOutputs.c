/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C00341F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0034244 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C0034370 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

LONG OPMDestroyAllProtectedOutputs()
{
  OPM *v0; // rdi
  LONG result; // eax
  struct _KMUTANT *v2; // rcx

  v0 = qword_1C024CBD0;
  OPM::CMutex::Lock((OPM *)((char *)qword_1C024CBD0 + 56));
  result = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
             (char *)v0 + 24,
             0LL,
             (char *)v0 + 48);
  v2 = (struct _KMUTANT *)*((_QWORD *)v0 + 7);
  if ( v2 )
    return KeReleaseMutex(v2, 0);
  return result;
}
