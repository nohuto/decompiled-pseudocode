/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0323D50
 * Callers:
 *     _lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_ @ 0x1C031EED0 (_lambda_693db078d59c16956e85dd4c51bec7d2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C02247CE (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0328988 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReleaseFrame(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  struct DXGFASTMUTEX *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int v11; // ebx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5, v7, v8);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v4, CurrentProcess, 0LL);
  if ( ContextForProcess )
    v11 = OUTPUTDUPL_CONTEXT::ReleaseFrame(*ContextForProcess, a2);
  else
    v11 = -1073741275;
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v11;
}
