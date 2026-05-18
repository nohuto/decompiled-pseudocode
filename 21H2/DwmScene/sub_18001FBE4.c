/*
 * XREFs of sub_18001FBE4 @ 0x18001FBE4
 * Callers:
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_18001C2F4 @ 0x18001C2F4 (sub_18001C2F4.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

unsigned __int16 *__fastcall sub_18001FBE4(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int16 *v9; // r8
  char v10; // al
  _WORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int *v14; // r8
  char v15; // al
  _WORD *v16; // rax
  unsigned __int16 *v18; // [rsp+20h] [rbp-58h] BYREF
  __int16 v19; // [rsp+28h] [rbp-50h] BYREF
  char v20; // [rsp+2Ah] [rbp-4Eh]
  int v21; // [rsp+2Ch] [rbp-4Ch]
  __int16 v22; // [rsp+30h] [rbp-48h]
  __int128 v23; // [rsp+38h] [rbp-40h]

  v18 = a3;
  v3 = a3;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) / *(_QWORD *)(a1 + 16);
    v7 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) % *(_QWORD *)(a1 + 16);
    v8 = *(unsigned int *)(a2 + 4);
    if ( v8 > v6 && (_DWORD)v8 != (_DWORD)v6 )
    {
      v9 = (unsigned __int16 *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v6;
      v10 = *(_BYTE *)(a2 + 2);
      if ( v10 == 1 )
      {
        v11 = *(_WORD **)(a2 + 16);
        v12 = *v9;
        if ( v11 )
        {
          *v11 = v12;
        }
        else
        {
          *(_DWORD *)o__errno(v12, v7) = 22;
          o__invalid_parameter_noinfo();
        }
      }
      else if ( v10 == 2 )
      {
        sub_18000F088(*(void **)(a2 + 16), 4uLL, v9, 4uLL);
      }
    }
    return (unsigned __int16 *)((char *)v3 + *(_QWORD *)(a1 + 16) * *(unsigned int *)(a2 + 4));
  }
  else
  {
    v13 = 0;
    v19 = *(_WORD *)(a1 + 6);
    v20 = *(_BYTE *)(a1 + 8);
    v21 = 0;
    v22 = 0;
    v23 = 0LL;
    if ( *(_DWORD *)(a2 + 4) )
    {
      do
      {
        if ( !sub_18001C2F4(&v19, &v18, *(_QWORD *)(a1 + 32)) )
          break;
        ++v13;
      }
      while ( v13 < *(_DWORD *)(a2 + 4) );
      v3 = v18;
    }
    v14 = (unsigned int *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 4) != v13 )
    {
      v15 = *(_BYTE *)(a2 + 2);
      *v14 = v13;
      if ( v15 == 1 )
      {
        v16 = *(_WORD **)(a2 + 16);
        if ( v16 )
        {
          *v16 = v13;
        }
        else
        {
          *(_DWORD *)o__errno(a1, a2) = 22;
          o__invalid_parameter_noinfo();
        }
      }
      else if ( v15 == 2 )
      {
        sub_18000F088(*(void **)(a2 + 16), 4uLL, v14, 4uLL);
      }
    }
  }
  return v3;
}
