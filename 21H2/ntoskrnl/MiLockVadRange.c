/*
 * XREFs of MiLockVadRange @ 0x1406F7D78
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x140682D84 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiGetFirstVad @ 0x1402D75D4 (MiGetFirstVad.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14030B820 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14030EB30 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1405B21D0 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsMetadataBitmap @ 0x1406F7EFC (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v5; // eax
  unsigned __int64 v6; // rbx
  int v8; // r13d
  void *FirstVad; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 NextVad; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  _OWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v22[0] = 0LL;
  v5 = a4;
  v6 = a2;
  v8 = 1;
LABEL_2:
  if ( v5 )
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( !v8 || (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
    return 0LL;
  if ( v6 == -1LL )
    FirstVad = MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(v6);
  v10 = 0LL;
  v11 = (unsigned __int64)FirstVad;
  v12 = 0LL;
  for ( i = (unsigned __int64)FirstVad; i; i = NextVad )
  {
    NextVad = MiGetNextVad(i);
    if ( a3 == -1LL )
      goto LABEL_13;
    v15 = *(unsigned int *)(i + 28);
    if ( a3 <= (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12 )
    {
      NextVad = 0LL;
      goto LABEL_13;
    }
    if ( NextVad )
    {
      if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 == (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) )
        goto LABEL_13;
      NextVad = 0LL;
    }
    v8 = 0;
LABEL_13:
    if ( (unsigned int)MiVadIsMetadataBitmap(i) )
    {
      *((_QWORD *)v22 + v12) = i;
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(i + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, i);
      if ( (unsigned int)MiVadDeleted(i) || !v8 )
      {
        MiReferenceVad(v16);
        if ( v11 != i )
        {
          do
          {
            v20 = MiGetNextVad(v11);
            if ( !(unsigned int)MiVadIsMetadataBitmap(v11) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v11 + 40);
              KeAbPostRelease(v11 + 40);
            }
            v11 = v20;
          }
          while ( v20 != i );
        }
        if ( a4 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
        else
          UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
        if ( (unsigned int)MiVadDeleted(i) )
          MiWaitForVadDeletion(v21);
        MiUnlockAndDereferenceVad((char *)i);
        v5 = a4;
        v6 = a2;
        goto LABEL_2;
      }
      ++v10;
    }
  }
  if ( v8 && (_DWORD)v12 )
  {
    v18 = (__int64 *)v22;
    v19 = (unsigned int)v12;
    do
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(*v18 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, *v18);
      ++v10;
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  return v10;
}
