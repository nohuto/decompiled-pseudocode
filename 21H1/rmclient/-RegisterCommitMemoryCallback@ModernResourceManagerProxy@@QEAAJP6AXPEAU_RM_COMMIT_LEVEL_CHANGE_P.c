/*
 * XREFs of ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180006700
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003850 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180006820 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180006C70 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterCommitMemoryCallback(
        ModernResourceManagerProxy *this,
        void (*a2)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *),
        void (*a3)(unsigned __int64, unsigned __int64))
{
  int v4; // edi

  RtlAcquireSRWLockExclusive((char *)this + 96);
  *((_DWORD *)this + 26) = GetCurrentThreadId();
  if ( *(_OWORD *)((char *)this + 24) != 0LL )
  {
    v4 = -2147483635;
    goto LABEL_6;
  }
  *((_QWORD *)this + 3) = Windows::System::CMemoryManager::OnCommitLevelChangeRoutine;
  *((_QWORD *)this + 4) = Windows::System::CMemoryManager::OnCommitLimitChangeRoutine;
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 < 0 )
  {
LABEL_6:
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    goto LABEL_4;
  }
  v4 = 0;
LABEL_4:
  *((_DWORD *)this + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 96);
  return (unsigned int)v4;
}
