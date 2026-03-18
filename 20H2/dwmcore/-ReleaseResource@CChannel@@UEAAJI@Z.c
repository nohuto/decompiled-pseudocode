/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x1800689A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x180068A30 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180068CD0 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = CHandleTable::VerifyHandleTableEntry((char *)this + 16);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  v6 = CHandleTable::ReleaseOnChannel((CChannel *)((char *)this + 16), this, a2);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x310u, 0LL);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v8;
}
