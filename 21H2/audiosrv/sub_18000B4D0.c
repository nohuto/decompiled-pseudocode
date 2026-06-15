/*
 * XREFs of sub_18000B4D0 @ 0x18000B4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000896C @ 0x18000896C (sub_18000896C.c)
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180029E70 @ 0x180029E70 (sub_180029E70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000B4D0(__int64 a1, _WORD *a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // r14
  size_t v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  char *v15; // r15
  char *v16; // rbx
  char *v17; // r10
  unsigned __int64 v18; // rsi
  __int128 *v19; // rax
  char *v20; // r9
  unsigned __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // r9
  _WORD *v24; // rax
  __int128 *v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  unsigned int v33; // edi
  size_t v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+30h] [rbp-88h] BYREF
  char *v38; // [rsp+38h] [rbp-80h] BYREF
  _WORD *v39; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v40; // [rsp+48h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+50h] [rbp-68h]
  __int128 v42; // [rsp+58h] [rbp-60h] BYREF
  __int128 v43; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v40 = a3;
  v39 = a2;
  *a3 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v41 = v5;
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v43 + 1) = 7LL;
  LOWORD(v42) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( v6 <= 7 )
  {
    *(_QWORD *)&v43 = v6;
    v34 = 2 * v6;
    memmove(&v42, a2, v34);
    *(_WORD *)((char *)&v42 + v34) = 0;
    v10 = (_QWORD *)v42;
    goto LABEL_13;
  }
  v7 = 0x7FFFFFFFFFFFFFFELL;
  if ( v6 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    if ( (v6 | 7) < 0xA )
      v7 = 10LL;
    else
      v7 = v6 | 7;
  }
  v8 = 2 * (v7 + 1);
  if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = -1LL;
    goto LABEL_56;
  }
  if ( v8 >= 0x1000 )
  {
LABEL_56:
    v35 = v8 + 39;
    if ( v8 + 39 < v8 )
      v35 = -1LL;
    v36 = sub_180055F40(v35);
    if ( v36 )
    {
      v10 = (_QWORD *)((v36 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v36;
      goto LABEL_12;
    }
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
LABEL_61:
    v10 = 0LL;
    goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_61;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 2 * (v7 + 1));
LABEL_12:
  *(_QWORD *)&v43 = v6;
  *((_QWORD *)&v43 + 1) = v7;
  v11 = 2 * v6;
  memcpy(v10, a2, v11);
  *(_WORD *)((char *)v10 + v11) = 0;
  *(_QWORD *)&v42 = v10;
LABEL_13:
  v14 = a1 + 56;
  v15 = *(char **)(a1 + 56);
  v16 = v15;
  v17 = (char *)*((_QWORD *)v15 + 1);
  v18 = *((_QWORD *)&v43 + 1);
  while ( !v17[25] )
  {
    v19 = &v42;
    if ( *((_QWORD *)&v43 + 1) >= 8uLL )
      v19 = (__int128 *)v10;
    v20 = v17 + 32;
    if ( *((_QWORD *)v17 + 7) >= 8uLL )
      v20 = (char *)*((_QWORD *)v17 + 4);
    v21 = *((_QWORD *)v17 + 6);
    if ( (unsigned __int64)v43 < v21 )
      v22 = v43;
    else
      v22 = *((_QWORD *)v17 + 6);
    if ( v22 )
    {
      v23 = v20 - (char *)v19;
      while ( 1 )
      {
        v12 = *(unsigned __int16 *)((char *)v19 + v23);
        if ( (_WORD)v12 != *(_WORD *)v19 )
          break;
        v19 = (__int128 *)((char *)v19 + 2);
        if ( !--v22 )
          goto LABEL_24;
      }
      if ( (unsigned __int16)v12 < *(_WORD *)v19 )
      {
LABEL_64:
        v17 = (char *)*((_QWORD *)v17 + 2);
        continue;
      }
    }
    else
    {
LABEL_24:
      if ( v21 < (unsigned __int64)v43 )
        goto LABEL_64;
    }
    v16 = v17;
    v17 = *(char **)v17;
  }
  if ( v16 == v15 )
    goto LABEL_48;
  v24 = v16 + 32;
  if ( *((_QWORD *)v16 + 7) >= 8uLL )
    v24 = (_WORD *)*((_QWORD *)v16 + 4);
  v25 = &v42;
  if ( *((_QWORD *)&v43 + 1) >= 8uLL )
    v25 = (__int128 *)v10;
  v26 = *((_QWORD *)v16 + 6);
  if ( v26 < (unsigned __int64)v43 )
    v27 = *((_QWORD *)v16 + 6);
  else
    v27 = v43;
  if ( !v27 )
  {
LABEL_38:
    if ( (unsigned __int64)v43 >= v26 )
      goto LABEL_39;
    goto LABEL_48;
  }
  v25 = (__int128 *)((char *)v25 - (__int64)v24);
  while ( 1 )
  {
    v12 = *(unsigned __int16 *)((char *)v25 + (_QWORD)v24);
    if ( (_WORD)v12 != *v24 )
      break;
    ++v24;
    if ( !--v27 )
      goto LABEL_38;
  }
  if ( (unsigned __int16)v12 < *v24 )
  {
LABEL_48:
    v31 = sub_180008EAC(0x48uLL);
    v31[6] = 0LL;
    v31[7] = 0LL;
    *((_OWORD *)v31 + 2) = v42;
    *((_OWORD *)v31 + 3) = v43;
    *(_QWORD *)&v43 = 0LL;
    *((_QWORD *)&v43 + 1) = 7LL;
    LOWORD(v42) = 0;
    v31[8] = 0LL;
    *v31 = v15;
    v31[1] = v15;
    v31[2] = v15;
    *((_WORD *)v31 + 12) = 0;
    sub_18000896C(v14, &v38, v16, (char *)v31 + 32, (__int64)v31);
    v16 = v38;
    v18 = *((_QWORD *)&v43 + 1);
    v10 = (_QWORD *)v42;
  }
LABEL_39:
  if ( v18 >= 8 )
  {
    v28 = 2 * v18 + 2;
    v37 = v28;
    v38 = (char *)v10;
    if ( v28 >= 0x1000 )
    {
      sub_1800BB290(&v38, &v37);
      v28 = v37;
      v10 = v38;
    }
    sub_18006A148(v10, v28);
  }
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v43 + 1) = 7LL;
  LOWORD(v42) = 0;
  v29 = *((_QWORD *)v16 + 8);
  if ( v29 )
  {
LABEL_44:
    (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *))(*(_QWORD *)v29 + 8LL))(v29, v12, v13, v25);
    v29 = *((_QWORD *)v16 + 8);
LABEL_45:
    *v40 = v29;
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  v32 = sub_180029E70(v16 + 64, &v39, v13, v25);
  v33 = v32;
  if ( v32 >= 0 )
  {
    v29 = *((_QWORD *)v16 + 8);
    if ( !v29 )
      goto LABEL_45;
    goto LABEL_44;
  }
  sub_18004BD84(retaddr, 639LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp", (unsigned int)v32);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v33;
}
