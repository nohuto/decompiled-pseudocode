/*
 * XREFs of sub_180043940 @ 0x180043940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043940(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  signed int v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int128 *, _QWORD *); // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, __int128 *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v5 = a3 != 2 ? 0x80070057 : 0;
  if ( a3 == 2 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = -2147467262;
    if ( v6 )
    {
      v13 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, const IID *, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, &stru_180051438, &v13);
      if ( v5 >= 0 )
      {
        v12[0] = 0LL;
        v8 = (**v13)(v13, &xmmword_180051E98, v12);
        v7 = v8;
        if ( v8 < 0 )
        {
          if ( v8 != -2147467262 )
            v5 = v8;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *), __int64, _QWORD *))(*(_QWORD *)v12[0] + 32LL))(
                 v12[0],
                 v13,
                 2LL,
                 a4);
        }
        v9 = v12[0];
        if ( v12[0] )
        {
          v12[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v10)[2])(v10);
      }
    }
    if ( v5 >= 0 && v7 == -2147467262 )
    {
      *a4 = 0LL;
      return 0;
    }
  }
  return (unsigned int)v5;
}
