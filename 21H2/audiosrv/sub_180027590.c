/*
 * XREFs of sub_180027590 @ 0x180027590
 * Callers:
 *     sub_180026F60 @ 0x180026F60 (sub_180026F60.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_180027590(__int64 a1, _QWORD *a2)
{
  int (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 v8; // rcx
  int (__fastcall ***v9)(_QWORD, void *, _QWORD *); // rcx
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, void *, _QWORD *); // rcx
  _BYTE v12[56]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]
  int (__fastcall ***v14)(_QWORD, void *, __int64 *); // [rsp+A0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  if ( *a2
    && (v5 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(*(_QWORD *)*a2 + 24LL))(*a2, &unk_18015B850, &v14),
        v4 = v14,
        v5 >= 0)
    && v14 )
  {
    v15 = 0LL;
    if ( (**v14)(v14, &unk_18015B820, &v15) < 0 )
    {
      sub_1800461B8(&v15);
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v11)[2])(v11);
      }
      v10 = *a2;
      if ( *a2 )
        goto LABEL_12;
    }
    else
    {
      v6 = v15;
      v13 = 0LL;
      v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
      if ( v7 )
        v13 = (**v7)(v7, v12);
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 192LL))(v6, v12);
      v8 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v9)[2])(v9);
      }
      v10 = *a2;
      if ( *a2 )
      {
LABEL_12:
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  else
  {
    if ( v4 )
    {
      v14 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v4)[2])(v4);
    }
    v10 = *a2;
    if ( *a2 )
      goto LABEL_12;
  }
}
