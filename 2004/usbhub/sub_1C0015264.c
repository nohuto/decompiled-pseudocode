/*
 * XREFs of sub_1C0015264 @ 0x1C0015264
 * Callers:
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 * Callees:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C0015264(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  _DWORD *v12; // rax
  int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // rcx

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 14, (__int64)&unk_1C0062110);
  v6 = a2 - 1;
  if ( !v6 )
  {
    sub_1C001CC84(a3, 4LL);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_16;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v14 = sub_1C000F050(*(_QWORD *)(a3 + 8));
    v15 = 8LL * (unsigned int)v14[864];
    v14[781] = 4;
    v14[v15 + 867] = 4;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *((_QWORD *)v14 + 399) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 782), 16, 1, 0);
    return (unsigned int)-1073741823;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 2 )
    {
LABEL_16:
      sub_1C001CC84(a3, 4LL);
      return (unsigned int)-1073741823;
    }
    sub_1C001CC84(a3, 5LL);
    sub_1C000C0F0((__int64)a1, a3, 1);
    return 0;
  }
  v12 = sub_1C000F050(*(_QWORD *)(a3 + 8));
  v12[781] = 5;
  v12[8 * v12[864] + 867] = 5;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *((_QWORD *)v12 + 399) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 782), 16, 1, 0);
  sub_1C0012400((__int64)a1, 0LL, 0LL, &stru_1C0061E68);
  v13 = sub_1C0013558(a1, a3);
  if ( v13 < 0 )
    sub_1C0012810(*(struct _DEVICE_OBJECT **)(a3 + 8), 9u, a3);
  return (unsigned int)v13;
}
