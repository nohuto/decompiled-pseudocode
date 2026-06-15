/*
 * XREFs of sub_1800E280C @ 0x1800E280C
 * Callers:
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 * Callees:
 *     sub_180038B58 @ 0x180038B58 (sub_180038B58.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E280C(_QWORD *a1, __int64 *a2, int *a3, int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // esi

  *a1 = 0LL;
  v8 = sub_18006A18C(0x38uLL);
  v9 = v8;
  if ( v8 )
  {
    sub_180038B58(v8);
    *v9 = &off_180155570;
    v9[1] = off_180155530;
    v9[2] = off_180155510;
    v9[5] = 0LL;
    *((_DWORD *)v9 + 12) = 0;
    *((_DWORD *)v9 + 13) = 0;
    v11 = *a4;
    v12 = *a2;
    v13 = v9[5];
    v14 = *a3;
    if ( v13 != *a2 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = v9[5];
      }
      v9[5] = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    *((_DWORD *)v9 + 12) = v14;
    *((_DWORD *)v9 + 13) = v11;
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *, _QWORD *))*v9)(v9, &xmmword_18015DD78, a1);
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
