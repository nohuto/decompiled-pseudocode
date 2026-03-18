/*
 * XREFs of sub_1C00298F8 @ 0x1C00298F8
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 *     sub_1C002D328 @ 0x1C002D328 (sub_1C002D328.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 *     sub_1C002BE50 @ 0x1C002BE50 (sub_1C002BE50.c)
 *     sub_1C002C5C0 @ 0x1C002C5C0 (sub_1C002C5C0.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C00318A8 @ 0x1C00318A8 (sub_1C00318A8.c)
 *     sub_1C00319B4 @ 0x1C00319B4 (sub_1C00319B4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053050 @ 0x1C0053050 (sub_1C0053050.c)
 */

__int64 __fastcall sub_1C00298F8(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rbp
  unsigned __int16 *v5; // rbx
  unsigned int v6; // r9d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rbp
  NTSTATUS v17; // r14d
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  P = 0LL;
  v21 = 0;
  v2 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 26, (__int64)&unk_1C0062088);
  v3 = (int)sub_1C002BE50(a1, &P);
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C000FD80(a1, 8, 1667655729, v3, 0LL);
    return (unsigned int)v3;
  }
  v5 = (unsigned __int16 *)P;
  if ( !P )
  {
    sub_1C000FD80(a1, 8, 1667655730, -1073741670LL, 0LL);
    return v6;
  }
  if ( !(unsigned __int8)sub_1C0053050(P, *((unsigned __int16 *)P + 1), &v21, 0LL) )
  {
    sub_1C004A608(a1, 0, 34, (_DWORD)v5, v5[1], -1073741823, v21, (__int64)aHubC, 4345, 0);
    sub_1C000FD80(a1, 8, 1667655731, v3, 0LL);
LABEL_10:
    ExFreePoolWithTag(v5, 0);
    return 3221225473LL;
  }
  if ( (*((_BYTE *)v5 + 7) & 0x40) != 0 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 27, (__int64)&unk_1C0062088);
    v7 = 500;
  }
  else
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 28, (__int64)&unk_1C0062088);
    v7 = 100;
  }
  v2[760] = v7;
  v8 = sub_1C002C5C0(a1);
  v2[758] = v8;
  if ( v8 == 100 )
    *((_BYTE *)v5 + 8) = -6;
  v9 = v2[640];
  if ( (v9 & 0x40) != 0 )
  {
    v2[640] = v9 & 0xFFFEFFFF;
    v10 = sub_1C00319B4(a1, (_DWORD)v5, (_DWORD)v5, -1, v18, 9, -1, 2);
    if ( v10 )
    {
      v12 = v2[640];
      v2[640] = v12 | 0x10000;
      if ( (v12 & 0x200000) == 0 )
      {
        v2[640] = v12 | 0x10080;
        goto LABEL_35;
      }
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 29, (__int64)&unk_1C0062088);
    }
    v2[640] &= ~0x80u;
    v10 = sub_1C00319B4(a1, (_DWORD)v5, (_DWORD)v5, -1, v19, 9, -1, 1);
    if ( v10 )
      goto LABEL_37;
    v13 = v2[640];
    if ( (v13 & 1) != 0 )
      v2[640] = v13 & 0xFFFFFFBF;
    v10 = sub_1C00319B4(a1, (_DWORD)v5, (_DWORD)v5, -1, v20, 9, -1, 0);
  }
  else
  {
    v10 = sub_1C00319B4(a1, (_DWORD)v5, (_DWORD)v5, -1, v18, 9, -1, -1);
  }
LABEL_35:
  if ( !v10 )
  {
    sub_1C004A608(a1, 0, 18, (_DWORD)v5, v5[1], -1073741823, 0, (__int64)aHubC, 4478, 0);
    sub_1C000FD80(a1, 8, 1667655732, v5[1], (__int64)v5);
    goto LABEL_10;
  }
LABEL_37:
  v14 = *(unsigned __int8 *)(v10 + 5);
  if ( (_BYTE)v14 != 9 )
  {
    sub_1C000FD80(a1, 8, 1667655733, *(unsigned __int8 *)(v10 + 5), (__int64)v5);
    if ( !v5 )
      return 3221225473LL;
    goto LABEL_10;
  }
  v15 = sub_1C00318A8(v14, v5, v11, v10);
  v16 = v15;
  if ( v15 )
  {
    v17 = sub_1C0015F10(a1, 0x220003u, v15, 0LL);
    sub_1C000FD80(a1, 8, 1667655735, 0LL, v17);
    if ( v17 >= 0 )
    {
      *(_OWORD *)(v2 + 658) = *(_OWORD *)(v16 + 64);
      *((_QWORD *)v2 + 331) = *(_QWORD *)(v16 + 80);
      *((_QWORD *)v2 + 328) = *(_QWORD *)(v16 + 32);
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v17;
  }
  else
  {
    sub_1C000FD80(a1, 8, 1667655734, 0LL, 0LL);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return 3221225626LL;
  }
}
