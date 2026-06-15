/*
 * XREFs of sub_180017B10 @ 0x180017B10
 * Callers:
 *     sub_1800178D0 @ 0x1800178D0 (sub_1800178D0.c)
 *     sub_1800B9DCC @ 0x1800B9DCC (sub_1800B9DCC.c)
 *     sub_1800BA054 @ 0x1800BA054 (sub_1800BA054.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180017B10(__int64 a1, _WORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  char *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rax
  char *v14; // rdx
  __int64 v15; // rcx

  *(_QWORD *)a1 = off_1801467A0;
  *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  if ( !a2 )
    goto LABEL_21;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( !(_DWORD)v6 )
  {
LABEL_21:
    sub_18002C26C(a1 + 8);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int *)(v7 - 16);
  v9 = ((__int64)a2 - v7) >> 1;
  if ( ((1 - *(_DWORD *)(v7 - 8)) | (*(_DWORD *)(v7 - 12) - (int)v6)) < 0 )
    sub_18001B550(a1 + 8, (unsigned int)v6);
  v10 = *(char **)(a1 + 8);
  v11 = 2LL * (int)v6;
  if ( v9 <= v8 )
  {
    v14 = &v10[2 * v9];
    if ( !v11 )
      goto LABEL_11;
    if ( v10 && v14 )
    {
      memmove(v10, v14, v11);
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v11 )
      goto LABEL_11;
    if ( v10 )
    {
      memcpy(v10, a2, v11);
      goto LABEL_11;
    }
  }
  *(_DWORD *)o__errno(v10) = 22;
  o__invalid_parameter_noinfo(v15);
LABEL_11:
  if ( (int)v6 < 0 || (v12 = *(_QWORD *)(a1 + 8), (int)v6 > *(_DWORD *)(v12 - 12)) )
    sub_1800B8610(2147942487LL);
  *(_DWORD *)(v12 - 16) = v6;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * (int)v6) = 0;
LABEL_14:
  *(_DWORD *)(a1 + 16) = a3;
  return a1;
}
