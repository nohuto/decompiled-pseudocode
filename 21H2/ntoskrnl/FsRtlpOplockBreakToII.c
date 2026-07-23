/*
 * XREFs of FsRtlpOplockBreakToII @ 0x14024302C
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
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
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 *a1,
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
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r14
  PIRP v21; // rax
  __int64 *v22; // rcx
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h]

  v14 = a3;
  v26 = 0LL;
  v27 = 0LL;
  v16 = *((_DWORD *)a1 + 36);
  if ( (v16 & 0x40) == 0 || (v16 & 0x7000) != 0 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 0;
    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), a1[1], 0LL) )
      return v17;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v18 = *((_DWORD *)a1 + 36);
  if ( (v18 & 0x1F00F80) != 0 )
  {
    if ( (v18 & 0x80u) != 0 )
    {
      *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
      a1[1] = 0LL;
      return v17;
    }
    goto LABEL_20;
  }
  v19 = *a1;
  v20 = 7LL;
  *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
  if ( !*(_BYTE *)(v19 + 68) )
  {
    v23 = *((_DWORD *)a1 + 36);
    if ( (v23 & 6) != 0 )
    {
      v24 = v23 | 0x100;
    }
    else
    {
      v24 = v23 | 0x200;
      v20 = 8LL;
    }
    *((_DWORD *)a1 + 36) = v24;
    *(_QWORD *)(*a1 + 56) = v20;
    *(_DWORD *)(*a1 + 48) = 0;
    IofCompleteRequest((PIRP)*a1, 1);
    *a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      LOBYTE(a3) = 1;
      FsRtlpModifyThreadPriorities(a1, 0LL, a3);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a12 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, v14, a6, a7, a8, &v26, 0, a9, a10, a11, a13);
    }
  }
  *(_QWORD *)(v19 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
  FsRtlpClearOwner(a1, 0LL);
  *((_BYTE *)a1 + 32) = 0;
  v21 = (PIRP)*a1;
  if ( *(__int64 **)(*a1 + 56) == a1 )
  {
    v21->IoStatus.Information = 0LL;
    v21 = (PIRP)*a1;
  }
  v21->IoStatus.Status = -1073741536;
  IofCompleteRequest((PIRP)*a1, 1);
  *a1 = 0LL;
  ObfDereferenceObjectWithTag((PVOID)a1[1], 0x746C6644u);
  a1[1] = 0LL;
  *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
  while ( 1 )
  {
    v22 = (__int64 *)a1[11];
    if ( v22 == a1 + 11 )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(v22);
  }
  return v17;
}
