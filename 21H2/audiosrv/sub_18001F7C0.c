/*
 * XREFs of sub_18001F7C0 @ 0x18001F7C0
 * Callers:
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     sub_180065320 @ 0x180065320 (sub_180065320.c)
 *     sub_180065E24 @ 0x180065E24 (sub_180065E24.c)
 *     sub_180119090 @ 0x180119090 (sub_180119090.c)
 *     sub_18011FF30 @ 0x18011FF30 (sub_18011FF30.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18001F7C0(__int16 *a1)
{
  int v1; // r11d
  int v2; // r10d
  int v3; // r9d
  int v4; // ebx
  unsigned __int16 v5; // dx
  __int16 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int16 v16; // ax

  if ( !a1 )
    return 0;
  v1 = (unsigned __int16)a1[1];
  if ( !(_WORD)v1 )
    return 0;
  v2 = *((_DWORD *)a1 + 1);
  if ( !v2 )
    return 0;
  v3 = *((_DWORD *)a1 + 2);
  if ( !v3 )
    return 0;
  v4 = (unsigned __int16)a1[6];
  if ( !(_WORD)v4 )
    return 0;
  v5 = a1[8];
  if ( v5 > 0x400u )
    return 0;
  v6 = *a1;
  if ( ((*a1 - 1) & 0xFFFD) == 0 )
  {
    if ( !v5
      && (a1[7] & 7) == 0
      && (unsigned __int16)v1 <= 2u
      && v3 == (v2 * (unsigned int)(unsigned __int16)a1[7] * v1) >> 3 )
    {
      goto LABEL_21;
    }
    return 0;
  }
  if ( v6 != -2 || v5 < 0x16u )
    return 0;
  v7 = 0x10000000000001LL - *((_QWORD *)a1 + 3);
  if ( *((_QWORD *)a1 + 3) == 0x10000000000001LL )
    v7 = 0x719B3800AA000080LL - *((_QWORD *)a1 + 4);
  if ( !v7 )
    goto LABEL_13;
  v15 = 0x10000000000003LL - *((_QWORD *)a1 + 3);
  if ( *((_QWORD *)a1 + 3) == 0x10000000000003LL )
    v15 = 0x719B3800AA000080LL - *((_QWORD *)a1 + 4);
  if ( !v15 )
  {
LABEL_13:
    v8 = 0x10000000000001LL - *((_QWORD *)a1 + 3);
    if ( !v8 )
      v8 = 0x719B3800AA000080LL - *((_QWORD *)a1 + 4);
    if ( v8 )
    {
      v16 = a1[7];
      LOWORD(v9) = v16;
      if ( v16 != 32 && v16 != 64 )
        return 0;
    }
    else
    {
      v9 = (unsigned __int16)a1[7];
      if ( (((_WORD)v9 - 8) & 0xFFE7) != 0 )
        return 0;
    }
    v10 = a1[9];
    if ( v10
      && (unsigned __int16)v9 >= v10
      && v3 == (v2 * (unsigned int)(unsigned __int16)v9 * v1) >> 3
      && v4 == (unsigned __int16)v9 * v1 / 8 )
    {
      goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  if ( v6 != -2 )
    return 0;
  v11 = *((_QWORD *)a1 + 3) - 0x100CEA0000000CLL;
  if ( *((_QWORD *)a1 + 3) == 0x100CEA0000000CLL )
    v11 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
  if ( v11 )
  {
    v12 = *((_QWORD *)a1 + 3) - 0x100CEA0000010CLL;
    if ( *((_QWORD *)a1 + 3) == 0x100CEA0000010CLL )
      v12 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
    if ( v12 )
    {
      v13 = *((_QWORD *)a1 + 3) - 0x100CEA0000030CLL;
      if ( *((_QWORD *)a1 + 3) == 0x100CEA0000030CLL )
        v13 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
      if ( v13 )
        return 0;
    }
  }
  return v2 == 192000 && v1 == 8 && a1[7] == 16;
}
