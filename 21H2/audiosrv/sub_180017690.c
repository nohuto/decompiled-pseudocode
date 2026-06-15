/*
 * XREFs of sub_180017690 @ 0x180017690
 * Callers:
 *     sub_180011960 @ 0x180011960 (sub_180011960.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 * Callees:
 *     sub_180008D38 @ 0x180008D38 (sub_180008D38.c)
 *     sub_18002B894 @ 0x18002B894 (sub_18002B894.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D0B20 @ 0x1800D0B20 (sub_1800D0B20.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180017690(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  _QWORD *v6; // r15
  _QWORD *i; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned int v15; // r15d
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  PCNZWCH lpString1; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+80h] [rbp+18h]

  lpString1 = a2;
  *a3 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v19 = v5;
  v6 = *(_QWORD **)(a1 + 64);
  for ( i = *(_QWORD **)(a1 + 56); i != v6; ++i )
  {
    v8 = CompareStringW(0x7Fu, 1u, lpString1, -1, *(PCNZWCH *)(*i + 296LL), -1);
    if ( v8 == 2 )
      break;
  }
  try
  {
    if ( i == *(_QWORD **)(a1 + 64) )
    {
      v17 = 0LL;
      v9 = sub_18002B894(&v17, &lpString1);
      v10 = v9;
      if ( v9 < 0 )
      {
        sub_18004BD84(
          retaddr,
          217LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (unsigned int)v9);
        if ( v17 )
          sub_18002B930(v17);
        if ( v5 )
          LeaveCriticalSection(v5);
        return v10;
      }
      v12 = *(__int64 **)(a1 + 64);
      if ( *(__int64 **)(a1 + 72) == v12 )
      {
        sub_180008D38((__int64 *)(a1 + 56), v12, &v17);
        v13 = v17;
      }
      else
      {
        v13 = v17;
        *v12 = v17;
        if ( v13 )
          sub_180071940(v13, v12);
        *(_QWORD *)(a1 + 64) += 8LL;
      }
      if ( v13 )
        sub_1800D0B20(v13, a3);
      else
        *a3 = 0LL;
      if ( v13 )
        sub_18002B930(v13);
      goto LABEL_29;
    }
    v14 = *i;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v15 < 0x3FFFFFFF )
    {
      if ( *i )
        sub_1800D0B20(*i, a3);
      else
        *a3 = 0LL;
LABEL_29:
      if ( v5 )
        LeaveCriticalSection(v5);
      return 0LL;
    }
    sub_18004BD84(
      retaddr,
      226LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      2147942414LL);
    if ( v5 )
      LeaveCriticalSection(v5);
    result = 2147942414LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           retaddr,
                           234LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp");
  }
  return result;
}
