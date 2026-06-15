/*
 * XREFs of sub_1800D1F10 @ 0x1800D1F10
 * Callers:
 *     sub_1800C8140 @ 0x1800C8140 (sub_1800C8140.c)
 * Callees:
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D1F10(__int64 a1, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  void *v8; // rsp
  _QWORD *v9; // rbx
  _DWORD *v10; // rax
  unsigned int v11; // esi
  int v12; // edx
  int v13; // eax
  float *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+38h]

  if ( !a2 )
  {
    sub_18004BD84((int)retaddr, 1066, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147467261);
    return 2147500035LL;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v17[0] = v5;
  *a2 = 0.0;
  if ( !*(_QWORD *)(a1 + 192) )
    goto LABEL_29;
  v6 = (4LL * *(unsigned int *)(a1 + 96) + 16) & -(__int64)(4 * (unsigned __int64)*(unsigned int *)(a1 + 96) < 4 * (unsigned __int64)*(unsigned int *)(a1 + 96) + 16);
  if ( !v6 )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  if ( v6 <= 0x400 )
  {
    v7 = v6 + 15;
    if ( v6 + 15 < v6 )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v17;
    if ( &v16 == (__int64 *)-32LL )
      goto LABEL_14;
    LODWORD(v17[0]) = 52428;
    goto LABEL_12;
  }
  v10 = (_DWORD *)o_malloc(v6);
  v9 = v10;
  if ( v10 )
  {
    *v10 = 56797;
LABEL_12:
    v9 += 2;
  }
LABEL_14:
  v17[1] = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 1075;
LABEL_20:
    sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v11);
    if ( v9 )
      sub_180046F70((__int64)v9);
    if ( v5 )
      LeaveCriticalSection(v5);
    return v11;
  }
  memset(v9, 0, 4LL * *(unsigned int *)(a1 + 96));
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(
          *(_QWORD *)(a1 + 192),
          v9,
          *(unsigned int *)(a1 + 96));
  v11 = v13;
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 96) )
    {
      v14 = (float *)v9;
      v15 = *(unsigned int *)(a1 + 96);
      do
      {
        *a2 = fmaxf(*v14++, *a2);
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    sub_18006D26C((int)retaddr, 1078, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v13);
    if ( v11 != -2147417848 )
    {
      v12 = 1094;
      goto LABEL_20;
    }
    sub_1800CB144((__int64 *)(a1 + 192));
  }
  sub_180046F70((__int64)v9);
LABEL_29:
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
