/*
 * XREFs of sub_1800E8030 @ 0x1800E8030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E8030(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // r8
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 *v13; // rbx
  __int64 *k; // rdi
  int v15; // eax
  unsigned int v16; // r15d
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = **(_QWORD ***)(a1 + 56);
  v8 = 0LL;
  try
  {
    while ( v7 != *(_QWORD **)(a1 + 56) )
    {
      v9 = v7 + 8;
      if ( v4 == v8 )
      {
        sub_1800CD5C4((__int64 *)&v18, (__int64)v8, v9);
        v4 = v19;
        v8 = (__int64 *)*((_QWORD *)&v18 + 1);
      }
      else
      {
        *v8 = *v9;
        sub_180047458(v8++);
        *((_QWORD *)&v18 + 1) = v8;
      }
      v10 = (__int64 **)v7[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    v13 = (__int64 *)v18;
    for ( k = (__int64 *)v18; k != v8; ++k )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*k + 144LL))(*k, a2);
      v16 = v15;
      if ( v15 < 0 )
      {
        sub_18004BD84((int)retaddr, 806, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp", v15);
        if ( v13 )
        {
          sub_1800CD58C(v13, v8);
          sub_1800472E0((__int64)v13, 8 * (v4 - v13));
        }
        return v16;
      }
    }
    if ( v13 )
    {
      sub_1800CD58C(v13, v8);
      sub_1800472E0((__int64)v13, 8 * (v4 - v13));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           811,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v6);
  }
  return result;
}
