/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@IEAAJXZ @ 0x18002F714
 * Callers:
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x18002F4E8 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(HANDLE *this)
{
  HANDLE *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE v4; // rax
  int v6; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  if ( *((_BYTE *)this + 176) )
  {
    v3 = -2147467260;
    dwCreationFlags = 913;
LABEL_8:
    v6 = v3;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802D9E98, 3u, v6, dwCreationFlags, 0LL);
    return v3;
  }
  v2 = (*((__int64 (__fastcall **)(HANDLE *))*this + 7))(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = v2;
    dwCreationFlags = 916;
    goto LABEL_10;
  }
  v4 = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, v1, 4u, &ThreadId);
  LODWORD(this) = ThreadId;
  v1[21] = v4;
  CManipulationManager::s_dwManipulationThreadId = (unsigned int)this;
  if ( !v4 )
  {
    v3 = -2147024882;
    dwCreationFlags = 930;
    goto LABEL_8;
  }
  SetThreadDescription(v4, L"DWM Manipulation Thread");
  SetThreadPriority(v1[21], 16);
  ResumeThread(v1[21]);
  WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
  return v3;
}
