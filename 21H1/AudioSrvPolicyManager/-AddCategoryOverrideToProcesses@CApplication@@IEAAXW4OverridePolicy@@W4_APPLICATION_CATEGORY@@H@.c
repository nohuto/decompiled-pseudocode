/*
 * XREFs of ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180016E18
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180016C20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180018320 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CApplication::AddCategoryOverrideToProcesses(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v8; // r10
  _DWORD *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = *(_QWORD **)(a1 + 72);
  while ( v8 )
  {
    v9 = (_DWORD *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( !v9[112] && (a4 || !v9[128]) && v9[127] != a2 )
    {
      v9[127] = a2;
      v9[128] = 1;
      v9[129] = a3;
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
