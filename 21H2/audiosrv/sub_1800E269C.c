/*
 * XREFs of sub_1800E269C @ 0x1800E269C
 * Callers:
 *     sub_1800E2748 @ 0x1800E2748 (sub_1800E2748.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180027D70 @ 0x180027D70 (sub_180027D70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E269C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // r9
  _DWORD *v13; // r10

  *a3 = 0LL;
  if ( !sub_180027D40(a2, &stru_18015B900) && !sub_180027D40(v3, &dword_18015B850) )
  {
    if ( sub_180027D40(v7, v6) )
    {
      *v9 = v10;
      v11 = 0;
    }
    else
    {
      if ( sub_180027D40(v8, &xmmword_18015B860) )
      {
        *v9 = v12;
        v11 = 0;
      }
      else
      {
        v11 = sub_180027D70(v12 + 240, v13, v9);
      }
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)v11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
