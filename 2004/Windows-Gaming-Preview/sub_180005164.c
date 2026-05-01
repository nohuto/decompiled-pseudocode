/*
 * XREFs of sub_180005164 @ 0x180005164
 * Callers:
 *     sub_1800066D4 @ 0x1800066D4 (sub_1800066D4.c)
 *     sub_180006954 @ 0x180006954 (sub_180006954.c)
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180005164(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  void *v6; // rsi
  HANDLE ProcessHeap; // rax
  void *v8; // rsi
  HANDLE v9; // rax
  char v10; // cl
  char result; // al
  char v12; // cl
  __int128 v13; // [rsp+20h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp+8h]

  v13 = *(_OWORD *)(a1 + 24);
  v14 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v6 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v5;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  *(_OWORD *)(a2 + 24) = v13;
  *(_QWORD *)(a2 + 40) = v14;
  v8 = *(void **)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v4;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  v10 = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
  result = *(_BYTE *)(a2 + 57);
  *(_BYTE *)(a2 + 56) = v10;
  v12 = *(_BYTE *)(a1 + 57);
  *(_BYTE *)(a1 + 57) = result;
  *(_BYTE *)(a2 + 57) = v12;
  return result;
}
