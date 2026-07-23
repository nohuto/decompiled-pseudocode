/*
 * XREFs of FsRtlpGrantAnyOplockFromExclusive @ 0x1404F0820
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CDF0 (FsRtlpCancelExclusiveIrp.c)
 */

__int64 __fastcall FsRtlpGrantAnyOplockFromExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char a6,
        _QWORD **a7,
        _BYTE *a8,
        _BYTE *a9,
        unsigned int a10)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ecx
  char v17; // si
  _QWORD **v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  int v22; // r8d
  unsigned int v23; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v25; // al
  bool v26; // zf
  __int64 v27; // [rsp+60h] [rbp+20h] BYREF

  v27 = a1;
  v13 = a1;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 48) + 73LL) && (a4 & 0x2000) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 24);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v15 = *(_DWORD *)(v27 + 144);
    *(_DWORD *)(v14 + 12) |= 1u;
    *(_DWORD *)(v14 + 8) = (a4 >> 12) & 5;
    *(_DWORD *)(v14 + 4) = (v15 >> 12) & 7;
    *(_QWORD *)(a2 + 56) = 24LL;
    *(_DWORD *)(a2 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a2, 1);
    return 2147483694LL;
  }
  v17 = a6;
  if ( a6 )
  {
    v18 = a7;
    (*a7)[2] = *(_QWORD *)(a1 + 8);
    v19 = *v18;
    v20 = (_QWORD *)(v27 + 104);
    v21 = *(_QWORD *)(v27 + 104);
    if ( *(_QWORD *)(v21 + 8) != v27 + 104 )
      __fastfail(3u);
    *v19 = v21;
    v19[1] = v20;
    *(_QWORD *)(v21 + 8) = v19;
    *v20 = v19;
    *v18 = 0LL;
    *(_QWORD *)(v27 + 8) = 0LL;
    v22 = a4 & 0x3010;
    goto LABEL_13;
  }
  *a8 = 1;
  if ( !a4 )
  {
    *a9 = 1;
    goto LABEL_15;
  }
  v22 = a4 & 0x3010;
  if ( (a4 & 0x3010) != 0 && (a4 & 0x4040) == 0 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
LABEL_13:
    v13 = v27;
  }
  if ( a4 )
  {
    if ( (a4 & 0x4040) == 0 && v22 != 0 )
    {
      v23 = FsRtlpRequestShareableOplock(&v27, a3, a2, a4, a5, v17, 1, a10);
    }
    else
    {
      *(_QWORD *)v13 = a2;
      v23 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      *(_QWORD *)(a2 + 56) = v27;
      *(_QWORD *)(v27 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v27 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v27 + 32) = 0;
      if ( v17 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 48), 0x746C6644u);
        *(_QWORD *)(v27 + 8) = *(_QWORD *)(a3 + 48);
      }
      *(_DWORD *)(v27 + 144) = a4 | *(_DWORD *)(v27 + 144) & 0x20 | 0x40;
      v25 = KeAcquireQueuedSpinLock(7uLL);
      v26 = *(_BYTE *)(a2 + 68) == 0;
      *(_BYTE *)(a2 + 69) = v25;
      if ( v26 )
      {
        _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
      }
      else
      {
        FsRtlpCancelExclusiveIrp(a2, 1, v17 == 0);
      }
    }
    goto LABEL_23;
  }
LABEL_15:
  v23 = 0;
  *(_DWORD *)(v13 + 144) = *(_DWORD *)(v13 + 144) & 0x20 | 1;
  *(_DWORD *)(a2 + 48) = 0;
  IofCompleteRequest((PIRP)a2, 1);
LABEL_23:
  if ( v17 )
    *(_DWORD *)(v27 + 144) |= 0x1000000u;
  return v23;
}
