/*
 * XREFs of MiHotPatchProcess @ 0x1408C7058
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1408C6C78 (MiHotPatchAllProcesses.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14024B530 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14024B570 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14024B650 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14024B664 (MiLockVadShared.c)
 *     MiReferenceVad @ 0x14024B6B0 (MiReferenceVad.c)
 *     MiUnlockVadShared @ 0x14024C440 (MiUnlockVadShared.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     MiHotPatchImage @ 0x1408C6D34 (MiHotPatchImage.c)
 */

__int64 __fastcall MiHotPatchProcess(struct _EX_RUNDOWN_REF *a1, int a2, int a3)
{
  struct _EX_RUNDOWN_REF *v3; // r15
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Count; // rax
  unsigned __int64 i; // rsi
  int v11; // ecx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  signed __int64 v15; // rax
  char v16; // bl
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // ebx
  char *v20; // rcx
  _QWORD **v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rcx

  v3 = a1 + 139;
  if ( !ExAcquireRundownProtection_0(a1 + 139) )
    return 3221225738LL;
  CurrentThread = KeGetCurrentThread();
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
LABEL_4:
  Count = (_QWORD *)a1[251].Count;
  i = 0LL;
  while ( Count )
  {
    i = (unsigned __int64)Count;
    Count = (_QWORD *)*Count;
  }
  while ( i )
  {
    if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
    {
      MiLockVadShared((__int64)CurrentThread, i);
      if ( !(unsigned int)MiVadDeleted(i)
        && (v11 = *(_DWORD *)(i + 48), (v11 & 0x100000) == 0)
        && (v11 & 0x70) == 0x20
        && (v11 & 0x400000) != 0
        && (v12 = **(__int64 ***)(i + 72), v13 = *v12, v14 = *(_QWORD *)(*v12 + 56), *(_DWORD *)(v14 + 60) == a2)
        && *(_DWORD *)(v14 + 72) == a3 )
      {
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), -1LL, -1LL);
        v16 = *(_BYTE *)(v13 + 15) >> 4;
        v17 = v15;
        MiReferenceVad(i);
        MiUnlockVadShared((__int64)CurrentThread, i);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
        MiHotPatchImage(v18, v17, (_RTL_BALANCED_NODE *)i, a2, a3, v16, 0);
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
        MiLockVadShared((__int64)CurrentThread, i);
        v19 = MiVadDeleted(i);
        MiUnlockAndDereferenceVadShared(v20);
        if ( v19 )
          goto LABEL_4;
      }
      else
      {
        MiUnlockVadShared((__int64)CurrentThread, i);
      }
    }
    v21 = *(_QWORD ***)(i + 8);
    v22 = i;
    if ( v21 )
    {
      v23 = *v21;
      for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
        i = (unsigned __int64)v23;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v22 )
          break;
        v22 = i;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
  ExReleaseRundownProtection_0(v3);
  return 0LL;
}
