/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1406BD520
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiUnlockVadShared @ 0x14025B10C (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025B250 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14025B330 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14025B344 (MiLockVadShared.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     MiDereferenceVad @ 0x14031745C (MiDereferenceVad.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     MiVadIsCfgBitmap @ 0x14061DDEC (MiVadIsCfgBitmap.c)
 */

__int64 __fastcall NtAreMappedFilesTheSame(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int32 *v5; // rax
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // ebx
  ULONG_PTR v15; // rax
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx(a1, 2, (int *)&v17);
  v6 = (__int64)v5;
  if ( !v5 )
    return 3221225793LL;
  MiUnlockVadShared((__int64)CurrentThread, (__int64)v5);
  v7 = MiObtainReferencedVadEx(a2, 2, (int *)&v17);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((char *)v6);
    return 3221225793LL;
  }
  if ( (volatile signed __int32 *)v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared((char *)v8);
    return 0LL;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v6) == 1 || (unsigned int)MiVadIsCfgBitmap(v8) == 1 )
  {
    MiUnlockAndDereferenceVadShared((char *)v8);
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((char *)v6);
    return 3221225496LL;
  }
  else
  {
    if ( a1 <= a2 )
    {
      MiUnlockVadShared((__int64)CurrentThread, v8);
      MiLockVadShared((__int64)CurrentThread, v6);
      v9 = v8;
    }
    else
    {
      v9 = v6;
    }
    ExAcquirePushLockSharedEx(v9 + 40, 0LL);
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
    {
      v17 = -1073741503;
    }
    else if ( (*(_DWORD *)(v6 + 48) & 0x100000) == 0
           && (*(_DWORD *)(v8 + 48) & 0x100000) == 0
           && (v10 = *(__int64 **)(v6 + 72)) != 0LL
           && (v11 = *(__int64 **)(v8 + 72)) != 0LL
           && (v12 = *v10) != 0
           && (v13 = *v11) != 0
           && *(_QWORD *)(v12 + 64)
           && *(_QWORD *)(v13 + 64) )
    {
      v14 = -1073741612;
      v15 = MiReferenceControlAreaFile(v13);
      if ( v12 == *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL) )
        v14 = 0;
      v17 = v14;
      MiDereferenceControlAreaFile(v13, v15);
    }
    else
    {
      v17 = -1073741800;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    MiUnlockAndDereferenceVadShared((char *)v6);
    MiLockVadShared((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVadShared((char *)v8);
    return v17;
  }
}
