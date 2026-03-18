/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01E8A10
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxInternalEnumWindow @ 0x1C01D2AE4 (xxxInternalEnumWindow.c)
 */

struct tagBWL *__fastcall xxxTurnOffCompositing(__int64 a1, int a2)
{
  struct tagBWL *result; // rax
  struct tagWND *v4; // rbx
  char v5; // si
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v11 = 0LL;
  v4 = (struct tagWND *)a1;
  v10 = 0LL;
  v5 = 1;
  if ( a2 )
  {
    v4 = *(struct tagWND **)(a1 + 112);
    if ( !v4 )
      return result;
    v5 = 3;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v10 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
    *((_QWORD *)&v10 + 1) = v4;
    HMLockObject(v4);
  }
  result = xxxInternalEnumWindow(v4, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v5);
  if ( a2 )
    return (struct tagBWL *)ThreadUnlock1(v8, v7, v9);
  return result;
}
