/*
 * XREFs of MiUnlockVadRange @ 0x14062DF70
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x14062DE50 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408CAFE4 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x1408DB8A0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14021E7C0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 **Address; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 i; // rbx
  _QWORD *v12; // rcx
  ULONG_PTR v14; // rdi
  __int64 *v15; // rax

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
  {
    v15 = *(__int64 **)(a1 + 2008);
    Address = 0LL;
    while ( v15 )
    {
      Address = (__int64 **)v15;
      v15 = (__int64 *)*v15;
    }
  }
  else
  {
    Address = MiLocateAddress(a2);
  }
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = (unsigned __int64)Address[1];
      v10 = (unsigned __int64)Address;
      if ( v9 )
      {
        v12 = *(_QWORD **)v9;
        if ( *(_QWORD *)v9 )
        {
          do
          {
            v9 = (unsigned __int64)v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
      }
      else
      {
        for ( i = (unsigned __int64)Address[2]; ; i = *(_QWORD *)(v9 + 16) )
        {
          v9 = i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v10 )
            break;
          v10 = v9;
        }
      }
      if ( a3 == 1 )
        break;
      v14 = (ULONG_PTR)(Address + 5);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Address + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Address + 5);
      KeAbPostRelease(v14);
      Address = (__int64 **)v9;
      if ( !--a3 )
        goto LABEL_13;
    }
    MiUnlockVad((__int64)CurrentThread, (__int64)Address);
  }
LABEL_13:
  if ( a4 )
    return UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    return (_QWORD *)UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
