/*
 * XREFs of sub_18006F62C @ 0x18006F62C
 * Callers:
 *     sub_18006E980 @ 0x18006E980 (sub_18006E980.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_18006D8C4 @ 0x18006D8C4 (sub_18006D8C4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006F62C(__int64 **a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  __int64 *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  volatile signed __int32 *v14; // rcx
  __int64 *v15; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-50h]
  __int64 **v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v19[7]; // [rsp+50h] [rbp-38h] BYREF

  v17 = a1;
  v16 = a5;
  v8 = *a1;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *(_QWORD *)(a4 + 8);
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_QWORD *)(v10 + 40) >= v12;
      else
        v11 = v12 < *(_QWORD *)(v10 + 40);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v15 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_18006D8C4(a1, &v18, 1, v9, a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v15);
    }
    if ( (unsigned __int64)v15[5] >= *(_QWORD *)(a4 + 8) )
    {
      sub_180012938(a5 + 6);
      v14 = (volatile signed __int32 *)a5[5];
      if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      j_j__o_free(a5);
      *(_QWORD *)a2 = v15;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *sub_18006D8C4(a1, v19, v11, v9, a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_18007B598(v17, v16);
    throw;
  }
  return result;
}
