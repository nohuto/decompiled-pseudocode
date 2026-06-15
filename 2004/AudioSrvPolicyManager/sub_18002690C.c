/*
 * XREFs of sub_18002690C @ 0x18002690C
 * Callers:
 *     sub_180028E74 @ 0x180028E74 (sub_180028E74.c)
 * Callees:
 *     sub_180026564 @ 0x180026564 (sub_180026564.c)
 *     sub_180026714 @ 0x180026714 (sub_180026714.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

__int64 __fastcall sub_18002690C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // edi
  unsigned __int64 v6; // rsi
  SIZE_T v7; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  HANDLE v10; // rax
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v5 = sub_180026564(a1, &v12);
  if ( v5 >= 0 )
  {
    v6 = v12;
    v7 = v12 + 42;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, v7);
    v4 = v9;
    if ( v9 )
    {
      memset(v9, 0, v7);
      v4[1] = 0LL;
      *((_DWORD *)v4 + 6) = 0;
      *(_DWORD *)v4 = v7;
      *((_DWORD *)v4 + 1) = 0x10000;
      if ( !v6
        || (v5 = sub_180026714(a1, (__int64)(v4 + 4), v6), v5 >= 0)
        && (v6 > 0xFFFFFFFF ? (v5 = -2147024362, LODWORD(v6) = -1) : (v5 = 0), *((_DWORD *)v4 + 7) = v6, v5 >= 0) )
      {
        *a2 = v4;
        v4 = 0LL;
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  v10 = GetProcessHeap();
  HeapFree(v10, 0, v4);
  return (unsigned int)v5;
}
