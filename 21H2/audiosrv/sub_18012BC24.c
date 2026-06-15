/*
 * XREFs of sub_18012BC24 @ 0x18012BC24
 * Callers:
 *     sub_18012C250 @ 0x18012C250 (sub_18012C250.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_18005C250 @ 0x18005C250 (sub_18005C250.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012BC24(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r10
  _QWORD *v13; // r8
  __int64 v14; // r10

  *a3 = 0LL;
  if ( !sub_18005C250(a2, &stru_18015B900) )
  {
    if ( sub_18005C250(v3, dword_180174478) )
    {
      *v7 = v8;
    }
    else
    {
      if ( !sub_180027D40(v6, dword_180172918) )
      {
        if ( sub_180027D40(v10, dword_18015B8E0) )
        {
          *v13 = v14;
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
          v8 = 0LL;
        }
        if ( v9 < 0 )
          return (unsigned int)v9;
        goto LABEL_11;
      }
      *v11 = v12;
    }
    v9 = 0;
LABEL_11:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v9;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
