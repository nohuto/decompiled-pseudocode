/*
 * XREFs of sub_1800166BC @ 0x1800166BC
 * Callers:
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 * Callees:
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800166BC(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-60h] BYREF
  char v12; // [rsp+28h] [rbp-58h]
  LPCRITICAL_SECTION v13; // [rsp+30h] [rbp-50h] BYREF
  char v14; // [rsp+38h] [rbp-48h]
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v12 = 0;
  sub_18001A330(&lpCriticalSection);
  sub_1800163F0(a1, 0);
  *(_DWORD *)(a1 + 448) = 2;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v15[0] = off_18003EE40;
  v15[1] = a1;
  v15[7] = v15;
  v2 = sub_18002D14C(v15);
  if ( v2 < 0 )
    sub_18000F8F4(
      retaddr,
      3980,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  v13 = (LPCRITICAL_SECTION)(a1 + 624);
  v14 = 0;
  sub_18001A330(&v13);
  if ( *(_QWORD *)(a1 + 672) )
  {
    v3 = 0LL;
    v4 = *(_DWORD *)(a1 + 680);
    if ( v4 )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 664) + 8 * v3);
        if ( v5 )
          goto LABEL_12;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v4 );
    }
    v5 = 0LL;
    while ( v5 )
    {
LABEL_12:
      v6 = v5;
      v7 = *(_QWORD *)(v5 + 16);
      if ( !v7 )
      {
        v8 = *(_DWORD *)(a1 + 680);
        v9 = *(_DWORD *)(v5 + 24) % v8 + 1;
        do
        {
          if ( (unsigned int)v9 >= v8 )
            break;
          v10 = *(_QWORD *)(a1 + 664);
          if ( *(_QWORD *)(v10 + 8 * v9) )
            v7 = *(_QWORD *)(v10 + 8 * v9);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( !v7 );
      }
      v5 = v7;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v6 + 8) + 24LL))(
        *(_QWORD *)(v6 + 8),
        a1 + 16,
        *(_QWORD *)v6);
    }
  }
  if ( v14 )
    LeaveCriticalSection(v13);
}
