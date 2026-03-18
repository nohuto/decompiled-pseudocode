/*
 * XREFs of sub_1C0012810 @ 0x1C0012810
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C0011530 @ 0x1C0011530 (sub_1C0011530.c)
 *     sub_1C00126A8 @ 0x1C00126A8 (sub_1C00126A8.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C0014D80 @ 0x1C0014D80 (sub_1C0014D80.c)
 *     sub_1C0015264 @ 0x1C0015264 (sub_1C0015264.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001C31C @ 0x1C001C31C (sub_1C001C31C.c)
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0042AE0 @ 0x1C0042AE0 (sub_1C0042AE0.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 *     sub_1C0059D60 @ 0x1C0059D60 (sub_1C0059D60.c)
 * Callees:
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C00140B0 @ 0x1C00140B0 (sub_1C00140B0.c)
 *     sub_1C0015264 @ 0x1C0015264 (sub_1C0015264.c)
 *     sub_1C0015500 @ 0x1C0015500 (sub_1C0015500.c)
 *     sub_1C0015704 @ 0x1C0015704 (sub_1C0015704.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005A12C @ 0x1C005A12C (sub_1C005A12C.c)
 *     sub_1C005A1A8 @ 0x1C005A1A8 (sub_1C005A1A8.c)
 */

__int64 __fastcall sub_1C0012810(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  char *DeviceExtension; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rbx

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 10, (__int64)&unk_1C0062110, a2);
  v6 = *(_QWORD *)(a3 + 8);
  if ( !v6 )
    goto LABEL_63;
  v7 = *(_QWORD *)(v6 + 64);
  if ( !v7 )
    sub_1C002DC78(v6, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    sub_1C002DC78(v6, *(_QWORD *)(v6 + 64));
  KeWaitForSingleObject((PVOID)(v7 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v7 + 3192) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v7 + 3456);
  v9 = 32LL * (v8 & 7);
  if ( *(_DWORD *)(v9 + v7 + 3460) != a2
    || (v11 = *(unsigned int *)(v7 + 3124), *(_DWORD *)(v9 + v7 + 3464) != (_DWORD)v11) )
  {
    v10 = ((_BYTE)v8 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v10;
    v10 *= 32LL;
    *(_DWORD *)(v10 + v7 + 3460) = a2;
    *(_DWORD *)(v10 + v7 + 3464) = *(_DWORD *)(v7 + 3124);
    v11 = *(unsigned int *)(v7 + 3124);
  }
  if ( (_DWORD)v11 != 1 )
  {
    switch ( (_DWORD)v11 )
    {
      case 2:
        return (unsigned int)sub_1C0015704(a1, a2, a3);
      case 3:
        return (unsigned int)sub_1C005A1A8(a1, a2, a3);
      case 4:
        return (unsigned int)sub_1C0015264(a1, a2, a3);
      case 5:
        return (unsigned int)sub_1C00140B0(a1, a2, a3);
      case 6:
        return (unsigned int)sub_1C005A12C(a1, v11, a3);
      default:
        v16 = -1073741823;
        sub_1C001CC84(a3, v11);
        break;
    }
    return v16;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 11, (__int64)&unk_1C0062110);
  if ( !a1 )
    goto LABEL_63;
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  if ( a2 == 6 )
  {
    DeviceExtension[3408] = 1;
    v13 = *(_QWORD *)(a3 + 8);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 64);
      if ( !v14 )
        sub_1C002DC78(*(_QWORD *)(a3 + 8), 0LL);
      if ( *(_DWORD *)v14 != 541218120 )
        sub_1C002DC78(*(_QWORD *)(a3 + 8), *(_QWORD *)(v13 + 64));
      v15 = *(unsigned int *)(v14 + 3456);
      *(_DWORD *)(v14 + 3124) = 1;
      *(_DWORD *)(32 * v15 + v14 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v14 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 3128), 16, 1, 0);
      return 0;
    }
LABEL_63:
    sub_1C002DC78(0LL, 0LL);
  }
  if ( a2 == 1 )
  {
    if ( DeviceExtension[3408]
      || *((char **)DeviceExtension + 388) != DeviceExtension + 3104
      || *((_DWORD *)DeviceExtension + 780)
      || *((char **)DeviceExtension + 603) != DeviceExtension + 4824
      || (*((_DWORD *)DeviceExtension + 640) & 0x10) != 0
      || *((int *)DeviceExtension + 685) > 1
      || (int)sub_1C0015500(a1) < 0 )
    {
      v16 = -1073741823;
    }
    else
    {
      v16 = 0;
    }
    DeviceExtension[3408] = 0;
    if ( (v16 & 0x80000000) != 0 )
    {
      v20 = sub_1C000F050(*(_QWORD *)(a3 + 8));
      v21 = 8LL * (unsigned int)v20[864];
      v20[781] = 1;
      v20[v21 + 867] = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v20 + 399) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v20 + 782), 16, 1, 0);
      KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
      if ( !*((_QWORD *)DeviceExtension + 414)
        && !*((_QWORD *)DeviceExtension + 413)
        && !*((_QWORD *)DeviceExtension + 412) )
      {
        v22 = sub_1C000F050((__int64)a1);
        sub_1C0011C40(
          (__int64)a1,
          (__int64)(DeviceExtension + 3200),
          *((_DWORD *)DeviceExtension + 1314),
          0,
          (__int64)(v22 + 478),
          0x77485353u);
      }
      KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
    }
    else
    {
      KeResetEvent((PRKEVENT)DeviceExtension + 141);
      DeviceExtension[3416] = 0;
      v18 = sub_1C000F050(*(_QWORD *)(a3 + 8));
      v19 = 8LL * (unsigned int)v18[864];
      v18[781] = 2;
      v18[v19 + 867] = 2;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v18 + 399) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 782), 16, 1, 0);
      sub_1C000D970(a1, a3);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 4u:
        v23 = *((_QWORD *)DeviceExtension + 413);
        sub_1C001CC84(a3, 1LL);
        v16 = v23 != 0 ? 0xC0000001 : 0;
        break;
      case 5u:
        sub_1C001CC84(a3, 1LL);
        return 0;
      default:
        sub_1C001CC84(a3, 1LL);
        v16 = -1073741823;
        break;
    }
  }
  return v16;
}
