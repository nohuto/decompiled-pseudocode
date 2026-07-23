/*
 * XREFs of MiLockMemoryLists @ 0x140389120
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall MiLockMemoryLists(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // edi
  int v5; // edx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r13d
  __int64 i; // rbp
  _QWORD *v14; // rcx
  volatile __int64 *v15; // rdx
  volatile __int64 *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  volatile __int64 *v20; // rbx
  __int64 v21; // r15
  _QWORD *v22; // rcx
  unsigned int v23; // ebx
  volatile __int64 *v24; // r15
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx

  v2 = *(_QWORD **)(a1 + 5032);
  v3 = 0;
  if ( a2 )
  {
    *v2 = 0LL;
    v2[1] = a1 + 4128;
    KxAcquireQueuedSpinLock((__int64)v2, (volatile __int64 *)(a1 + 4128));
    LODWORD(v8) = 1;
    v9 = (__int64 *)(a1 + 2176);
    v10 = 2LL;
    v11 = 8LL;
    do
    {
      v12 = 0;
      for ( i = *v9; v12 < dword_140C4DF3C; ++v12 )
      {
        v14 = &v2[3 * (unsigned int)v8];
        *v14 = 0LL;
        v15 = (volatile __int64 *)(i + 8 * (v12 + 4 * (v12 + 1LL)));
        v14[1] = v15;
        KxAcquireQueuedSpinLock((__int64)v14, v15);
        LODWORD(v8) = v8 + 1;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v16 = (volatile __int64 *)(a1 + 2464);
    do
    {
      v17 = &v2[3 * (unsigned int)v8];
      v17[1] = v16;
      *v17 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v17, v16);
      v16 += 5;
      v8 = (unsigned int)(v8 + 1);
      --v11;
    }
    while ( v11 );
    v18 = &v2[3 * v8];
    v18[1] = a1 + 7520;
    *v18 = 0LL;
    KxAcquireQueuedSpinLock((__int64)v18, (volatile __int64 *)(a1 + 7520));
    v19 = (unsigned int)(v8 + 1);
    v20 = (volatile __int64 *)(a1 + 3488);
    v21 = 16LL;
    do
    {
      v22 = &v2[3 * v19];
      v22[1] = v20;
      *v22 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v22, v20);
      v20 += 5;
      v19 = (unsigned int)(v19 + 1);
      --v21;
    }
    while ( v21 );
    v23 = 0;
    if ( KeNumberNodes )
    {
      v24 = (volatile __int64 *)(*(_QWORD *)(a1 + 16) + 4328LL);
      do
      {
        v25 = &v2[3 * v19];
        v25[1] = v24;
        *v25 = 0LL;
        KxAcquireQueuedSpinLock((__int64)v25, v24);
        v19 = (unsigned int)(v19 + 1);
        v24 += 568;
        ++v23;
      }
      while ( v23 < (unsigned __int16)KeNumberNodes );
    }
    v26 = &v2[3 * v19];
    v26[1] = a1 + 7584;
    *v26 = 0LL;
    return KxAcquireQueuedSpinLock((__int64)v26, (volatile __int64 *)(a1 + 7584));
  }
  else
  {
    v5 = dword_140C4DF3C;
    v6 = (unsigned __int16)KeNumberNodes;
    result = (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DF3C + 27;
    if ( (_DWORD)result )
    {
      do
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v2[3 * v6 + 3 * (2 * v5 + 26 - v3)]);
        v5 = dword_140C4DF3C;
        ++v3;
        v6 = (unsigned __int16)KeNumberNodes;
        result = (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DF3C + 27;
      }
      while ( v3 < (unsigned int)result );
    }
  }
  return result;
}
