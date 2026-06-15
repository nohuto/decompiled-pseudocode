/*
 * XREFs of sub_180120700 @ 0x180120700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DBF88 @ 0x1800DBF88 (sub_1800DBF88.c)
 */

__int64 __fastcall sub_180120700(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  _DWORD *v12; // rcx
  int v13; // r15d
  int v14; // eax
  __int64 v15; // rbx

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( sub_1800DBF88(a2) )
  {
    *v9 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  v10 = a1 + 24;
  if ( v10 )
  {
    if ( sub_1800DBF88(v8) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *a3 = v10;
      return v3;
    }
    v11 = &unk_180156800;
    while ( 1 )
    {
      v12 = (_DWORD *)*(v11 - 2);
      if ( v12 )
      {
        v13 = 0;
        if ( !sub_180027D40(v12, a2) )
          goto LABEL_16;
      }
      else
      {
        v13 = 1;
      }
      if ( *v11 == 1LL )
      {
        v15 = v10 + *(v11 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        *a3 = v15;
        return v3;
      }
      v14 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v11)(v10, a2, a3, *(v11 - 1));
      if ( !v14 || !v13 && v14 < 0 )
        return (unsigned int)v14;
LABEL_16:
      v11 += 3;
      if ( !*v11 )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147024809;
}
