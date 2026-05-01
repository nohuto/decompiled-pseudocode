/*
 * XREFs of RmpClientRegisterActivityHostCallbacks @ 0x1800058F0
 * Callers:
 *     RmRegisterActivityHostCallbacks @ 0x1800058E0 (RmRegisterActivityHostCallbacks.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x1800083B0 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterActivityHostCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // r12
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN result; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // esi
  unsigned __int64 v19; // rax
  unsigned int Pointer; // [rsp+30h] [rbp-38h]
  PVOID P; // [rsp+70h] [rbp+8h]

  v9 = 0LL;
  P = 0LL;
  v10 = a1 + 24;
  if ( a2 == -1 )
  {
    result.Simple = 3221225713LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
    v9 = Heap;
    if ( Heap )
    {
      Heap[7] = 1LL;
      *Heap = 0LL;
      Heap[1] = 0LL;
      Heap[2] = 0LL;
      Heap[3] = 0LL;
      Heap[4] = 0LL;
      Heap[5] = v10;
      Heap[6] = -1LL;
      Heap[9] = a3;
      Heap[10] = a4;
      Heap[8] = a2;
      P = Heap;
      result.Simple = 0LL;
    }
    else
    {
      result.Simple = 3221225495LL;
      v9 = 0LL;
    }
    if ( SLODWORD(result.Simple) >= 0 )
      result.Simple = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158B0, 2u, 0LL, *(_QWORD *)(a1 + 16), a2, a5).Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9[6] = *a5;
      v13 = v9[5];
      RtlAcquireSRWLockExclusive(v13 + 8);
      *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
      v15 = v9[5] + 24LL;
      v16 = *(_QWORD *)(v9[5] + 32LL);
      v17 = *(_QWORD *)v15;
      if ( (v16 & 1) != 0 )
      {
        if ( v17 )
          v17 ^= v15;
        else
          v17 = 0LL;
      }
      v18 = v16 & 1;
      LOBYTE(v14) = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v9, v17, v14) < 0 )
          {
            v19 = *(_QWORD *)v17;
            if ( v18 )
            {
              if ( !v19 )
                goto LABEL_23;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_23:
              LOBYTE(v14) = 0;
              break;
            }
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( v18 )
            {
              if ( !v19 )
                goto LABEL_24;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_24:
              LOBYTE(v14) = 1;
              break;
            }
          }
          v17 = v19;
        }
      }
      RtlRbInsertNodeEx(v15, v17, v14, v9);
      *(_DWORD *)(v13 + 16) = 0;
      RtlReleaseSRWLockExclusive(v13 + 8);
      v9 = 0LL;
      P = 0LL;
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
