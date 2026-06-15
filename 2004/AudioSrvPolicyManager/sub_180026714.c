/*
 * XREFs of sub_180026714 @ 0x180026714
 * Callers:
 *     sub_18002690C @ 0x18002690C (sub_18002690C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026714(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  signed int v5; // ebx
  size_t v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r14
  _WORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // r8
  __int64 v14; // rax
  size_t v15; // r12
  size_t v16; // rsi
  volatile signed __int32 *v17; // rdi
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h]
  int v22; // [rsp+48h] [rbp-8h]
  __int64 v24; // [rsp+A8h] [rbp+58h]

  v3 = a3;
  v5 = 0;
  v6 = 0LL;
  v7 = (_QWORD *)*a1;
LABEL_2:
  if ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    v24 = v8;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 10;
    v5 = sub_1800128F0(v8, (__int64)&v19);
    if ( v5 >= 0 )
    {
      v9 = (_QWORD *)v19;
      while ( 1 )
      {
        if ( !v9 )
        {
          sub_180017F24((__int64)&v19);
          goto LABEL_2;
        }
        v10 = *(_WORD **)(v8 + 24);
        v11 = 0LL;
        if ( v10 )
        {
          v12 = 1024LL;
          do
          {
            if ( !*v10 )
              break;
            ++v10;
            --v12;
          }
          while ( v12 );
          v5 = v12 == 0 ? 0x80070057 : 0;
          if ( v12 )
            v11 = 1024 - v12;
          else
            v11 = 0LL;
        }
        else
        {
          v5 = -2147024809;
        }
        if ( v5 < 0 )
          goto LABEL_26;
        v13 = 2 * v11 + 2;
        v14 = v6 + 4;
        if ( v6 + 4 > v3 )
          break;
        *(_DWORD *)(v6 + a2) = v13;
        v15 = v13 + v14;
        if ( v13 + v14 > v3 )
          break;
        memcpy((void *)(v14 + a2), *(const void **)(v24 + 24), v13);
        v16 = v15 + 4;
        if ( v15 + 4 > a3 )
          break;
        v17 = (volatile signed __int32 *)v9[2];
        v9 = (_QWORD *)*v9;
        if ( !v17 )
        {
          v5 = -2147418113;
          goto LABEL_26;
        }
        *(_DWORD *)(v15 + a2) = *((_DWORD *)v17 + 48);
        *(_DWORD *)(v16 + a2) = 0;
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, 0LL);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
        }
        v6 = v15 + 12;
        if ( v15 + 12 > a3 )
          break;
        v8 = v24;
        *(_DWORD *)(v16 + a2 + 4) = sub_180012658(v24);
        v3 = a3;
      }
      v5 = -2147024774;
    }
LABEL_26:
    sub_180017F24((__int64)&v19);
  }
  return (unsigned int)v5;
}
