/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00C6870
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C00C65F0 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C0034370 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00C6908 (-GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C6FD0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::GetRandomNumber(COPM *this, void *a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
{
  OPM *v3; // rdi
  PRKMUTEX *v6; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = qword_1C024CBD0;
  v6 = (PRKMUTEX *)((char *)qword_1C024CBD0 + 48);
  OPM::CMutex::Lock((void **)qword_1C024CBD0 + 6);
  v9 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)v3 + 24, a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetRandomNumber(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
