/*
 * XREFs of sub_180005394 @ 0x180005394
 * Callers:
 *     sub_1800067C4 @ 0x1800067C4 (sub_1800067C4.c)
 *     sub_180008034 @ 0x180008034 (sub_180008034.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_180009420 @ 0x180009420 (sub_180009420.c)
 * Callees:
 *     sub_180004B0C @ 0x180004B0C (sub_180004B0C.c)
 *     sub_180005258 @ 0x180005258 (sub_180005258.c)
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180005394(__int64 a1, void *Buf1, size_t Size, int a4, size_t a5, int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rdi
  void *v13; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v15; // rax
  unsigned __int64 v16; // r8
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h]

  if ( (unsigned __int8)sub_1800057C8(a1, Buf1, Size, a4, a5, a6) )
    return 1;
  v11 = Size + a5 + 32;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v16 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24);
      if ( v11 + *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24) >= v16 )
      {
        if ( v11 < 2 * v16 )
          v11 = 2 * v16;
        sub_180004B0C(a1 + 24, v11);
      }
    }
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
    if ( sub_180004B0C((__int64)&v17, v11 + 10) )
    {
      sub_180005258(a1, v17, 0LL, v18 - v17);
      v12 = 0LL;
      v13 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 48) = *((_QWORD *)&v18 + 1);
      if ( v13 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v13);
      }
      *(_BYTE *)(a1 + 58) = 1;
    }
    else
    {
      v12 = (void *)*((_QWORD *)&v18 + 1);
    }
    if ( v12 )
    {
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v12);
    }
  }
  return sub_1800057C8(a1, Buf1, Size, a4, a5, a6);
}
