/*
 * XREFs of sub_18001CAEC @ 0x18001CAEC
 * Callers:
 *     sub_18001A250 @ 0x18001A250 (sub_18001A250.c)
 *     sub_18001C5F4 @ 0x18001C5F4 (sub_18001C5F4.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 * Callees:
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 *     sub_18001F920 @ 0x18001F920 (sub_18001F920.c)
 *     sub_180021070 @ 0x180021070 (sub_180021070.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001CAEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v9; // rdi
  void *v10; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v12; // rax
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]

  if ( (unsigned __int8)sub_18001CC40(a1, a2) )
    return 1;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 58)
      && (unsigned __int64)(a3 + a5 + 32 + *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >= *(_QWORD *)(a1 + 40)
                                                                                         - *(_QWORD *)(a1 + 24) )
    {
      sub_180021070(a1 + 24);
    }
  }
  else
  {
    v13 = 0LL;
    v14 = 0LL;
    if ( (unsigned __int8)sub_180021070(&v13) )
    {
      sub_18001F920(a1, v13, 0LL, v14 - v13);
      v9 = 0LL;
      v10 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 48) = *((_QWORD *)&v14 + 1);
      if ( v10 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v10);
      }
      *(_BYTE *)(a1 + 58) = 1;
    }
    else
    {
      v9 = (void *)*((_QWORD *)&v14 + 1);
    }
    if ( v9 )
    {
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v9);
    }
  }
  return sub_18001CC40(a1, a2);
}
