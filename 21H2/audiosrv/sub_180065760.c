/*
 * XREFs of sub_180065760 @ 0x180065760
 * Callers:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_180065874 @ 0x180065874 (sub_180065874.c)
 *     sub_180065A0C @ 0x180065A0C (sub_180065A0C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B5EE4 @ 0x1800B5EE4 (sub_1800B5EE4.c)
 */

__int64 __fastcall sub_180065760(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  _WORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  _WORD *v13; // rax
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v6 = sub_180065874(8u, 0x78uLL);
  v8 = (_WORD *)v6;
  if ( v6 )
  {
    v15[0] = 0LL;
    if ( (v6 & 3) != 0 )
      sub_1800B5EE4();
    v9 = sub_180065A0C(v15, a1, v7, v6 >> 2);
    v10 = v9;
    if ( v9 < 0 )
    {
      sub_18004BD84((int)retaddr, 325, (int)"wil", v9);
    }
    else
    {
      *(_DWORD *)v8 = 1;
      *((_QWORD *)v8 + 1) = *a2;
      v11 = *(_QWORD *)&v15[0];
      *a2 = 0LL;
      *(_QWORD *)&v15[0] = 0LL;
      *((_QWORD *)v8 + 2) = v11;
      v12 = *((_QWORD *)&v15[0] + 1);
      *((_QWORD *)&v15[0] + 1) = 0LL;
      *((_QWORD *)v8 + 3) = v12;
      memset(v8 + 16, 0, 0x58uLL);
      v8[16] = 88;
      *((_DWORD *)v8 + 9) = 1;
      memset(v8 + 20, 0, 0x50uLL);
      v13 = v8;
      v8 = 0LL;
      v10 = 0;
      *a3 = v13;
    }
    sub_18005262C((void **)v15 + 1);
    sub_18005262C((void **)v15);
    if ( v8 )
      sub_180033A70(v8);
  }
  else
  {
    v10 = -2147024882;
    sub_18004BD84((int)retaddr, 322, (int)"wil", -2147024882);
  }
  return v10;
}
