/*
 * XREFs of sub_180064F54 @ 0x180064F54
 * Callers:
 *     sub_180064288 @ 0x180064288 (sub_180064288.c)
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180044BCC @ 0x180044BCC (sub_180044BCC.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 */

__int64 *__fastcall sub_180064F54(__int64 a1)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  __int64 *v4; // rax
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 *result; // rax
  _DWORD *v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 **v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+64h] [rbp-9Ch]
  _DWORD v17[1024]; // [rsp+70h] [rbp-90h] BYREF

  memset(&v17[1], 0, 0xFFCuLL);
  v2 = *(__int64 **)(a1 + 80);
  v3 = 0;
  v17[0] = 1;
  v4 = (__int64 *)*v2;
  v5 = 8;
  v12 = (__int64 *)*v2;
  while ( v4 != v2 )
  {
    v10 = v4 + 4;
    if ( *((_DWORD *)v4 + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( (unsigned __int64)v4[7] >= 8 )
        v10 = (__int64 *)*v10;
      v11 = v5;
      v5 += 112;
      *(_OWORD *)((char *)v17 + v11) = *(_OWORD *)v10;
      *(_OWORD *)((char *)&v17[4] + v11) = *((_OWORD *)v10 + 1);
      *(_OWORD *)((char *)&v17[8] + v11) = *((_OWORD *)v10 + 2);
      *(_OWORD *)((char *)&v17[12] + v11) = *((_OWORD *)v10 + 3);
      *(_OWORD *)((char *)&v17[16] + v11) = *((_OWORD *)v10 + 4);
      *(_OWORD *)((char *)&v17[20] + v11) = *((_OWORD *)v10 + 5);
      *(_OWORD *)((char *)&v17[24] + v11) = *((_OWORD *)v10 + 6);
    }
    sub_180044BCC(&v12);
    v4 = v12;
  }
  v17[1] = v3;
  v6 = RtlPublishWnfStateData(0x2821B2CA3BC3075LL, 0LL, v17, 4096LL, 0LL);
  result = sub_180008448(v7, sub_1800B6240);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 4u )
  {
    v16 = 0;
    v14 = &v12;
    LODWORD(v12) = v6;
    v15 = 4;
    return (__int64 *)sub_1800521E8((__int64)v9, (unsigned __int8 *)&unk_180168CC4, 0LL, 0LL, 3, (__int64)v13);
  }
  return result;
}
