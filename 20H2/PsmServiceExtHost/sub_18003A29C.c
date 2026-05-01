/*
 * XREFs of sub_18003A29C @ 0x18003A29C
 * Callers:
 *     sub_180039D3C @ 0x180039D3C (sub_180039D3C.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 */

char __fastcall sub_18003A29C(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  char v8; // cl
  char result; // al
  char v10; // cl
  __int128 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp+8h]

  v11 = *(_OWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v6 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v5;
  if ( v6 )
    sub_18003850C(v6);
  *(_OWORD *)(a2 + 24) = v11;
  *(_QWORD *)(a2 + 40) = v12;
  v7 = *(void **)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v4;
  if ( v7 )
    sub_18003850C(v7);
  v8 = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
  result = *(_BYTE *)(a2 + 57);
  *(_BYTE *)(a2 + 56) = v8;
  v10 = *(_BYTE *)(a1 + 57);
  *(_BYTE *)(a1 + 57) = result;
  *(_BYTE *)(a2 + 57) = v10;
  return result;
}
