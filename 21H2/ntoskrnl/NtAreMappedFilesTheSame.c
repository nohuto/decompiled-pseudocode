/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1407FAEE0
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiUnlockVadShared @ 0x140280EF8 (MiUnlockVadShared.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14030EBA0 (MiLockVadShared.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MiDereferenceVad @ 0x1405B1FD0 (MiDereferenceVad.c)
 *     MiVadIsMetadataBitmap @ 0x1406F7EFC (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall NtAreMappedFilesTheSame(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // rbp
  __int64 *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // ebx
  int v18; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx(a1, 2, &v18);
  v6 = v5;
  if ( !v5 )
    return 3221225793LL;
  MiUnlockVadShared((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVadEx(a2, 2, &v18);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((char *)v6);
    return 3221225793LL;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared((char *)v8);
    return 0LL;
  }
  else if ( (unsigned int)MiVadIsMetadataBitmap(v6) || (unsigned int)MiVadIsMetadataBitmap(v8) )
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
      v16 = -1073741503;
    }
    else if ( !_bittest((const signed __int32 *)(v6 + 48), 0x15u)
           && !_bittest((const signed __int32 *)(v8 + 48), 0x15u)
           && (v10 = *(__int64 **)(v6 + 72)) != 0LL
           && (v11 = *(__int64 **)(v8 + 72)) != 0LL
           && (v12 = *v10) != 0
           && (v13 = *v11) != 0
           && *(_QWORD *)(v12 + 64)
           && *(_QWORD *)(v13 + 64) )
    {
      v14 = MiReferenceControlAreaFile(v13);
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
      MiDereferenceControlAreaFile(v13, v14);
      v16 = v15 != v12 ? 0xC00000D4 : 0;
    }
    else
    {
      v16 = -1073741800;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    MiUnlockAndDereferenceVadShared((char *)v6);
    MiLockVadShared((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVadShared((char *)v8);
    return v16;
  }
}
