/*
 * XREFs of ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x18017904C
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@@Z @ 0x180177680 (-GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDete.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1801791B4 (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801794F0 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x18017BDEC (-GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Edges::FindEdge(Edges *this, const struct CandidateIdentity *a2)
{
  unsigned int v2; // r8d

  v2 = *((_DWORD *)a2 + 8);
  if ( v2 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    return Edges::FindEdgeWithInteraction(this, (const unsigned __int16 *)a2, v2);
  }
  else
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    return Edges::FindEdge(this, (const unsigned __int16 *)a2);
  }
}
