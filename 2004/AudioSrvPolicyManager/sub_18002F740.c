/*
 * XREFs of sub_18002F740 @ 0x18002F740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F68C @ 0x18002F68C (sub_18002F68C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F740(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  char *v8; // r8
  char *v9; // rcx

  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(char **)(a1 + 80);
  if ( v5 )
  {
    v6 = (*(_QWORD *)(a1 + 96) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = v6 + 39;
      v8 = (char *)*((_QWORD *)v5 - 1);
      v9 = (char *)(v5 - v8);
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x18002F811LL);
      }
      v5 = v8;
    }
    sub_180039D98(v5);
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  sub_18002F68C((__int64)v5, *(_QWORD *)(a1 + 64));
  sub_180039D98(*(void **)(a1 + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98((void *)a1);
  return a1;
}
