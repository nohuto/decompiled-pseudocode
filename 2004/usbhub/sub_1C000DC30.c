/*
 * XREFs of sub_1C000DC30 @ 0x1C000DC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001D70 @ 0x1C0001D70 (sub_1C0001D70.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C00139C0 @ 0x1C00139C0 (sub_1C00139C0.c)
 *     sub_1C0015B1C @ 0x1C0015B1C (sub_1C0015B1C.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C0018750 @ 0x1C0018750 (sub_1C0018750.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 *     sub_1C001B724 @ 0x1C001B724 (sub_1C001B724.c)
 *     sub_1C001CE0C @ 0x1C001CE0C (sub_1C001CE0C.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C0031390 @ 0x1C0031390 (sub_1C0031390.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

void __fastcall sub_1C000DC30(PDEVICE_OBJECT DeviceObject, __int64 a2, void *a3)
{
  char v5; // di
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // rdi
  KIRQL v13; // al
  int v14; // ecx
  bool v15; // zf
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  KIRQL v20; // dl
  int v21; // r8d
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]

  v5 = 0;
  sub_1C001B180(DeviceObject);
  if ( (*(_DWORD *)(sub_1C000F050(DeviceObject) + 2560) & 4) != 0 )
  {
    v6 = sub_1C000F050(DeviceObject);
    if ( *(_QWORD *)(v6 + 4448) )
      v7 = (*(__int64 (__fastcall **)(_QWORD))(v6 + 4448))(*(_QWORD *)(v6 + 4232));
    else
      v7 = -1073741822;
  }
  else
  {
    v7 = -1073741810;
  }
  v8 = sub_1C000F050(DeviceObject);
  v9 = sub_1C000F050(DeviceObject);
  v10 = v9 + 1384;
  *(_QWORD *)(v9 + 1408) = KeGetCurrentThread();
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1349731376, v9 + 1384, v7);
  if ( v7 == -1073741810 )
    goto LABEL_33;
  if ( v7 != -1073741667 )
    v7 = sub_1C00139C0(DeviceObject);
  if ( v7 == -1073741810 || v7 == -1073741667 )
  {
LABEL_33:
    sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0062740, 0, v7);
    sub_1C00176F8(DeviceObject, v10, 114LL, 846671972LL);
    sub_1C001CE0C(DeviceObject, (unsigned int)v7, 213LL, 121LL);
    sub_1C0018750(DeviceObject, a3);
    sub_1C0018364(DeviceObject, v10);
    sub_1C0031390(DeviceObject, v10);
  }
  else
  {
    if ( (v7 & 0xC0000000) == 0xC0000000 )
    {
      sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0062760, 0, v7);
      v21 = *(_DWORD *)(v8 + 2560);
      v5 = 1;
      *(_DWORD *)(v8 + 4216) = 2;
      if ( (v21 & 0x10) != 0 )
      {
        v21 &= ~0x10u;
        *(_DWORD *)(v8 + 2560) = v21;
      }
      v22 = v21 & 1;
      v23 = 4046;
      if ( !v22 )
        v23 = 4051;
      sub_1C004A608((_DWORD)DeviceObject, 0, v22 + 45, 0, 0, v7, 0, (__int64)aFdopwrC, v23, 0);
      sub_1C000FD80((_DWORD)DeviceObject, 16, 1346720304, 0, v7);
    }
    v25 = *(int *)(v8 + 4216);
    if ( (v25 & 0xFFFFFFFD) != 0 )
    {
      sub_1C000FD80((_DWORD)DeviceObject, 16, 1450668653, 0, v25);
      v7 = sub_1C003BD90(DeviceObject);
      if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v7) )
        sub_1C004A608((_DWORD)DeviceObject, 0, 43, 0, 0, v7, 0, (__int64)aFdopwrC, 4094, 0);
    }
    else
    {
      sub_1C000FD80((_DWORD)DeviceObject, 16, 1449356388, 0, v25);
      v7 = sub_1C000CF10(DeviceObject, v10, v5);
      sub_1C000FD80((_DWORD)DeviceObject, 8, 1381192818, 0, 0LL);
      sub_1C001A550(DeviceObject, v10, (unsigned int)(v11 + 11));
      if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v7) )
        sub_1C004A608((_DWORD)DeviceObject, 0, 44, 0, 0, v7, 0, (__int64)aFdopwrC, 4077, 0);
    }
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1668301872, 0, 0LL);
    v12 = sub_1C000F050(DeviceObject);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
    v14 = *(_DWORD *)(v12 + 4172);
    *(_BYTE *)(v12 + 5064) = v13;
    *(_DWORD *)(v10 + 40) = v14;
    *(_DWORD *)(v10 + 44) = 114;
    *(_DWORD *)(v10 + 32) = 844055622;
    *(_DWORD *)(v10 + 36) = 829894756;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    v15 = *(_DWORD *)(v12 + 4172) == 210;
    *(_QWORD *)(v12 + 1344) = v10;
    if ( v15 )
    {
      if ( *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212) == 1 )
      {
        v16 = *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212);
        v17 = sub_1C000F050(DeviceObject);
        v18 = ((unsigned __int8)*(_DWORD *)(v17 + 828) + 1) & 7;
        *(_DWORD *)(v17 + 828) = v18;
        v18 *= 32LL;
        *(_DWORD *)(v18 + v17 + 284) = 130;
        *(_DWORD *)(v18 + v17 + 288) = *(_DWORD *)(v17 + 4172);
        *(_DWORD *)(v18 + v17 + 292) = 201;
        *(_DWORD *)(v18 + v17 + 296) = v16;
        *(_DWORD *)(v17 + 4172) = 201;
      }
      else
      {
        v24 = sub_1C000F050(DeviceObject);
        sub_1C001CE0C(DeviceObject, *(unsigned int *)(v24 + 4212), 206LL, 130LL);
      }
    }
    sub_1C0018750(DeviceObject, a3);
    v19 = sub_1C000F050(DeviceObject);
    sub_1C000F050(*(_QWORD *)(v10 + 8));
    *(_DWORD *)(v10 + 32) = 1734964085;
    v20 = *(_BYTE *)(v19 + 5064);
    *(_QWORD *)(v19 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 5056), v20);
  }
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1668301872, 0, 0LL);
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1934645093, v7, 0LL);
  *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
  sub_1C001B724(DeviceObject);
  sub_1C0015B1C(DeviceObject, v10);
  if ( v7 >= 0 )
    sub_1C0001D70((__int64)DeviceObject);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), a3, 0x20u);
}
