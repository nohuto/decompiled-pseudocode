/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x14036D578
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404F0230 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x14088BA10 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpOplockSendModernAppTermination @ 0x140246634 (FsRtlpOplockSendModernAppTermination.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x140360830 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403799C4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0ACC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _BYTE *a12,
        __int64 a13)
{
  __int64 v14; // r12
  unsigned int v17; // ebx
  int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rax
  void *v21; // rcx
  unsigned int v22; // ecx
  _QWORD *i; // rsi
  int v24; // ecx
  int v25; // ecx
  __int128 v27; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+70h] [rbp-28h]

  v14 = a3;
  v27 = 0LL;
  v28 = 0LL;
  v17 = 0;
  if ( !a1 )
    return v17;
  v18 = *(_DWORD *)(a1 + 144);
  if ( v18 == 1 || (v18 & 0x6000) != 0 )
    return v17;
  if ( (v18 & 0x1F00F90) == 0 )
  {
    v19 = *(_QWORD *)a1;
    if ( (v18 & 0x1000) != 0 )
      return v17;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
    if ( *(_BYTE *)(v19 + 68) )
    {
      *(_QWORD *)(v19 + 56) = 8LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      v20 = *(_QWORD *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
      {
        *(_QWORD *)(v20 + 56) = 0LL;
        v20 = *(_QWORD *)a1;
      }
      *(_DWORD *)(v20 + 48) = -1073741536;
      IofCompleteRequest(*(PIRP *)a1, 1);
      *(_QWORD *)a1 = 0LL;
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      while ( 1 )
      {
        v21 = *(void **)(a1 + 88);
        if ( v21 == (void *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v21);
      }
      return v17;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_14;
  }
  if ( (((v18 & 0x1F0FFDF) - 16) & 0xFFFFEFFF) != 0 )
  {
    if ( (v18 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v22 = v18 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v22;
      *(_DWORD *)(a1 + 144) = v22 | 0x400;
      goto LABEL_14;
    }
    if ( (v18 & 0x80u) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v17;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        LOBYTE(a3) = 1;
        FsRtlpModifyThreadPriorities(a1, 0LL, a3);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a12 = 0;
        return (unsigned int)FsRtlpWaitOnIrp(a1, v14, a6, a7, a8, &v27, 0, a9, a10, a11, a13);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = v18 & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  else
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24LL) != 590400 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 0LL, 0LL);
      }
    }
    v24 = *(_DWORD *)(a1 + 144) & 0x20;
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
      v25 = v24 | 0x1000;
    else
      v25 = v24 | 1;
    *(_DWORD *)(a1 + 144) = v25;
  }
  return v17;
}
