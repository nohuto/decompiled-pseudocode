/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C031FD78
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C03204EC (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C02247CE (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  struct DXGFASTMUTEX *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // ebx
  _BYTE v15[16]; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v16[2]; // [rsp+60h] [rbp-28h] BYREF

  v3 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4, v6, v7);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v3, CurrentProcess, 0LL);
  if ( ContextForProcess )
  {
    v10 = 1LL;
    *((_DWORD *)*ContextForProcess + 79) = 1;
    v11 = *((_DWORD *)v3 + 16);
    if ( v11 >= *((_DWORD *)this + 2) )
    {
      WdLogSingleEntry1(1LL, 1599LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pContextList->cActiveContexts < m_MaxActiveOutputDuplApps",
        1599LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = *((_DWORD *)v3 + 16);
    }
    *((_DWORD *)v3 + 16) = v11 + 1;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
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
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return v13;
}
