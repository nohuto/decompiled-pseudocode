/*
 * XREFs of sub_1800824A8 @ 0x1800824A8
 * Callers:
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_180076698 @ 0x180076698 (sub_180076698.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_180081DE4 @ 0x180081DE4 (sub_180081DE4.c)
 *     sub_180081EB0 @ 0x180081EB0 (sub_180081EB0.c)
 *     sub_180083178 @ 0x180083178 (sub_180083178.c)
 */

__int64 __fastcall sub_1800824A8(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // r15
  unsigned __int8 v10; // al
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  void *v24; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+30h] BYREF
  int v26; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0;
  v7 = sub_18003CF94(*a1 + 128LL, 0, 0LL);
  if ( v7 )
  {
    v9 = a1 + 3;
    do
    {
      v10 = sub_18007DF84((__int64)v7, a2, v8);
      v12 = v10;
      if ( v10 )
      {
        LODWORD(v13) = dword_1800B3218;
        if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
        {
          v21 = *(v7 - 4);
          v26 = *((_DWORD *)v7 + 140);
          v22 = (__int64)(v7 + 3);
          v25 = v12;
          sub_180081DE4(v14, byte_1800A2075, v11, v13, (void **)&v22, (__int64)&v26, (__int64)&v21, (__int64)&v25);
          LODWORD(v13) = dword_1800B3218;
        }
        if ( (_BYTE)v12 == 1
          && (a3 & 1) != 0
          && (unsigned int)v13 > 4
          && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
        {
          v23 = *(v7 - 4);
          LODWORD(v21) = *((_DWORD *)v7 + 140);
          v24 = v7 + 3;
          v22 = 0x1000000LL;
          v25 = a2;
          v26 = 1;
          sub_180081EB0(
            v15,
            byte_1800A21F7,
            v11,
            v16,
            &v24,
            (__int64)&v21,
            (__int64)&v23,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v22);
        }
        v6 = 1;
      }
      LOBYTE(v11) = v12;
      sub_180083178(v9, v7, v11);
      v7 = sub_18007BE20(v7);
    }
    while ( v7 );
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v26 = a2;
    LOBYTE(v25) = v6;
    sub_180076698(v17, byte_1800A20B9, v18, v19, (__int64)&v25, (__int64)&v26);
  }
  return v6;
}
