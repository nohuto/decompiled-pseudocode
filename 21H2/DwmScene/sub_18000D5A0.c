/*
 * XREFs of sub_18000D5A0 @ 0x18000D5A0
 * Callers:
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000C5A4 @ 0x18000C5A4 (sub_18000C5A4.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000EE98 @ 0x18000EE98 (sub_18000EE98.c)
 *     memset @ 0x18012396A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000D5A0(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rbx
  HANDLE v8; // rax
  unsigned int v9; // edi
  int v10; // eax
  void *v11; // rsi
  void *v12; // rbp
  HANDLE v13; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  if ( qword_18021F558 )
  {
    v8 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, unsigned __int64))qword_18021F558)(v8, v7);
  }
  v16 = v7;
  if ( v7 )
  {
    v15 = 0LL;
    if ( (v7 & 3) != 0 )
      sub_18000EE98();
    v10 = sub_18000C5A4((__int64)&v15, a1, 1, v7 >> 2);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)v7 = 1;
      *(_QWORD *)(v7 + 8) = *a2;
      *a2 = 0LL;
      *(_QWORD *)(v7 + 16) = v15;
      v12 = 0LL;
      *(_QWORD *)&v15 = 0LL;
      *(_QWORD *)(v7 + 24) = *((_QWORD *)&v15 + 1);
      v11 = 0LL;
      *((_QWORD *)&v15 + 1) = 0LL;
      memset((void *)(v7 + 34), 0, 0x56uLL);
      *(_WORD *)(v7 + 32) = 88;
      *(_DWORD *)(v7 + 36) = 1;
      memset((void *)(v7 + 40), 0, 0x50uLL);
      v16 = 0LL;
      *a3 = v7;
      v9 = 0;
      v7 = 0LL;
    }
    else
    {
      sub_18000DD78(retaddr, 325LL, &unk_18013FEA4, (unsigned int)v10, v15, *((_QWORD *)&v15 + 1));
      v11 = (void *)*((_QWORD *)&v15 + 1);
      v12 = (void *)v15;
    }
    if ( v11 )
      sub_18000C578(v11);
    if ( v12 )
      sub_18000C578(v12);
  }
  else
  {
    v9 = -2147024882;
    sub_18000DD78(retaddr, 322LL, &unk_18013FEA4, 2147942414LL, v15, *((_QWORD *)&v15 + 1));
  }
  if ( v7 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, (LPVOID)v7);
  }
  return v9;
}
