/*
 * XREFs of sub_1801412E0 @ 0x1801412E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801412E0(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // edi
  _OWORD *v3; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rcx
  _BYTE v19[8]; // [rsp+40h] [rbp-458h] BYREF
  __int128 v20; // [rsp+48h] [rbp-450h] BYREF
  int v21; // [rsp+58h] [rbp-440h]
  int v22; // [rsp+5Ch] [rbp-43Ch]
  _BYTE v23[1056]; // [rsp+60h] [rbp-438h] BYREF

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    memset(v23, 0, 0x418uLL);
    v5 = *(_QWORD *)(a1 + 192);
    v20 = xmmword_180178F18;
    v21 = 0;
    v22 = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _BYTE *, int, _BYTE *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &v20,
           24LL,
           v23,
           1048,
           v19);
    if ( v6 >= 0 )
    {
      v7 = 8LL;
      v8 = v23;
      do
      {
        v9 = v8[1];
        *v3 = *v8;
        v10 = v8[2];
        v3[1] = v9;
        v11 = v8[3];
        v3[2] = v10;
        v12 = v8[4];
        v3[3] = v11;
        v13 = v8[5];
        v3[4] = v12;
        v14 = v8[6];
        v3[5] = v13;
        v15 = v8[7];
        v8 += 8;
        v3[6] = v14;
        v3 += 8;
        *(v3 - 1) = v15;
        --v7;
      }
      while ( v7 );
      v16 = *v8;
      v17 = *((_QWORD *)v8 + 2);
      *v3 = v16;
      *((_QWORD *)v3 + 2) = v17;
    }
    else
    {
      return (unsigned int)v6;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
