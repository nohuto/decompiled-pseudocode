/*
 * XREFs of ?CheckParent@CChannel@@AEAAXII@Z @ 0x180073404
 * Callers:
 *     ?VisualMoveChild@CChannel@@UEAAJIII@Z @ 0x180070290 (-VisualMoveChild@CChannel@@UEAAJIII@Z.c)
 *     ?VisualInsertChildAt@CChannel@@UEAAJIII@Z @ 0x180073150 (-VisualInsertChildAt@CChannel@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDE28 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CChannel::CheckParent(CChannel *this, int a2, unsigned int a3)
{
  int v6; // esi
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v8; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = &g_csCompositionEngine;
  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  Entry = CHandleTable::GetEntry((CChannel *)((char *)this + 16), a3);
  if ( !Entry || *((_DWORD *)Entry + 2) )
  {
    v6 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024890, 0x174u, 0LL);
  }
  else if ( *((_DWORD *)Entry + 3) == a2 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x17Au, 0LL);
  }
  else
  {
    *((_DWORD *)Entry + 3) = a2;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
}
