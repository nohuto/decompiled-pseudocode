/*
 * XREFs of ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C6E44
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C00C6C90 (NtGdiGetOPMInformation.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C0034370 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C6EE0 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C6FD0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::GetInformation(
        COPM *this,
        void *a2,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a3,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *const a4)
{
  OPM *v4; // rdi
  PRKMUTEX *v8; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = qword_1C024CBD0;
  v8 = (PRKMUTEX *)((char *)qword_1C024CBD0 + 48);
  OPM::CMutex::Lock((void **)qword_1C024CBD0 + 6);
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)v4 + 24, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetInformation(v11, a3, a4);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v8 )
    KeReleaseMutex(*v8, 0);
  return (unsigned int)HandleObject;
}
