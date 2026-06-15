/*
 * XREFs of sub_180006524 @ 0x180006524
 * Callers:
 *     sub_1800054F0 @ 0x1800054F0 (sub_1800054F0.c)
 *     sub_1800C62F4 @ 0x1800C62F4 (sub_1800C62F4.c)
 *     sub_1800C65F8 @ 0x1800C65F8 (sub_1800C65F8.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18000770C @ 0x18000770C (sub_18000770C.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (__fastcall **__fastcall sub_180006524(__int64 a1))()
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  void *v9; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall **result)(); // rax
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)a1 = off_1801475A0;
  *(_QWORD *)(a1 + 8) = off_180146280;
  *(_QWORD *)(a1 + 16) = off_180147570;
  *(_QWORD *)(a1 + 24) = off_180146228;
  *(_QWORD *)(a1 + 32) = off_180147548;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 43, (unsigned int)&unk_18015DEF0, a1, *(_QWORD *)(a1 + 728));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v3 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 96) + 8 * v3) + 64LL))(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v3));
      if ( v3 >= *(_QWORD *)(a1 + 104) )
        sub_1800B8610(2147942487LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v3) = 0LL;
      v3 = ++v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 104) );
  }
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v4 = 0;
  if ( *(_QWORD *)(a1 + 176) )
  {
    v5 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 8 * v5) + 64LL))(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5));
      if ( v5 >= *(_QWORD *)(a1 + 176) )
        sub_1800B8610(2147942487LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5) = 0LL;
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 176) );
  }
  if ( a1 != -128 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v6 = 0;
  if ( *(_QWORD *)(a1 + 248) )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
      if ( v7 >= *(_QWORD *)(a1 + 248) )
        sub_1800B8610(2147942487LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v7) = 0LL;
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 248) );
  }
  if ( a1 != -200 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v9 = *(void **)(a1 + 968);
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  *(_QWORD *)(a1 + 864) = &off_180147538;
  if ( *(_QWORD *)(a1 + 872) )
  {
    v11 = *(_QWORD *)(a1 + 872);
    if ( GetTickCount64() - v11 > 0x3E8 )
      (**(void (__fastcall ***)(__int64, __int64, _QWORD))(a1 + 864))(
        a1 + 864,
        v11 - *(_QWORD *)(a1 + 880),
        *(unsigned int *)(a1 + 888));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 896));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  v12 = *(_QWORD *)(a1 + 776);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 784);
    v14 = *(_QWORD *)(a1 + 776);
    if ( v12 != v13 )
    {
      do
      {
        sub_18000F708(v14);
        v14 += 8LL;
      }
      while ( v14 != v13 );
    }
    v15 = (*(_QWORD *)(a1 + 792) - v12) & 0xFFFFFFFFFFFFFFF8uLL;
    v21 = v15;
    v22 = v12;
    if ( v15 >= 0x1000 )
    {
      sub_1800BB290(&v22, &v21);
      v15 = v21;
      v12 = v22;
    }
    sub_18006A148(v12, v15);
    *(_QWORD *)(a1 + 776) = 0LL;
    *(_QWORD *)(a1 + 784) = 0LL;
    *(_QWORD *)(a1 + 792) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
  sub_180006A30(*(_QWORD *)(a1 + 728) - 24LL);
  sub_180006A30(*(_QWORD *)(a1 + 696) - 24LL);
  sub_180006A30(*(_QWORD *)(a1 + 672) - 24LL);
  sub_180006A30(*(_QWORD *)(a1 + 664) - 24LL);
  sub_180006A30(*(_QWORD *)(a1 + 656) - 24LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  sub_18000770C((LPCRITICAL_SECTION)(a1 + 496));
  v16 = *(_QWORD *)(a1 + 488);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  sub_18006DFE8(a1 + 472);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 432));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  sub_180006A30(*(_QWORD *)(a1 + 328) - 24LL);
  sub_180006A30(*(_QWORD *)(a1 + 320) - 24LL);
  v17 = *(_QWORD *)(a1 + 240);
  if ( v17 )
    _o_free(v17);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v18 = *(_QWORD *)(a1 + 168);
  if ( v18 )
    _o_free(v18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v19 = *(_QWORD *)(a1 + 96);
  if ( v19 )
    _o_free(v19);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  result = &off_180147338;
  *(_QWORD *)(a1 + 32) = &off_180147338;
  return result;
}
