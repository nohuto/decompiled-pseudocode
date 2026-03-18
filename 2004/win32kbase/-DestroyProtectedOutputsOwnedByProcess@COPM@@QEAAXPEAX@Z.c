/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0034290
 * Callers:
 *     GdiProcessCallout @ 0x1C00BCB60 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C0034370 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z @ 0x1C00343A4 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C706C (-GetElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x1C00C7F84 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1C0143A20 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  OPM *v2; // rbp
  char i; // al
  struct _KMUTANT *v5; // rcx
  COPM *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = this;
  v2 = qword_1C024CBD0;
  OPM::CMutex::Lock((OPM *)((char *)qword_1C024CBD0 + 56));
  LODWORD(v6) = 0;
  for ( i = OPM::CList<COPMProtectedOutput>::GetFirstElementIndex((char *)v2 + 24, &v6);
        i;
        i = OPM::CList<COPMProtectedOutput>::GetNextElementIndex((char *)v2 + 24, (unsigned int)v6, &v6) )
  {
    v7 = 0LL;
    OPM::CList<COPMProtectedOutput>::GetElement((char *)v2 + 24, (unsigned int)v6, &v7);
    if ( a2 == *(void **)(v7 + 56) )
      OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        (char *)v2 + 24,
        v7,
        (unsigned int)v6,
        (char *)v2 + 48);
  }
  v5 = (struct _KMUTANT *)*((_QWORD *)v2 + 7);
  if ( v5 )
    KeReleaseMutex(v5, 0);
}
