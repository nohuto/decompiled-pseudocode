/*
 * XREFs of sub_180005258 @ 0x180005258
 * Callers:
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 * Callees:
 *     sub_180003324 @ 0x180003324 (sub_180003324.c)
 */

char __fastcall sub_180005258(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  void *v8; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v10; // rax
  bool v11; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a4 < 0xA )
  {
    sub_180003324(retaddr, 3464, (__int64)"onecore\\internal\\sdk\\inc\\wil/Staging.h");
    JUMPOUT(0x18000538BLL);
  }
  v8 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2 + a3;
  LOBYTE(v10) = a2 + a4;
  *(_BYTE *)(a1 + 57) = 0;
  *(_QWORD *)(a1 + 40) = a2 + a4;
  v11 = a3 >= 0xA;
  if ( a3 >= 0xA )
  {
    if ( *(_WORD *)a2 || (LOBYTE(v10) = 0, *(_WORD *)(a2 + 2) > *(_WORD *)a1) )
      LOBYTE(v10) = 1;
    *(_BYTE *)(a1 + 57) = v10;
    if ( *(_WORD *)a2
      || (LOWORD(v10) = *(_WORD *)a1, *(_WORD *)(a2 + 2) != *(_WORD *)a1)
      || (LOWORD(v10) = *(_WORD *)(a1 + 2), *(_WORD *)(a2 + 4) != (_WORD)v10)
      || (LOBYTE(v10) = *(_BYTE *)(a1 + 4), *(_BYTE *)(a2 + 8) != (_BYTE)v10)
      || (LOWORD(v10) = *(_WORD *)(a1 + 6), *(_WORD *)(a2 + 6) != (_WORD)v10)
      || (LOBYTE(v10) = *(_BYTE *)(a1 + 8), *(_BYTE *)(a2 + 9) != (_BYTE)v10) )
    {
      v11 = 0;
    }
  }
  if ( !v11 )
  {
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = *(_WORD *)a1;
    *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + 2);
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(a1 + 4);
    *(_WORD *)(a2 + 6) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(a2 + 9) = *(_BYTE *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24) + 10LL;
    *(_QWORD *)(a1 + 32) = v10;
  }
  return v10;
}
