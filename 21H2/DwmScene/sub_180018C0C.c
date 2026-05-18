/*
 * XREFs of sub_180018C0C @ 0x180018C0C
 * Callers:
 *     sub_18001DFF4 @ 0x18001DFF4 (sub_18001DFF4.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180018C0C(__int128 *a1, __int128 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  void *v7; // rdi
  HANDLE v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp+8h]

  v10 = *a1;
  v11 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = 0LL;
  *a1 = *a2;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 3) = 0LL;
  v5 = (void *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = v4;
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v4) = HeapFree(ProcessHeap, 0, v5);
  }
  *a2 = v10;
  *((_QWORD *)a2 + 2) = v11;
  v7 = (void *)*((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 3) = v3;
  if ( v7 )
  {
    v8 = GetProcessHeap();
    LODWORD(v4) = HeapFree(v8, 0, v7);
  }
  return v4;
}
