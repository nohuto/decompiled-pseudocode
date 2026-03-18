/*
 * XREFs of CreateInputContext @ 0x1C00FF9C0
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C0153430 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0x2000000) != 0 )
    return 0LL;
  v4 = gpsi;
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    if ( !*(_QWORD *)(ThreadWin32Thread + 784) )
      return 0LL;
  }
  v6 = *(_QWORD *)(ThreadWin32Thread + 448);
  if ( !v6 )
    return 0LL;
  LOBYTE(v4) = 17;
  v7 = (_QWORD *)HMAllocObject(ThreadWin32Thread, v6, v4);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = v3 + 784;
  if ( a1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v9 + 56LL);
    if ( v11 )
      v5 = *(_QWORD *)(v11 + 48);
    *(_QWORD *)(v7[5] + 16LL) = v5;
    v7[7] = v11;
    v12 = *(_QWORD *)v9;
    *(_QWORD *)(*(_QWORD *)(v12 + 40) + 16LL) = v7[6];
    *(_QWORD *)(v12 + 56) = v7;
  }
  else
  {
    v13[0] = v3 + 784;
    v13[1] = v7;
    HMAssignmentLock(v13);
    *(_QWORD *)(*(_QWORD *)(v3 + 472) + 256LL) = v8[6];
    *(_QWORD *)(v8[5] + 16LL) = 0LL;
    v8[7] = 0LL;
  }
  *(_QWORD *)(v8[5] + 24LL) = a1;
  return v8;
}
