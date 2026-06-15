/*
 * XREFs of sub_18013EFEC @ 0x18013EFEC
 * Callers:
 *     sub_180140220 @ 0x180140220 (sub_180140220.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013EFEC(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  _OWORD *v3; // r8
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  _BYTE v16[1064]; // [rsp+20h] [rbp-428h] BYREF

  v2 = 0;
  v3 = v16;
  v4 = 8LL;
  do
  {
    v5 = a2[1];
    *v3 = *a2;
    v6 = a2[2];
    v3[1] = v5;
    v7 = a2[3];
    v3[2] = v6;
    v8 = a2[4];
    v3[3] = v7;
    v9 = a2[5];
    v3[4] = v8;
    v10 = a2[6];
    v3[5] = v9;
    v11 = a2[7];
    a2 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = *((_QWORD *)a2 + 2);
  v13 = *(_QWORD *)(a1 + 24);
  *v3 = *a2;
  *((_QWORD *)v3 + 2) = v12;
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _OWORD *, __int64))(*(_QWORD *)v13 + 48LL))(v13, v16, v3, 128LL);
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v2;
}
