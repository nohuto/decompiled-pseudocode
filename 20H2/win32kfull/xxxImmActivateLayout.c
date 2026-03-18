/*
 * XREFs of xxxImmActivateLayout @ 0x1C012D038
 * Callers:
 *     EditionImmActivateLayout @ 0x1C012D020 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E2D90 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3170 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

_UNKNOWN **__fastcall xxxImmActivateLayout(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rsi
  _QWORD *v6; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  struct _LARGE_STRING *v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  v16[2] = 0LL;
  v3 = a1 + 440;
  if ( *(_QWORD *)(a1 + 440) != a2 )
  {
    if ( *(_QWORD *)(a1 + 784) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v8 = *(_QWORD *)(a1 + 784);
      v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v16;
      v16[1] = v8;
      HMLockObject(v8);
      v9 = *(struct _LARGE_STRING **)(a2 + 40);
      v10 = *(_QWORD *)(a1 + 784);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v10, 0x287u, 0x19uLL, v9, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v12, v11, v13);
      v6 = v15;
      v15[0] = v3;
      v15[1] = a2;
    }
    else
    {
      v14[0] = a1 + 440;
      v6 = v14;
      v14[1] = a2;
    }
    return (_UNKNOWN **)HMAssignmentLock(v6);
  }
  return result;
}
