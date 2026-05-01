/*
 * XREFs of sub_180041114 @ 0x180041114
 * Callers:
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_1800411AC @ 0x1800411AC (sub_1800411AC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006BA30 @ 0x18006BA30 (sub_18006BA30.c)
 */

__int64 __fastcall sub_180041114(__int64 a1)
{
  unsigned int v1; // ebx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int v11; // eax
  __int16 v12; // dx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD *v17; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-B8h] BYREF
  int *v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+74h] [rbp-8Ch]
  _OWORD SystemInformation[10]; // [rsp+80h] [rbp-80h] BYREF

  if ( *(_DWORD *)(a1 + 920) >= *(_DWORD *)(a1 + 916) && *(_DWORD *)(a1 + 912) == -1 )
  {
    v1 = sub_1800411AC(0LL);
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v22 = 0;
      v20 = (int *)&v16;
      v16 = v1;
      v21 = 4;
      sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009C6B3, 0LL, 0LL, 3u, &v19);
    }
  }
  else
  {
    v3 = *(_OWORD *)(a1 + 264);
    SystemInformation[0] = *(_OWORD *)(a1 + 248);
    v4 = *(_OWORD *)(a1 + 280);
    SystemInformation[1] = v3;
    v5 = *(_OWORD *)(a1 + 296);
    SystemInformation[2] = v4;
    v6 = *(_OWORD *)(a1 + 312);
    SystemInformation[3] = v5;
    v7 = *(_OWORD *)(a1 + 328);
    SystemInformation[4] = v6;
    v8 = *(_OWORD *)(a1 + 344);
    SystemInformation[5] = v7;
    v9 = *(_OWORD *)(a1 + 376);
    SystemInformation[6] = v8;
    SystemInformation[7] = *(_OWORD *)(a1 + 360);
    v10 = *(_OWORD *)(a1 + 392);
    v11 = *(_DWORD *)(a1 + 912);
    SystemInformation[8] = v9;
    SystemInformation[9] = v10;
    if ( v11 != -1 )
      *((_QWORD *)SystemInformation + ((unsigned __int64)(unsigned int)(v11 - 256) >> 16)) &= ~(1LL << v11);
    v1 = sub_1800411AC(SystemInformation);
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v16 = v1;
      v17 = SystemInformation;
      v18 = v12 + 19;
      sub_18006BA30(v13, (unsigned int)&unk_18009C482, v14, v15, (__int64)&v16, (__int64)&v17);
    }
  }
  return v1;
}
