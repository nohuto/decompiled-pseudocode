/*
 * XREFs of sub_180072B40 @ 0x180072B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000F818 @ 0x18000F818 (sub_18000F818.c)
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_18000FFAC @ 0x18000FFAC (sub_18000FFAC.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063CD4 @ 0x180063CD4 (sub_180063CD4.c)
 *     sub_18007254C @ 0x18007254C (sub_18007254C.c)
 */

__int64 __fastcall sub_180072B40(__int64 a1, int *a2, __int64 a3)
{
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // ebx
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r11d
  unsigned int v18; // edx
  int v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  int v27; // [rsp+8Ch] [rbp-Dh]
  __int64 *v28; // [rsp+90h] [rbp-9h]
  int v29; // [rsp+98h] [rbp-1h]
  int v30; // [rsp+9Ch] [rbp+3h]
  int *v31; // [rsp+A0h] [rbp+7h]
  int v32; // [rsp+A8h] [rbp+Fh]
  int v33; // [rsp+ACh] [rbp+13h]
  __int64 *v34; // [rsp+B0h] [rbp+17h]
  int v35; // [rsp+B8h] [rbp+1Fh]
  int v36; // [rsp+BCh] [rbp+23h]

  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) + 508LL);
  if ( !a3 || (v21 = 96LL, sub_18000F818(a3, &v21)) )
  {
    sub_18001E380();
    if ( *(_DWORD *)(a1 + 1280) )
    {
      if ( !a2 || sub_180063CD4(*a2, v6) )
      {
        if ( a3 )
        {
          v8 = *(_DWORD *)(a1 + 1380);
          v9 = *(_DWORD *)(a3 + 48);
          if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
          {
            v11 = *(_QWORD *)a3;
            v36 = 0;
            v33 = 0;
            v30 = 0;
            v27 = 0;
            v23 = v11;
            v22 = *(_QWORD *)(a1 + 1752);
            v34 = &v23;
            v31 = &v20;
            v28 = &v21;
            v25 = &v22;
            v32 = v10;
            v29 = v10;
            v20 = v9;
            LODWORD(v21) = v8;
            v35 = 8;
            v26 = 8;
            sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009D159, 0LL, 0LL, 6u, &v24);
          }
          v12 = *(_QWORD *)a3;
          if ( (*(_QWORD *)a3 & 0x20) != 0 )
          {
            v13 = v9 & 3;
            if ( (v8 & 3) != v13 )
            {
              *(_DWORD *)(a1 + 1380) &= 0xFFFFFFFC;
              *(_DWORD *)(a1 + 1380) |= v13;
              v12 = *(_QWORD *)a3;
            }
          }
          if ( (v12 & 0x40) != 0 && (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 8) != 0 )
          {
            *(_DWORD *)(a1 + 1380) &= ~8u;
            *(_DWORD *)(a1 + 1380) |= v9 & 8;
          }
        }
        if ( a2 && *a2 != *(_DWORD *)(a1 + 1352) )
        {
          v14 = *a2;
          if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
          {
            v22 = *(_QWORD *)(a1 + 1752);
            LODWORD(v21) = v16;
            v20 = v17;
            sub_18007254C(
              (__int64)&dword_1800B31E0,
              byte_18009D643,
              v15,
              v16,
              (__int64)&v22,
              (__int64)&v20,
              (__int64)&v21);
            v14 = *a2;
          }
          *(_DWORD *)(a1 + 1352) = v14;
          if ( (*(_WORD *)a2 & 0x100) != 0 )
            *(_DWORD *)(a1 + 1332) &= ~8u;
          sub_18000FFAC(*(_QWORD *)(a1 + 24));
          v18 = 2;
          if ( !*(_BYTE *)(a1 + 12) )
            v18 = 1;
          sub_18000FF28(*(_QWORD **)(a1 + 1320), v18);
        }
        if ( *(_BYTE *)(a1 + 12) )
          sub_180007A80(*(_QWORD **)(a1 + 1320));
        v7 = 0x10000000;
      }
      else
      {
        v7 = -805306129;
      }
    }
    else
    {
      v7 = -805305819;
    }
    sub_18000F390();
  }
  else
  {
    return (unsigned int)-805306128;
  }
  return v7;
}
