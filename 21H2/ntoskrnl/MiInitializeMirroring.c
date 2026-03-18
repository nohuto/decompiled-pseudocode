/*
 * XREFs of MiInitializeMirroring @ 0x140B05D00
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiUpdateMirrorBitmaps @ 0x1407FD634 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  __int64 *v0; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // r15
  unsigned __int64 v3; // rdi
  unsigned int i; // ebp
  ULONG_PTR v5; // rax
  struct _KTHREAD *v7; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v10; // edx
  int v11; // r9d
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  *((_QWORD *)&v13 + 1) = 0LL;
  v0 = qword_140C52A10;
  stru_140C529E8.List.Flink = 0LL;
  stru_140C529D0.Header.WaitListHead.Blink = &stru_140C529D0.Header.WaitListHead;
  stru_140C529D0.Header.WaitListHead.Flink = &stru_140C529D0.Header.WaitListHead;
  LOWORD(stru_140C529D0.Header.Lock) = 1;
  stru_140C529E8.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  stru_140C529D0.Header.Size = 6;
  stru_140C529D0.Header.SignalState = 1;
  stru_140C529E8.Parameter = (void *)-1LL;
  CurrentThread = KeGetCurrentThread();
  v2 = qword_140C50840;
  v3 = (((unsigned __int64)(qword_140C50840 + 8) >> 3) + 4095) >> 12;
  for ( i = 0; i < 2; ++i )
  {
    v5 = MiReservePtes((__int64)&qword_140C534C0, v3);
    if ( !v5 || !(unsigned int)MiInitializeDynamicBitmap(&v13, (__int64)(v5 << 25) >> 16, v2 + 1, 12) )
      return 0LL;
    *(_QWORD *)&v13 = 0LL;
    *(_OWORD *)v0 = v13;
    v0 += 2;
  }
  if ( (dword_140D051C4 & 1) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C55040, 0LL);
    MiUpdateMirrorBitmaps();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C55040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C55040);
    v7 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C55040 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    _disable();
    p_Process = (__int64)&v7[1].Process;
    v10 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C55040 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v10;
      p_Process += 96LL;
      if ( v10 >= 6 )
        goto LABEL_24;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v11 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v7->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v11 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, (__int64)&qword_140C55040, v11);
      goto LABEL_27;
    }
LABEL_24:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C55040, SessionId, 0LL);
    _enable();
LABEL_27:
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 1LL;
}
