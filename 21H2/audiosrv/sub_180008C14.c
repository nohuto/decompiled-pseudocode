/*
 * XREFs of sub_180008C14 @ 0x180008C14
 * Callers:
 *     sub_180002AA0 @ 0x180002AA0 (sub_180002AA0.c)
 *     sub_18006D910 @ 0x18006D910 (sub_18006D910.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C60C8 @ 0x1800C60C8 (sub_1800C60C8.c)
 */

__int64 *__fastcall sub_180008C14(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v21 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = sub_180008EAC(v12);
  v14 = (__int64 *)(v13 + 8 * v6);
  v15 = *a3;
  *v14 = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = (__int64 *)a1[1];
  v17 = (__int64 *)*a1;
  if ( a2 == v16 )
  {
    v18 = (_QWORD *)v13;
    while ( v17 != v16 )
    {
      v20 = *v17;
      *v17 = 0LL;
      *v18++ = v20;
      ++v17;
    }
  }
  else
  {
    sub_1800C60C8(v17, a2, v13);
    sub_1800C60C8(a2, a1[1], v14 + 1);
  }
  if ( *a1 )
  {
    sub_1800583E4(*a1, a1[1]);
    sub_1800472E0(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v13 + v21;
  return v14;
}
