/*
 * XREFs of sub_180041E9C @ 0x180041E9C
 * Callers:
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 * Callees:
 *     sub_180036CD0 @ 0x180036CD0 (sub_180036CD0.c)
 *     sub_180041F58 @ 0x180041F58 (sub_180041F58.c)
 */

__int64 __fastcall sub_180041E9C(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-20h]
  __int16 v16; // [rsp+34h] [rbp-1Ch]
  int v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+48h] [rbp-8h]
  __int16 v20; // [rsp+4Ch] [rbp-4h]
  __int64 v21; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = a1[4];
  v21 = 0LL;
  if ( v4 )
  {
    sub_180041F58(&v21);
    v2 = v21;
  }
  v6 = v2 + 72;
  if ( *(_DWORD *)(v2 + 72) != -1 )
  {
    v10 = 0LL;
    v11 = 3LL;
    do
    {
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_DWORD *)v6 = -1;
      v6 += 24LL;
      v12 = *(_QWORD *)(v2 + 1272) & ~(1LL << v10++);
      *(_QWORD *)(v2 + 1272) = v12;
      --v11;
    }
    while ( v11 );
  }
  v13 = 0;
  v16 = 1;
  v15 = 101;
  v19 = 101;
  v14 = -1LL;
  v17 = 2;
  v20 = 1;
  v18 = a2;
  sub_180036CD0(v2, &v13);
  sub_180036CD0(v7, &v17);
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[5] = a2;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
