/*
 * XREFs of sub_1800C5AF8 @ 0x1800C5AF8
 * Callers:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_1 @ 0x1800C5790 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_1.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011D4F8 @ 0x18011D4F8 (sub_18011D4F8.c)
 */

__int64 __fastcall sub_1800C5AF8(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // esi
  bool v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int128 *v10; // rax
  __int128 v11; // xmm0
  int v13; // [rsp+28h] [rbp-79h]
  int v14; // [rsp+30h] [rbp-71h]
  int v15; // [rsp+38h] [rbp-69h]
  _QWORD *v16; // [rsp+88h] [rbp-19h] BYREF
  __int128 v17; // [rsp+98h] [rbp-9h] BYREF
  int v18; // [rsp+A8h] [rbp+7h]
  __int128 v19; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v20; // [rsp+C8h] [rbp+27h] BYREF

  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)pv + 24LL))(
         pv,
         *(_QWORD *)(a1 + 24),
         0LL,
         0LL,
         &v16);
  if ( v2 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 56LL))(v16);
    v2 = sub_18006E5E0(
           *(_DWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 36),
           0,
           v16,
           v3 != 0,
           0,
           0,
           0LL,
           1,
           0,
           0LL,
           &v20,
           0LL,
           0LL,
           0LL);
    if ( v2 >= 0 )
    {
      v5 = v20 - *(_QWORD *)(a1 + 40);
      if ( (_QWORD)v20 == *(_QWORD *)(a1 + 40) )
        v5 = *((_QWORD *)&v20 + 1) - *(_QWORD *)(a1 + 48);
      v6 = 0;
      v7 = v5 == 0;
      v8 = (_QWORD *)(a1 + 128);
      while ( 1 )
      {
        if ( !v7 )
        {
          v9 = *v8;
          if ( *v8 )
          {
            *v8 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        if ( !*v8 )
        {
          v10 = &v20;
          if ( *((_BYTE *)v8 - 4) )
            v10 = &xmmword_18015B810;
          v17 = *(_OWORD *)(v8 - 3);
          v11 = *v10;
          v18 = *((_DWORD *)v8 - 2);
          v19 = v11;
          v2 = sub_18011D4F8((_DWORD)v16, (unsigned int)&v17, (unsigned int)&v19, v4, v13, v14, v15, (__int64)v8);
          if ( v2 < 0 )
            break;
        }
        ++v6;
        v8 += 4;
        if ( v6 >= 3 )
        {
          v2 = 0;
          break;
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  return (unsigned int)v2;
}
