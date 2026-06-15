/*
 * XREFs of sub_180026564 @ 0x180026564
 * Callers:
 *     sub_18002690C @ 0x18002690C (sub_18002690C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026564(_QWORD *a1, unsigned __int64 *a2)
{
  signed int v3; // ebx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // r13
  _QWORD *v7; // rsi
  _WORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  volatile signed __int32 *v14; // rbx
  unsigned __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+48h] [rbp-8h]

  v3 = 0;
  v4 = 0LL;
  v5 = (_QWORD *)*a1;
LABEL_2:
  if ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 10;
    v3 = sub_1800128F0(v6, (__int64)&v17);
    if ( v3 >= 0 )
    {
      v7 = (_QWORD *)v17;
      while ( 1 )
      {
        if ( !v7 )
        {
          sub_180017F24((__int64)&v17);
          goto LABEL_2;
        }
        v8 = *(_WORD **)(v6 + 24);
        v9 = 0LL;
        if ( v8 )
        {
          v10 = 1024LL;
          do
          {
            if ( !*v8 )
              break;
            ++v8;
            --v10;
          }
          while ( v10 );
          v3 = v10 == 0 ? 0x80070057 : 0;
          if ( v10 )
            v9 = 1024 - v10;
          else
            v9 = 0LL;
        }
        else
        {
          v3 = -2147024809;
        }
        if ( v3 < 0 )
          v11 = 0LL;
        else
          v11 = 2 * v9;
        if ( v3 < 0 )
          goto LABEL_29;
        v12 = v4 + v11 + 2;
        if ( v12 < v4 )
          break;
        v13 = v12 + 4;
        if ( v12 + 4 < v12 )
          break;
        v14 = (volatile signed __int32 *)v7[2];
        v7 = (_QWORD *)*v7;
        if ( v14 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, _WORD *))(*(_QWORD *)v14 + 32LL))(v14, v8);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
        }
        v15 = v13 + 4;
        if ( v13 + 4 < v13 )
          break;
        if ( v13 + 8 < v13 + 4 )
          break;
        v4 = v13 + 12;
        if ( v15 + 8 < v15 + 4 )
          break;
        v3 = 0;
      }
      v3 = -2147024362;
    }
LABEL_29:
    sub_180017F24((__int64)&v17);
  }
  else
  {
    *a2 = v4;
  }
  return (unsigned int)v3;
}
