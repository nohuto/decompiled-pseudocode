/*
 * XREFs of xxxGetControlBrush @ 0x1C0146454
 * Callers:
 *     NtUserGetControlBrush @ 0x1C0146370 (NtUserGetControlBrush.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014CF4C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxGetControlColor @ 0x1C014651C (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(struct tagWND *a1)
{
  struct tagWND *v2; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[2] = 0LL;
  if ( (((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v2 = (struct tagWND *)*((_QWORD *)a1 + 13);
  else
    v2 = (struct tagWND *)*((_QWORD *)a1 + 15);
  CurrentThread = KeGetCurrentThread();
  if ( !v2 )
    v2 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = v2;
  if ( v2 )
    HMLockObject(v2);
  ControlColor = xxxGetControlColor(v2);
  ThreadUnlock1(v7, v6, v8);
  return ControlColor;
}
