/*
 * XREFs of sub_1800322E0 @ 0x1800322E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800D5060 @ 0x1800D5060 (sub_1800D5060.c)
 */

__int64 __fastcall sub_1800322E0(__int64 a1)
{
  unsigned __int64 v1; // r12
  void (__fastcall ***v2)(_QWORD, __int64); // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int128 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  _BYTE *v13; // rsi
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v20 = 0LL;
  v3 = a1;
  v4 = 1LL;
  if ( v1 > 4 )
  {
    *(_QWORD *)&v5 = 4LL;
    do
    {
      v4 = v5;
      *(_QWORD *)&v5 = v5 + 2 * v5 + 1;
    }
    while ( (unsigned __int64)v5 < v1 );
    if ( !v4 )
      return v5;
    v3 = a1;
  }
  while ( 2 )
  {
    v6 = v4 - 1;
    v7 = 0xAAAAAAAAAAAAAAABuLL;
    if ( v4 - 1 >= v1 )
      goto LABEL_30;
    v8 = (_QWORD *)(v3 + 24);
    do
    {
      if ( v6 >= v8[1] )
LABEL_46:
        sub_1800B8610(2147942487LL);
      v9 = (_QWORD *)(*v8 + 8 * v6);
      v10 = (void (__fastcall ***)(_QWORD, __int64))*v9;
      if ( v2 != (void (__fastcall ***)(_QWORD, __int64))*v9 )
      {
        if ( v2 )
        {
          (**v2)(v2, 1LL);
          v10 = (void (__fastcall ***)(_QWORD, __int64))*v9;
        }
        v2 = v10;
        v20 = v10;
LABEL_13:
        *v9 = 0LL;
        goto LABEL_14;
      }
      if ( &v20 != v9 )
        goto LABEL_13;
LABEL_14:
      v11 = v6;
      if ( v6 < v4 )
        goto LABEL_23;
      while ( 1 )
      {
        v12 = v11 - v4;
        if ( v11 - v4 >= v8[1] )
          goto LABEL_46;
        _mm_lfence();
        v2 = v20;
        v13 = *(_BYTE **)(*v8 + 8 * v12);
        if ( (v13[132] & 0x10) != 0 )
        {
          if ( (*((_BYTE *)v20 + 132) & 0x10) == 0 )
            goto LABEL_42;
        }
        else if ( (*((_BYTE *)v20 + 132) & 0x10) != 0 )
        {
          goto LABEL_23;
        }
        if ( !v13[144] )
          break;
        if ( *((_BYTE *)v20 + 144) )
          goto LABEL_20;
LABEL_42:
        v16 = sub_1800C2D44(v8);
        v17 = sub_1800C2D44(v8);
        sub_1800D5060(v17, v16);
        v11 -= v4;
        if ( v12 < v4 )
          goto LABEL_23;
      }
      if ( *((_BYTE *)v20 + 144) )
        goto LABEL_23;
LABEL_20:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v13 + 32LL))(
             *(_QWORD *)(*v8 + 8 * v12),
             v7)
        && !((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v2)[4])(v2) )
      {
        goto LABEL_42;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 32LL))(v13) )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v2)[4])(v2);
LABEL_23:
      if ( v11 >= v8[1] )
        goto LABEL_46;
      v14 = *(void (__fastcall ****)(_QWORD, __int64))(*v8 + 8 * v11);
      v15 = (_QWORD *)(*v8 + 8 * v11);
      if ( v14 == v2 )
      {
        if ( v15 != &v20 )
          goto LABEL_28;
      }
      else
      {
        if ( v14 )
          (**v14)(v14, 1LL);
        *v15 = v2;
LABEL_28:
        v2 = 0LL;
        v20 = 0LL;
      }
      ++v6;
    }
    while ( v6 < v1 );
LABEL_30:
    v5 = v4 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v4 /= 3uLL;
    if ( *((_QWORD *)&v5 + 1) >> 1 )
    {
      v3 = a1;
      continue;
    }
    break;
  }
  if ( v2 )
    *(_QWORD *)&v5 = ((__int64 (__fastcall *)(_QWORD, __int64))**v2)(v2, 1LL);
  return v5;
}
