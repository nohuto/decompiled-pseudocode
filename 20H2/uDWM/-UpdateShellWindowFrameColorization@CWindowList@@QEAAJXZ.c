/*
 * XREFs of ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x180051838
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18003F828 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18003E468 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::UpdateShellWindowFrameColorization(CWindowList *this)
{
  char *v2; // rax
  char *v4; // rdi
  char *i; // rbx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h] BYREF

  RestartKey = 0LL;
  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( !v2 )
      break;
    v4 = v2 + 80;
    for ( i = (char *)*((_QWORD *)v2 + 10); i != v4; i = *(char **)i )
    {
      if ( i[612] < 0 )
        CWindowData::OnColorizationUpdated((CWindowData *)i);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
