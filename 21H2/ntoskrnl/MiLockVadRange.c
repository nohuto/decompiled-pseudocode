/*
 * XREFs of MiLockVadRange @ 0x140687890
 * Callers:
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1406F55A0 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C8904 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14027C780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x140555890 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiWaitForVadDeletion @ 0x14055C050 (MiWaitForVadDeletion.c)
 *     MiVadIsCfgBitmap @ 0x140687A5C (MiVadIsCfgBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v5; // eax
  unsigned __int64 v6; // rbx
  int v8; // r13d
  __int64 **Address; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 i; // rbx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  unsigned __int64 j; // rbx
  __int64 v27; // rcx
  _OWORD v28[4]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v28[0] = 0LL;
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
  {
    v20 = *(__int64 **)(a1 + 2008);
    Address = 0LL;
    while ( v20 )
    {
      Address = (__int64 **)v20;
      v20 = (__int64 *)*v20;
    }
  }
  else
  {
    Address = MiLocateAddress(v6);
  }
  v10 = 0LL;
  v11 = (__int64)Address;
  v12 = 0LL;
  while ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = v11;
    if ( v13 )
    {
      v17 = *(_QWORD **)v13;
      if ( *(_QWORD *)v13 )
      {
        do
        {
          v13 = (unsigned __int64)v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v11 + 16); ; i = *(_QWORD *)(v13 + 16) )
      {
        v13 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 || *(_QWORD *)v13 == v14 )
          break;
        v14 = v13;
      }
    }
    if ( a3 != -1LL )
    {
      v18 = *(unsigned int *)(v11 + 28);
      if ( a3 <= (v18 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12 )
      {
        v13 = 0LL;
        goto LABEL_23;
      }
      if ( v13 )
      {
        if ( (v18 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) + 1 == (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) )
          goto LABEL_23;
        v13 = 0LL;
      }
      v8 = 0;
    }
LABEL_23:
    if ( (unsigned int)MiVadIsCfgBitmap(v11) == 1 )
    {
      *((_QWORD *)v28 + v12) = v11;
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(v11 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, v11);
      if ( (unsigned int)MiVadDeleted(v11) == 1 || !v8 )
      {
        MiReferenceVad(v19);
        if ( Address != (__int64 **)v11 )
        {
          do
          {
            v23 = (unsigned __int64)Address[1];
            v24 = (unsigned __int64)Address;
            if ( v23 )
            {
              v25 = *(_QWORD **)v23;
              if ( *(_QWORD *)v23 )
              {
                do
                {
                  v23 = (unsigned __int64)v25;
                  v25 = (_QWORD *)*v25;
                }
                while ( v25 );
              }
            }
            else
            {
              for ( j = (unsigned __int64)Address[2]; ; j = *(_QWORD *)(v23 + 16) )
              {
                v23 = j & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v23 || *(_QWORD *)v23 == v24 )
                  break;
                v24 = v23;
              }
            }
            if ( !(unsigned int)MiVadIsCfgBitmap(Address) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Address + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(Address + 5);
              KeAbPostRelease((ULONG_PTR)(Address + 5));
            }
            Address = (__int64 **)v23;
          }
          while ( v23 != v11 );
        }
        if ( a4 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
        else
          UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
        if ( (unsigned int)MiVadDeleted(v11) == 1 )
          MiWaitForVadDeletion(v27);
        MiUnlockAndDereferenceVad((char *)v11);
        v5 = a4;
        v6 = a2;
        goto LABEL_2;
      }
      ++v10;
    }
    v11 = v13;
  }
  if ( v8 == 1 && (_DWORD)v12 )
  {
    v21 = (__int64 *)v28;
    v22 = (unsigned int)v12;
    do
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(*v21 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, *v21);
      ++v10;
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  return v10;
}
