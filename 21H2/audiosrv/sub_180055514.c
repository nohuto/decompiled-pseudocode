/*
 * XREFs of sub_180055514 @ 0x180055514
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 *     sub_1800688B0 @ 0x1800688B0 (sub_1800688B0.c)
 *     sub_180068D78 @ 0x180068D78 (sub_180068D78.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180055514(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  signed int v5; // ebx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  BOOL v10; // eax

  qword_18019F850 = 0LL;
  v3 = sub_18006A18C(752LL, &unk_18019F848);
  if ( !v3 )
    return (unsigned int)-2147024882;
  v4 = sub_180066BC0(v3);
  v5 = sub_180068D78(v4, *a2);
  if ( v5 >= 0 )
  {
    qword_18019F850 = 0LL;
    if ( sub_180027D40(dword_18015BA40, &stru_18015B900) )
    {
      qword_18019F850 = v4;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = 0;
    }
    else
    {
      if ( sub_180027D40(v6, v6) )
      {
        qword_18019F850 = v4;
        v5 = 0;
        v8 = v4;
      }
      else
      {
        v10 = sub_180027D40(v7, dword_180172938);
        v8 = 0LL;
        if ( v10 )
        {
          v8 = v4 + 8;
          qword_18019F850 = v4 + 8;
        }
        v5 = !v10 ? 0x80004002 : 0;
        if ( !v10 )
          goto LABEL_7;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
LABEL_7:
  if ( v4 )
    sub_1800688B0(v4);
  return (unsigned int)v5;
}
