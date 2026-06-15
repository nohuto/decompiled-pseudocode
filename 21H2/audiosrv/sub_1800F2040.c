/*
 * XREFs of sub_1800F2040 @ 0x1800F2040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F01D4 @ 0x1800F01D4 (sub_1800F01D4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F2040(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int128 v8; // rdi
  _QWORD **v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h]
  struct _TP_TIMER *pv[7]; // [rsp+58h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  _QWORD **v27; // [rsp+C8h] [rbp+20h] BYREF

  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"asm_GetApplicationSubmixes");
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, __int64, _QWORD ***))(*(_QWORD *)qword_18019EE60 + 48LL))(
    qword_18019EE60,
    &lpCriticalSection,
    a1,
    &v27);
  v23 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  v9 = v27;
  v10 = *v27;
  try
  {
    while ( v10 != v9[1] )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 184LL))(*v10);
      v22 = v11;
      if ( (_QWORD)v8 == *((_QWORD *)&v8 + 1) )
      {
        sub_1800F01D4((const void **)&v23, *((_BYTE **)&v8 + 1), &v22);
        *(_QWORD *)&v8 = v24;
        *((_QWORD *)&v8 + 1) = *((_QWORD *)&v23 + 1);
      }
      else
      {
        **((_QWORD **)&v8 + 1) = v11;
        *((_QWORD *)&v8 + 1) += 8LL;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&v8 + 1);
      }
      ++v10;
      v9 = v27;
    }
    v12 = v23;
    v13 = (__int64)(*((_QWORD *)&v8 + 1) - v23) >> 3;
    v14 = sub_180045410(8 * v13);
    if ( v14 )
    {
      v19 = (_QWORD *)v12;
      v20 = v14 - v12;
      while ( v19 != *((_QWORD **)&v8 + 1) )
      {
        *(_QWORD *)((char *)v19 + v20) = *v19;
        ++v19;
      }
      *a2 = v13;
      *a3 = v14;
      if ( v12 )
        sub_1800472E0(v12, 8 * (((__int64)v8 - v12) >> 3));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      sub_18000F690((__int64)pv, v20, v14);
      result = 0LL;
    }
    else
    {
      sub_18004BD84(
        (int)retaddr,
        234,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        -2147024882);
      if ( v12 )
        sub_1800472E0(v12, 8 * (((__int64)v8 - v12) >> 3));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      sub_18000F690((__int64)pv, v15, v16);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v27) = sub_1800C437C(
                     (int)retaddr,
                     247,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                     v17);
    return (unsigned int)v27;
  }
  return result;
}
