/*
 * XREFs of sub_1800CB000 @ 0x1800CB000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800389E8 @ 0x1800389E8 (sub_1800389E8.c)
 *     sub_180062550 @ 0x180062550 (sub_180062550.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_180062744 @ 0x180062744 (sub_180062744.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CB000(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // rax
  unsigned int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // eax
  bool v18; // zf
  __int64 v19[4]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-20h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    result = sub_18006AB3C(*a2);
    v5 = result;
    v6 = a1[32];
    v7 = v6;
    v8 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_DWORD *)(v8 + 32) >= (unsigned int)result )
      {
        v7 = v8;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
    if ( v7 == v6 || (unsigned int)result < *(_DWORD *)(v7 + 32) )
LABEL_9:
      v7 = a1[32];
    if ( v7 == v6 )
    {
      sub_180062550((__int64)a1, a2);
      v20 = 0LL;
      sub_1800389E8(*a2, &v20);
      v9 = sub_180062688((__int64)a1, v19);
      sub_1800628C4(v20, v9);
      v10 = a1[14];
      v11 = *(unsigned int **)(v10 + 128);
      if ( v11 )
        v12 = v11[5];
      else
        v12 = 0;
      if ( v10 && v11 )
        v13 = v11[4];
      else
        v13 = 0LL;
      if ( v10 && v11 )
        v14 = v11[1];
      else
        v14 = 0LL;
      if ( v10 && v11 )
        v15 = *v11;
      else
        v15 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned int))(*(_QWORD *)v20 + 40LL))(
        v20,
        v15,
        v14,
        v13,
        v12);
      sub_1800CAC58(a1, &v20);
      result = sub_180062744((__int64)a1, v5);
      v16 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
      if ( *((_QWORD *)&v20 + 1) )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF);
        v18 = v17 == 1;
        result = (unsigned int)(v17 - 1);
        if ( v18 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          result = (unsigned int)_InterlockedDecrement(v16 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
  }
  return result;
}
