/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0298A80
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02990A8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0299604 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // ebx
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, *(struct DXGFASTMUTEX *const *)v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v3,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    *((_DWORD *)*ContextForProcess + 79) = 1;
    v10 = *(_DWORD *)(v3 + 24);
    if ( v10 >= *((_DWORD *)this + 2) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v11 + 24) = 1650LL;
      WdLogEvent5_WdAssertion(v11);
      v10 = *(_DWORD *)(v3 + 24);
    }
    *(_DWORD *)(v3 + 24) = v10 + 1;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[0]) = 15;
    SMgrGdiCallout(v16, CurrentProcessSessionId, 0LL, 0LL, 0LL, 0LL);
    v13 = 0;
  }
  else
  {
    v13 = -1073741275;
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v8);
  return v13;
}
