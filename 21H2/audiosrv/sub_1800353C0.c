/*
 * XREFs of sub_1800353C0 @ 0x1800353C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004F260 @ 0x18004F260 (sub_18004F260.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800353C0(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // eax
  _QWORD v17[8]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 )
  {
    if ( v7 == a2 )
    {
LABEL_10:
      v9 = 0;
      goto LABEL_11;
    }
    v9 = -2005139410;
    sub_18004BD84(retaddr, 1154LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", 2289827886LL);
  }
  else
  {
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v19);
    v9 = v8;
    if ( v8 < 0 )
    {
      sub_18004BD84(
        retaddr,
        1161LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v8);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 80) + 80LL))(
              *(_QWORD *)(a1 + 80),
              v19,
              a3);
      v9 = v10;
      if ( v10 < 0 )
      {
        sub_18004BD84(
          retaddr,
          1164LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (unsigned int)v10);
      }
      else
      {
        if ( *(_QWORD *)(a1 + 88) != a2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v11 = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 88) = a2;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v17[0] = off_180154C40;
        v17[7] = v17;
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 352LL))(a1, v17);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 160LL))(*(_QWORD *)(a1 + 88), a1);
        v12 = *(__int64 **)(a1 + 88);
        v13 = *v12;
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
        v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v13 + 72))(v12, 0LL, v14, 0xFFFFFFFFLL);
        v9 = v15;
        if ( v15 >= 0 )
        {
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          goto LABEL_10;
        }
        sub_18004BD84(
          retaddr,
          1172LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (unsigned int)v15);
        sub_18004F260(a1);
      }
    }
    sub_18000F708(&v19);
  }
LABEL_11:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
