/*
 * XREFs of sub_18001BDF0 @ 0x18001BDF0
 * Callers:
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000C5A4 @ 0x18000C5A4 (sub_18000C5A4.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000EE98 @ 0x18000EE98 (sub_18000EE98.c)
 *     sub_180018CB8 @ 0x180018CB8 (sub_180018CB8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001BDF0(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rbx
  HANDLE v8; // rax
  unsigned int v9; // edi
  signed int v10; // eax
  HANDLE v11; // rax
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x130uLL);
  if ( qword_18021F558 )
  {
    v8 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, unsigned __int64))qword_18021F558)(v8, v7);
  }
  v14 = v7;
  if ( v7 )
  {
    v13 = 0LL;
    if ( (v7 & 3) != 0 )
      sub_18000EE98();
    v10 = sub_18000C5A4((__int64)&v13, a1, 1, v7 >> 2);
    v9 = v10;
    if ( v10 >= 0 )
    {
      sub_180018CB8(v7, a2, &v13);
      v14 = 0LL;
      *a3 = v7;
      v9 = 0;
      v7 = 0LL;
    }
    else
    {
      sub_18000DD78(retaddr, 325, (__int64)&unk_18013FEA4, v10);
    }
    if ( *((_QWORD *)&v13 + 1) )
      sub_18000C578(*((void **)&v13 + 1));
    if ( (_QWORD)v13 )
      sub_18000C578((void *)v13);
  }
  else
  {
    v9 = -2147024882;
    sub_18000DD78(retaddr, 322, (__int64)&unk_18013FEA4, 0x8007000E);
  }
  if ( v7 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, (LPVOID)v7);
  }
  return v9;
}
