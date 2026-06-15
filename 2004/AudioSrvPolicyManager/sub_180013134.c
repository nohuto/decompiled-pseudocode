/*
 * XREFs of sub_180013134 @ 0x180013134
 * Callers:
 *     sub_180010800 @ 0x180010800 (sub_180010800.c)
 * Callees:
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180013134(__int64 a1)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // r14
  char *v6; // rdi
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  char *v9; // rbx
  char *i; // r14
  unsigned __int64 v11; // rdx
  char *v12; // rax
  unsigned __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  char *v15; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v14 = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v5 = *(_QWORD **)(a1 + 120);
  try
  {
LABEL_2:
    v6 = (char *)*((_QWORD *)&v14 + 1);
    while ( v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      v8 = v7 + 2;
      if ( v2 == v6 )
      {
        sub_1800183C0(&v14, v6, v8);
        v2 = v15;
        goto LABEL_2;
      }
      *(_QWORD *)v6 = *v8;
      v6 += 8;
      *((_QWORD *)&v14 + 1) = v6;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    v9 = (char *)v14;
    for ( i = (char *)v14; i != v6; i += 8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)i + 24LL))(
        *(_QWORD *)i,
        *(unsigned int *)(a1 + 16),
        *(_QWORD *)(a1 + 24));
    if ( v9 )
    {
      v11 = 8 * ((v2 - v9) >> 3);
      v12 = v9;
      if ( v11 >= 0x1000 )
      {
        v13 = v11 + 39;
        v9 = (char *)*((_QWORD *)v9 - 1);
        if ( (unsigned __int64)(v12 - v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v4, v13);
          __debugbreak();
        }
      }
      sub_180039D98(v9);
    }
  }
  catch ( ... )
  {
    sub_18001A1BC(retaddr);
  }
}
