/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x180296188
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x180295104 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802995D4 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18029CF8C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(CHolographicManager *this)
{
  unsigned int i; // ebx
  __int64 v3; // rdx
  unsigned int j; // ebx
  __int64 v5; // rdx
  __int64 *k; // rbx
  __int64 v7; // rsi
  unsigned int m; // esi
  _QWORD *v9; // rsi
  _QWORD *n; // rbx

  AcquireSRWLockShared((PSRWLOCK)this + 13);
  for ( i = 0; i < *((_DWORD *)this + 34); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * i);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 6),
      6u,
      (struct IUnknown *)((v3 + 72) & -(__int64)(v3 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( j = 0; j < *((_DWORD *)this + 56); ++j )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * j);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 6),
      0x18u,
      (struct IUnknown *)((v5 + 64) & -(__int64)(v5 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( k = (__int64 *)*((_QWORD *)this + 18); k != *((__int64 **)this + 19); ++k )
  {
    v7 = *k;
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 6),
      2u,
      (struct IUnknown *)((*k + 80) & -(__int64)(*k != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
    if ( *(_BYTE *)(v7 + 241) )
      CHolographicInteropTaskQueue::PostMessageW(
        *((CHolographicInteropTaskQueue **)this + 6),
        1u,
        (struct IUnknown *)(v7 + 80),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  for ( m = 0; m < *((_DWORD *)this + 48); ++m )
  {
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 6),
      0xCu,
      *(struct IUnknown **)(*((_QWORD *)this + 21) + 8LL * m),
      0LL,
      0LL,
      0LL,
      0LL);
    CHolographicExclusiveView::PublishPresentData(*(CHolographicExclusiveView **)(*((_QWORD *)this + 21) + 8LL * m));
  }
  v9 = (_QWORD *)*((_QWORD *)this + 11);
  for ( n = (_QWORD *)*((_QWORD *)this + 10); n != v9; ++n )
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 6),
      0x1Du,
      (struct IUnknown *)((*n + 64LL) & -(__int64)(*n != 0LL)),
      0LL,
      0LL,
      0LL,
      0LL);
  CHolographicInteropTaskQueue::PostMessageW(
    *((CHolographicInteropTaskQueue **)this + 6),
    0x1Bu,
    0LL,
    (void *)*((unsigned __int8 *)this + 241),
    0LL,
    0LL,
    0LL);
  ReleaseSRWLockShared((PSRWLOCK)this + 13);
}
