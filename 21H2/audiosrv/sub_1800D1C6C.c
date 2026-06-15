/*
 * XREFs of sub_1800D1C6C @ 0x1800D1C6C
 * Callers:
 *     sub_1800C78E0 @ 0x1800C78E0 (sub_1800C78E0.c)
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
__int64 __fastcall sub_1800D1C6C(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v4; // r14
  unsigned int v6; // ebx
  int v7; // edx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 *v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rsp
  _QWORD *v14; // rbx
  _DWORD *v15; // rax
  unsigned int v16; // esi
  int v17; // edx
  int v18; // eax
  float *v19; // rax
  signed __int64 v20; // r15
  __int64 v21; // rcx
  float v22; // xmm0_4
  __int64 v23; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+38h]

  v4 = a2;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1117;
LABEL_3:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v6);
    return v6;
  }
  if ( a2 != *(_DWORD *)(a1 + 96) )
  {
    v6 = -2147024809;
    v7 = 1118;
    goto LABEL_3;
  }
  if ( a2 )
    memset(a3, 0, 4LL * a2);
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v24[0] = a1 + 136;
  v10 = (__int64 *)(a1 + 192);
  if ( !*(_QWORD *)(a1 + 192) )
    goto LABEL_36;
  v11 = (4LL * *(unsigned int *)(a1 + 96) + 16) & -(__int64)(4 * (unsigned __int64)*(unsigned int *)(a1 + 96) < 4 * (unsigned __int64)*(unsigned int *)(a1 + 96) + 16);
  if ( !v11 )
  {
    v14 = 0LL;
    goto LABEL_19;
  }
  if ( v11 <= 0x400 )
  {
    v12 = v11 + 15;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = v24;
    if ( &v23 == (__int64 *)-32LL )
      goto LABEL_19;
    LODWORD(v24[0]) = 52428;
    goto LABEL_17;
  }
  v15 = (_DWORD *)o_malloc(v11);
  v14 = v15;
  if ( v15 )
  {
    *v15 = 56797;
LABEL_17:
    v14 += 2;
  }
LABEL_19:
  v24[1] = v14;
  if ( !v14 )
  {
    v16 = -2147024882;
    v17 = 1131;
LABEL_25:
    sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v16);
    if ( v14 )
      sub_180046F70((__int64)v14);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v16;
  }
  memset(v14, 0, 4LL * *(unsigned int *)(a1 + 96));
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)*v10 + 24LL))(
          *v10,
          v14,
          *(unsigned int *)(a1 + 96));
  v16 = v18;
  if ( v18 >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      v19 = (float *)v14;
      v20 = (_BYTE *)a3 - (_BYTE *)v14;
      v21 = v4;
      do
      {
        v22 = fminf(*v19, 1.0);
        if ( v22 <= 0.0 )
          v22 = 0.0;
        *(float *)((char *)v19++ + v20) = v22;
        --v21;
      }
      while ( v21 );
    }
  }
  else
  {
    sub_18006D26C((int)retaddr, 1134, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v18);
    if ( v16 != -2147417848 )
    {
      v17 = 1149;
      goto LABEL_25;
    }
    sub_1800CB144(v10);
  }
  sub_180046F70((__int64)v14);
LABEL_36:
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
