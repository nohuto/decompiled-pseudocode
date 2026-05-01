/*
 * XREFs of sub_180087048 @ 0x180087048
 * Callers:
 *     sub_1800867B4 @ 0x1800867B4 (sub_1800867B4.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     GetTickCount @ 0x180045422 (GetTickCount.c)
 *     CloseHandle @ 0x180045458 (CloseHandle.c)
 *     WaitForMultipleObjects @ 0x180046150 (WaitForMultipleObjects.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180086A68 @ 0x180086A68 (sub_180086A68.c)
 *     sub_180086D30 @ 0x180086D30 (sub_180086D30.c)
 *     sub_180086FC4 @ 0x180086FC4 (sub_180086FC4.c)
 *     sub_1800872E8 @ 0x1800872E8 (sub_1800872E8.c)
 */

__int64 __fastcall sub_180087048(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v8; // r14
  int v9; // ebx
  DWORD v10; // edx
  __int64 v11; // rcx
  int v12; // r9d
  _QWORD *v13; // rsi
  int v14; // r8d
  DWORD v15; // ecx
  __int64 v16; // rax
  HANDLE Handles[3]; // [rsp+38h] [rbp-C8h] BYREF
  HWND v19[176]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[176]; // [rsp+5D0h] [rbp+4D0h] BYREF

  v5 = a3;
  memset(v20, 0, 0x578uLL);
  memset(v19, 0, 0x578uLL);
  if ( !a2 || !(_DWORD)v5 || (a5 & 0xFFF80000) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_37;
  }
  v8 = 16LL;
  if ( (unsigned int)v5 > 0x10 )
  {
    v9 = -1073740757;
    goto LABEL_37;
  }
  memset(v20, 0, 0x578uLL);
  LODWORD(v20[0]) = 91751760;
  LODWORD(v20[5]) = 0x10000000;
  LODWORD(v20[14]) = a4;
  v20[41] = 0LL;
  HIDWORD(v20[172]) = GetTickCount();
  memcpy(&v20[6], a2, 4 * v5);
  if ( (a5 & 2) != 0 )
    LOWORD(v20[107]) = 0;
  if ( !(unsigned int)sub_180086FC4(&v20[42], v10) )
    LOWORD(v20[42]) = 0;
  LODWORD(v20[172]) = a5;
  if ( (a5 & 0x4000) != 0 )
    LODWORD(v20[33]) = -1073741822;
  else
    sub_180086A68(&v20[15], &v20[31], (__m128i *)&v20[33], v12, (int *)&v20[6]);
  v9 = sub_180086D30(v11, (__int64)v20, v19);
  v13 = &v20[15];
  do
  {
    if ( *v13 )
      PssNtFreeSnapshot();
    ++v13;
    --v8;
  }
  while ( v8 );
  if ( v9 >= 0 )
  {
    if ( v9 == 258 )
    {
      v9 = -1073741248;
      goto LABEL_37;
    }
    v14 = (int)v19[5];
    switch ( LODWORD(v19[5]) )
    {
      case 0x10000001:
        goto LABEL_23;
      case 0x10000002:
        v9 = HIDWORD(v19[5]);
        if ( SHIDWORD(v19[5]) < 0 )
          goto LABEL_37;
        break;
      case 0x10000005:
LABEL_23:
        v15 = 0;
        if ( v19[173] )
        {
          Handles[0] = v19[173];
          v15 = 1;
        }
        if ( v19[174] )
        {
          v16 = v15++;
          Handles[v16] = v19[174];
        }
        if ( (a5 & 0x20) != 0 && v15 )
        {
          WaitForMultipleObjects(v15, Handles, 0, 0xFFFFFFFF);
          v14 = (int)v19[5];
        }
        if ( v19[6] && v14 == 268435461 )
          sub_1800872E8(v19[6]);
        v9 = 0;
        goto LABEL_37;
    }
    v9 = -1073741823;
  }
LABEL_37:
  if ( v19[173] )
    CloseHandle(v19[173]);
  if ( v19[174] )
    CloseHandle(v19[174]);
  return (unsigned int)v9;
}
