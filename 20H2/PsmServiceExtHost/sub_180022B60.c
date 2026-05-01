/*
 * XREFs of sub_180022B60 @ 0x180022B60
 * Callers:
 *     sub_180022AFC @ 0x180022AFC (sub_180022AFC.c)
 * Callees:
 *     sub_180008EE4 @ 0x180008EE4 (sub_180008EE4.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022D04 @ 0x180022D04 (sub_180022D04.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180026694 @ 0x180026694 (sub_180026694.c)
 *     sub_180026B84 @ 0x180026B84 (sub_180026B84.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18003529C @ 0x18003529C (sub_18003529C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007F67C @ 0x18007F67C (sub_18007F67C.c)
 */

__int64 __fastcall sub_180022B60(__int64 a1, unsigned int *a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  int v8; // ebx
  ULONG v9; // eax
  __int64 v10; // rdx
  PVOID v11; // r14
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[544]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  P = 0LL;
  v14 = a3;
  v15 = 0LL;
  v8 = sub_180022D04(a1, a2, a4);
  if ( v8 == -1073741275 )
  {
    v8 = sub_18003529C(a1 - 1768, a2, &P);
    if ( v8 >= 0 )
    {
      v9 = RtlLengthSid(a2 + 116);
      sub_180026B84(a2, a2 + 116, v9, a2[133], v17);
      v8 = sub_180026694(a1, v17, &v15);
      if ( v8 < 0 )
      {
        v4 = v15;
      }
      else
      {
        sub_18001E380();
        v4 = v15;
        v8 = sub_180008EE4(a1 - 1768, (__int64)a2, v15, (int)P, v14, &v16);
        sub_18000F390();
        v11 = v16;
        if ( v8 >= 0 )
        {
          v8 = 0;
          *a4 = (char *)v16 + 64;
        }
        else if ( v8 == -1058275322 )
        {
          if ( a2[134] == 4 )
            v8 = -1058275325;
          else
            sub_18007F67C(v4, v10, 4864LL);
        }
        if ( v11 )
          sub_1800265B0(v11);
      }
    }
    if ( P )
      sub_180026650(P);
    if ( v4 )
      sub_1800274E0(v4);
  }
  return (unsigned int)v8;
}
