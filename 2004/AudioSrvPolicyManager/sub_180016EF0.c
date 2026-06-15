/*
 * XREFs of sub_180016EF0 @ 0x180016EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800187C8 @ 0x1800187C8 (sub_1800187C8.c)
 *     sub_180018F1C @ 0x180018F1C (sub_180018F1C.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180016EF0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  char v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  char v16; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  v5 = -2147024809;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 608);
  v13 = 0;
  sub_18001A330(&lpCriticalSection);
  v11 = 0LL;
  v6 = sub_1800187C8((int)a1 + 648, (unsigned int)&v15, (unsigned int)&v16, (unsigned int)&v14, (__int64)&v11);
  v7 = v6;
  if ( v6 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v6 + 24) % *(_DWORD *)(a1 + 664));
    v9 = *(_QWORD *)(v6 + 16);
    if ( v11 )
      *(_QWORD *)(v11 + 16) = v9;
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 648) + 8 * v8) = v9;
    sub_180018F1C(a1 + 648, v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    v5 = 0;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
