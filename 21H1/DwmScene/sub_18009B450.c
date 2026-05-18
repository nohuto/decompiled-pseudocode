/*
 * XREFs of sub_18009B450 @ 0x18009B450
 * Callers:
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 *     sub_1800EEDE8 @ 0x1800EEDE8 (sub_1800EEDE8.c)
 * Callees:
 *     sub_180038C64 @ 0x180038C64 (sub_180038C64.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_18009B64C @ 0x18009B64C (sub_18009B64C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009B450(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // r8
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    result = sub_18006AB3C(*a2);
    v5 = (__int64 *)a1[16];
    v6 = v5;
    v7 = (__int64 *)v5[1];
    if ( *((_BYTE *)v7 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v7 + 8) >= (unsigned int)result )
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
    if ( v6 == v5 || (unsigned int)result < *((_DWORD *)v6 + 8) )
LABEL_9:
      v6 = (__int64 *)a1[16];
    if ( v6 == v5 || !v6[5] )
    {
      v16 = 0LL;
      sub_180038C64(*a2, &v16);
      v8 = sub_180062688((__int64)a1, v15);
      sub_1800628C4(v16, v8);
      v9 = v16;
      v14 = 0LL;
      v10 = a1[15];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = a1[15];
      }
      *(_QWORD *)&v14 = a1[14];
      *((_QWORD *)&v14 + 1) = v10;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v14);
      result = sub_18009B64C(a1, &v16);
      v11 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
      if ( *((_QWORD *)&v16 + 1) )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF);
        v13 = v12 == 1;
        result = (unsigned int)(v12 - 1);
        if ( v13 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          result = (unsigned int)_InterlockedDecrement(v11 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
  }
  return result;
}
