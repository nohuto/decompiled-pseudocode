/*
 * XREFs of HamCreateActivityForProcess @ 0x180005EE0
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x1800083B0 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityForProcess(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // rdi
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned int Pointer; // [rsp+40h] [rbp-48h]
  _QWORD v20[3]; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h]

  v20[0] = -1LL;
  P = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v10 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 2;
    Heap[7] = a2;
    Heap[6] = -1LL;
    P = Heap;
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
    v10 = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158E0, 3u, 0LL, *a1, a3, a4, v20).Pointer;
    v20[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v10[6] = v20[0];
      v12 = v10[5];
      RtlAcquireSRWLockExclusive(v12 + 8);
      *(_DWORD *)(v12 + 16) = GetCurrentThreadId();
      v14 = v10[5] + 24LL;
      v15 = *(_QWORD *)(v10[5] + 32LL);
      v16 = *(_QWORD *)v14;
      if ( (v15 & 1) != 0 )
      {
        if ( v16 )
          v16 ^= v14;
        else
          v16 = 0LL;
      }
      v17 = v15 & 1;
      LOBYTE(v13) = 0;
      if ( v16 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v10, v16, v13) < 0 )
          {
            v18 = *(_QWORD *)v16;
            if ( v17 )
            {
              if ( !v18 )
                goto LABEL_20;
              v18 ^= v16;
            }
            if ( !v18 )
            {
LABEL_20:
              LOBYTE(v13) = 0;
              break;
            }
          }
          else
          {
            v18 = *(_QWORD *)(v16 + 8);
            if ( v17 )
            {
              if ( !v18 )
                goto LABEL_21;
              v18 ^= v16;
            }
            if ( !v18 )
            {
LABEL_21:
              LOBYTE(v13) = 1;
              break;
            }
          }
          v16 = v18;
        }
      }
      RtlRbInsertNodeEx(v14, v16, v13, v10);
      *(_DWORD *)(v12 + 16) = 0;
      RtlReleaseSRWLockExclusive(v12 + 8);
      v10 = 0LL;
      P = 0LL;
      *a5 = v20[0];
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
