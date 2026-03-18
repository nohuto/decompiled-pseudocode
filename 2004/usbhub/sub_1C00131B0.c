/*
 * XREFs of sub_1C00131B0 @ 0x1C00131B0
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C000B870 @ 0x1C000B870 (sub_1C000B870.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C00180B8 @ 0x1C00180B8 (sub_1C00180B8.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C001CA78 @ 0x1C001CA78 (sub_1C001CA78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C00360C8 @ 0x1C00360C8 (sub_1C00360C8.c)
 */

__int64 sub_1C00131B0(__int64 a1, __int64 a2, char a3, ...)
{
  int v3; // ebx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 result; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // edx
  char v25; // r10
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-20h]
  KIRQL NewIrql; // [rsp+88h] [rbp+48h] BYREF
  __int64 v30; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v32; // [rsp+A0h] [rbp+60h]
  __int64 v33; // [rsp+A8h] [rbp+68h]
  va_list va1; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v3 = v30;
  NewIrql = 0;
  sub_1C000F050(a1);
  v7 = sub_1C001AE80(a1, a2, 15, (unsigned int)&NewIrql, v3);
  v8 = v7;
  if ( !*(_BYTE *)(a2 + 2839) && !*(_BYTE *)(a2 + 2840) && (unsigned int)(*(_DWORD *)(a2 + 400) - 1) > 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    sub_1C000FD80(a1, 512, 825585712, v7, v9);
    sub_1C000FD80(a1, v10, 825585713, a2, *(unsigned __int16 *)(a2 + 4));
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(
        DeviceObject->DeviceExtension,
        (unsigned int)&unk_1C0062098,
        v11,
        27,
        (__int64)&unk_1C0062098,
        *(_WORD *)(a2 + 4),
        a3);
    sub_1C000FD80(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 10;
    KeResetEvent((PRKEVENT)(a2 + 824));
    if ( (int)v8 > 13 )
    {
      if ( (_DWORD)v8 == 14 )
        goto LABEL_21;
      if ( (int)v8 > 18 && (_DWORD)v8 != 20 )
      {
LABEL_43:
        v26 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v26 + a2 + 1384) = 19;
LABEL_44:
        LOBYTE(v12) = NewIrql;
        result = sub_1C0034EEC(a1, a2, v12, 0LL);
LABEL_16:
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            return sub_1C00360C8(DeviceObject->DeviceExtension, v20, v21, 32, v28, v9, v8);
        }
        return result;
      }
    }
    else if ( (int)v8 < 5 && (_DWORD)v8 != 1 )
    {
      switch ( (_DWORD)v8 )
      {
        case 2:
          sub_1C000FD80(a1, 512, 825585714, v8, *(unsigned __int16 *)(a2 + 4));
          v13 = v33;
          if ( (int)sub_1C000B870(a1, v9, (unsigned int *)va, v32, v33) >= 0 )
          {
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
              sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 28, (__int64)&unk_1C0062098, v9);
            sub_1C000FD80(a1, 8, 825585715, a2, v9);
            v14 = *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 4;
            *(_DWORD *)(32 * v14 + a2 + 1384) = 4;
            sub_1C000FD80(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
            v15 = *(_DWORD *)(a2 + 12);
            v16 = NewIrql;
            v17 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 448) = 0;
            *(_DWORD *)(v17 + a2 + 1384) = v15;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v16);
            result = sub_1C001CA78(v18, a2);
            goto LABEL_16;
          }
          sub_1C000FD80(a1, 8, 825585716, a2, v9);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
            sub_1C002E354(DeviceObject->DeviceExtension, v24, 1, 29, (__int64)&unk_1C0062098, v9, v25);
LABEL_25:
          sub_1C001518C(a1, v13, 3221225473LL);
          if ( (unsigned int)sub_1C00180B8(a1, a2) )
            sub_1C0034DE4(a1, a2, 3LL);
          goto LABEL_44;
        case 3:
          sub_1C000FD80(a1, 8, 825585718, a2, v9);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
            sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 31, (__int64)&unk_1C0062098, v9);
          v22 = v33;
          if ( (int)sub_1C000B870(a1, v9, (unsigned int *)va, v32, v33) < 0 )
          {
            sub_1C001518C(a1, v22, 3221225473LL);
            if ( (unsigned int)sub_1C00180B8(a1, a2) )
              sub_1C0034DE4(a1, a2, 3LL);
          }
          v23 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v23 + a2 + 1384) = 14;
          goto LABEL_44;
        case 4:
LABEL_21:
          sub_1C000FD80(a1, 8, 825585717, a2, v9);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
            sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 30, (__int64)&unk_1C0062098, v9);
          v13 = v33;
          if ( (int)sub_1C000B870(a1, v9, (unsigned int *)va, v32, v33) >= 0 )
            goto LABEL_44;
          goto LABEL_25;
      }
      goto LABEL_43;
    }
    sub_1C000FD80(a1, 512, 825585713, v8, *(unsigned __int16 *)(a2 + 4));
    sub_1C001518C(a1, v33, 3221225473LL);
    if ( (unsigned int)sub_1C00180B8(a1, a2) )
      sub_1C0034DE4(a1, a2, 3LL);
    goto LABEL_44;
  }
  sub_1C001518C(a1, v33, 3221225473LL);
  if ( (unsigned int)sub_1C00180B8(a1, a2) )
    sub_1C0034DE4(a1, a2, 3LL);
  LOBYTE(v27) = NewIrql;
  return sub_1C0034EEC(a1, a2, v27, 0LL);
}
