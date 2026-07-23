/*
 * XREFs of EtwpStackWalkApc @ 0x1405A7290
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x1405A6DDC (EtwpFinalizePendingApc.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 */

void __fastcall EtwpStackWalkApc(__int64 a1, _QWORD *a2, unsigned int **a3, int *a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v8; // rbx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  CurrentThread = KeGetCurrentThread();
  v8 = *a3;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    v9 = *a4;
    v10 = *a5;
    EtwpTraceStackWalk(v8, 4096LL, CurrentThread, &v9);
  }
  *a2 = 0LL;
  EtwpFinalizePendingApc(v8, a1);
}
