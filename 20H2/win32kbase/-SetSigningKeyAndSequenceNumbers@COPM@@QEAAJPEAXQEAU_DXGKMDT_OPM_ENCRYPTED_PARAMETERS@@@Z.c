/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00C5C0C
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00C5910 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C0099B90 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00C5CA4 (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C6240 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::SetSigningKeyAndSequenceNumbers(
        COPM *this,
        void *a2,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a3)
{
  OPM *v3; // rdi
  PRKMUTEX *v6; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = qword_1C024ABD8;
  v6 = (PRKMUTEX *)((char *)qword_1C024ABD8 + 48);
  OPM::CMutex::Lock((void **)qword_1C024ABD8 + 6);
  v9 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)v3 + 24, a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
