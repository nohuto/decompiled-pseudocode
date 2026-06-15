/*
 * XREFs of sub_180050620 @ 0x180050620
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800DBF58 @ 0x1800DBF58 (sub_1800DBF58.c)
 *     sub_1800F6478 @ 0x1800F6478 (sub_1800F6478.c)
 */

__int64 __fastcall sub_180050620(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v10; // ebx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v6 = *(std::_Ref_count_base **)(a1 + 464);
  v7 = 0;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v6 )
    sub_180052600(v6);
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v10 = -2004287487;
    sub_18004BD84((int)retaddr, 2164, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2004287487);
LABEL_20:
    v7 = v10;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a1 + 192);
  if ( !v8 )
  {
    v10 = -2004287487;
    sub_18004BD84((int)retaddr, 2165, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2004287487);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(v8 + 432) )
  {
    v10 = -2005139336;
    goto LABEL_20;
  }
  if ( a2 != *(_QWORD *)(v8 + 56) )
  {
    v10 = -2147024809;
    sub_18004BD84((int)retaddr, 4863, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2147024809);
    sub_18004BD84((int)retaddr, 2166, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2147024809);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a1 + 188) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 304LL))(*(_QWORD *)(a1 + 168));
    *(_BYTE *)(a1 + 188) = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 512));
    v13 = 0LL;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
      pv,
      *(_QWORD *)(a1 + 216),
      0LL,
      0LL,
      &v13);
    sub_1800DBF58(a1 + 504);
    sub_1800F6478(v11, 0LL, v13);
    sub_18000F708(&v13);
    v8 = *(_QWORD *)(a1 + 192);
  }
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 168) + 312LL))(*(_QWORD *)(a1 + 168), v8, v5);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 64LL))(*(_QWORD *)(a1 + 192));
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 36LL, &unk_18015E3E8, a2);
  }
LABEL_11:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
