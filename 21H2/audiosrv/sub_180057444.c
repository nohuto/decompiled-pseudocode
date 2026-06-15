/*
 * XREFs of sub_180057444 @ 0x180057444
 * Callers:
 *     sub_180057CD4 @ 0x180057CD4 (sub_180057CD4.c)
 *     sub_180104DB8 @ 0x180104DB8 (sub_180104DB8.c)
 * Callees:
 *     sub_18005757C @ 0x18005757C (sub_18005757C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180057444(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 v6; // rdx
  __int64 *v7; // [rsp+20h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF
  char v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v10[1] = -2LL;
  v13 = 0LL;
  v7 = &v13;
  result = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 24LL))(a1, &unk_18015B078, 23LL);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v12);
    if ( (int)result >= 0 )
    {
      for ( i = 0; i < (unsigned int)v12; ++i )
      {
        v8 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, i, &v8);
        if ( (int)result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, &v11);
          if ( (int)result >= 0 )
          {
            v9 = v13;
            if ( v13 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
            v10[0] = v8;
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
            result = sub_18005757C(a2, v6, v10, &v9, v7);
          }
        }
        if ( v8 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  if ( v13 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return result;
}
