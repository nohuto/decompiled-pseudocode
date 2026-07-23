/*
 * XREFs of CcReEngageWorkerThreads @ 0x14037FFD0
 * Callers:
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x140381478 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 */

void __fastcall CcReEngageWorkerThreads(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  _QWORD **v7; // rdi
  _QWORD *v8; // r10
  _QWORD *v9; // rax
  unsigned int v10; // esi
  _QWORD **v11; // rdi
  _QWORD *v12; // r10
  _QWORD *v13; // rax

  v3 = 0;
  if ( a2 )
  {
    v7 = (_QWORD **)(a1 + 208);
    do
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] == v7 )
      {
        v9 = (_QWORD *)*v8;
        if ( *(_QWORD **)(*v8 + 8LL) == v8 )
          continue;
      }
LABEL_17:
      __fastfail(3u);
      *v7 = v9;
      v9[1] = v7;
      ++*(_DWORD *)(a1 + 204);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 968)) <= 1 )
        __fastfail(0xEu);
      *v8 = 0LL;
      ExQueueWorkItemToPartition(v8, 0, 0xFFFFFFFF, *(_QWORD *)(a1 + 8));
      ++v3;
    }
    while ( v3 < a2 );
  }
  v10 = 0;
  if ( a3 )
  {
    v11 = (_QWORD **)(a1 + 304);
    do
    {
      v12 = *v11;
      if ( *v11 == v11 )
        break;
      if ( (_QWORD **)v12[1] != v11 )
        goto LABEL_17;
      v13 = (_QWORD *)*v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_17;
      *v11 = v13;
      v13[1] = v11;
      ++*(_DWORD *)(a1 + 320);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 968)) <= 1 )
        __fastfail(0xEu);
      *v12 = 0LL;
      ExQueueWorkItemToPartition(v12, 0, 0xFFFFFFFF, *(_QWORD *)(a1 + 8));
      ++v10;
    }
    while ( v10 < a3 );
  }
}
