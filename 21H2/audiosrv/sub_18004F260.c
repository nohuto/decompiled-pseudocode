/*
 * XREFs of sub_18004F260 @ 0x18004F260
 * Callers:
 *     sub_1800353C0 @ 0x1800353C0 (sub_1800353C0.c)
 *     sub_18004EF00 @ 0x18004EF00 (sub_18004EF00.c)
 *     sub_1800E3B3C @ 0x1800E3B3C (sub_1800E3B3C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004F260(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v11; // edx
  _QWORD v12[8]; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  if ( *(_QWORD *)(a1 + 88) )
  {
    v12[0] = off_180154C90;
    v12[7] = v12;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 352LL))(a1, v12);
    v3 = *(_QWORD *)(a1 + 88);
    v14 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = 720;
    }
    else
    {
      if ( !v14
        || (v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 88LL))(*(_QWORD *)(a1 + 80)),
            v5 = v4,
            v4 >= 0) )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 168LL))(*(_QWORD *)(a1 + 88), a1);
        v6 = *(__int64 **)(a1 + 88);
        v7 = *v6;
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v7 + 72))(v6, 2LL, 0xFFFFFFFFLL, v8);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        goto LABEL_7;
      }
      v11 = 724;
    }
    sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v4);
    sub_18000F708(&v14);
    goto LABEL_10;
  }
LABEL_7:
  v9 = *(_QWORD *)(a1 + 88);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v5 = 0;
LABEL_10:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v5;
}
