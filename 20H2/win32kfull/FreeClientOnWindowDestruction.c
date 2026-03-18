/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C01EE160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rsi
  struct _LIST_ENTRY *v5; // rdi
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v4 = Flink - 1;
    v5 = Flink;
    Flink = Flink->Flink;
    if ( a1 == v4->Flink )
    {
      HMAssignmentUnlock(v4);
      v6 = v5->Flink;
      if ( v5->Flink->Blink != v5 || (Blink = v5->Blink, Blink->Flink != v5) )
        __fastfail(3u);
      Blink->Flink = v6;
      v6->Blink = Blink;
      result = (_UNKNOWN **)Win32FreePool(v4);
    }
  }
  return result;
}
