/*
 * XREFs of sub_180101A90 @ 0x180101A90
 * Callers:
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 * Callees:
 *     sub_1800C2540 @ 0x1800C2540 (sub_1800C2540.c)
 *     sub_1801048F4 @ 0x1801048F4 (sub_1801048F4.c)
 *     sub_180104950 @ 0x180104950 (sub_180104950.c)
 */

_UNKNOWN **__fastcall sub_180101A90(__int64 a1, double a2, double a3)
{
  _UNKNOWN **result; // rax
  double v5; // xmm7_8
  __int64 v6; // rcx
  double v7; // xmm2_8
  __int64 v8; // rdx
  double v9; // xmm6_8
  double v10; // xmm6_8
  double v11; // xmm0_8
  double v12; // xmm6_8
  _QWORD *v13; // r9
  double v14; // xmm1_8
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a3 / a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    result = (_UNKNOWN **)sub_180104950(*((_QWORD *)off_18019C348 + 2));
  }
  v6 = *(_QWORD *)(a1 + 488);
  v7 = *(double *)(a1 + 480);
  v8 = v6 + 1;
  *(_QWORD *)(a1 + 488) = v6 + 1;
  if ( v6 < 0 )
  {
    result = (_UNKNOWN **)(v6 & 1 | ((unsigned __int64)v6 >> 1));
    v9 = (double)(int)result + (double)(int)result;
  }
  else
  {
    v9 = (double)(int)v6;
  }
  v10 = v9 * v7 + v5;
  if ( v8 < 0 )
  {
    result = (_UNKNOWN **)(v8 & 1 | ((unsigned __int64)v8 >> 1));
    v11 = (double)(int)result + (double)(int)result;
  }
  else
  {
    v11 = (double)(int)v8;
  }
  v12 = v10 / v11;
  v13 = off_18019C348;
  v14 = v7;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    result = (_UNKNOWN **)sub_1800C2540(*((_QWORD *)off_18019C348 + 2), 0x35u, (__int64)&unk_1801726D0, v12);
    v14 = *(double *)(a1 + 480);
    v13 = off_18019C348;
  }
  if ( fabs(v12 - v14) > 0.00001 )
  {
    if ( v13 != &off_18019C348 && (*((_DWORD *)v13 + 7) & 0x800000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      result = (_UNKNOWN **)sub_1801048F4(v13[2]);
    *(double *)(a1 + 480) = v12;
  }
  return result;
}
