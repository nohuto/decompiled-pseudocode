/*
 * XREFs of sub_18010ED94 @ 0x18010ED94
 * Callers:
 *     sub_18010FF20 @ 0x18010FF20 (sub_18010FF20.c)
 *     sub_180110050 @ 0x180110050 (sub_180110050.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 *     sub_1801133F8 @ 0x1801133F8 (sub_1801133F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010ED94(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // ebx
  char v8; // di
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+40h] [rbp-C8h]
  _DWORD v18[72]; // [rsp+48h] [rbp-C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !a2 )
  {
    v7 = 4;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v5 = v4 - 4;
  if ( !v5 )
  {
    v7 = 5;
LABEL_10:
    *(_DWORD *)(a1 + 76) = v7;
    goto LABEL_11;
  }
  if ( v5 != 2 )
  {
    v6 = -2147024809;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 76) = 2;
  v7 = 2;
LABEL_11:
  memset(&v18[5], 0, 0x100uLL);
  v18[0] = 2;
  v18[3] = v7;
  v18[2] = 3;
  v8 = 1;
  v18[4] = 1;
  v18[1] = 2;
  v16 = a1;
  LOBYTE(v17) = 1;
  v9 = *(_QWORD *)(a1 + 152);
  v10 = *(_QWORD *)(a1 + 136);
  if ( v9 )
  {
    v11 = sub_1801133F8(qword_18019E608, v10, v9, v18);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 370;
LABEL_16:
      sub_18004BD84(
        (int)retaddr,
        v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        v11);
      goto LABEL_18;
    }
  }
  else
  {
    v11 = sub_1801112AC(qword_18019E608, v10, v18);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 374;
      goto LABEL_16;
    }
  }
  v6 = 0;
  v8 = 0;
LABEL_18:
  if ( v8 )
  {
    sub_180112F8C(qword_18019E608, *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 152));
    *(_QWORD *)(a1 + 152) = 0LL;
  }
LABEL_20:
  if ( (_BYTE)v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
