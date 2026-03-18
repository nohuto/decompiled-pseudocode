/*
 * XREFs of sub_1C002A170 @ 0x1C002A170
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0029E7C @ 0x1C0029E7C (sub_1C0029E7C.c)
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003E9F8 @ 0x1C003E9F8 (sub_1C003E9F8.c)
 *     sub_1C003EC70 @ 0x1C003EC70 (sub_1C003EC70.c)
 *     sub_1C003EF34 @ 0x1C003EF34 (sub_1C003EF34.c)
 *     sub_1C003F208 @ 0x1C003F208 (sub_1C003F208.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F818 @ 0x1C003F818 (sub_1C003F818.c)
 *     sub_1C003F8B0 @ 0x1C003F8B0 (sub_1C003F8B0.c)
 *     sub_1C003FC88 @ 0x1C003FC88 (sub_1C003FC88.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C004028C @ 0x1C004028C (sub_1C004028C.c)
 *     sub_1C0040574 @ 0x1C0040574 (sub_1C0040574.c)
 *     sub_1C0040864 @ 0x1C0040864 (sub_1C0040864.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

NTSTATUS __fastcall sub_1C002A170(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int LowPart; // ebx
  int v6; // r10d
  int v7; // ebx
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // [rsp+30h] [rbp-28h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  sub_1C000FD80((__int64)a1, 8, 1178888559, ((unsigned __int64)LowPart >> 2) & 0xFFF, (__int64)a2);
  if ( KeGetCurrentIrql() )
  {
    v22 = v6 & (LowPart >> 2);
    v7 = -1073741811;
    sub_1C004A608((_DWORD)a1, 0, 93, 0, 0, -1073741811, v22, (__int64)aHubC, 1431, 0);
LABEL_3:
    a2->IoStatus.Status = v7;
    IofCompleteRequest(a2, 0);
    return v7;
  }
  v9 = sub_1C000F050((__int64)a1);
  sub_1C0012810(a1, 6u, (__int64)(v9 + 434));
  if ( LowPart <= 0x220444 )
  {
    if ( LowPart == 2229316 )
      return sub_1C003DF14(a1, a2, CurrentStackLocation);
    v10 = LowPart - 2229256;
    if ( !v10 )
      return sub_1C004028C(a1, a2, CurrentStackLocation);
    v11 = v10 - 4;
    if ( !v11 )
      return sub_1C003F818(a1, a2, CurrentStackLocation);
    v12 = v11 - 4;
    if ( !v12 )
      return sub_1C003E6C4(a1, a2, CurrentStackLocation);
    v13 = v12 - 4;
    if ( !v13 )
      return sub_1C003FF9C(a1, a2, CurrentStackLocation);
    v14 = v13 - 12;
    if ( !v14 )
      return sub_1C003F498(a1, a2, CurrentStackLocation);
    v15 = v14 - 28;
    if ( !v15 )
      return sub_1C003E9F8(a1, a2, CurrentStackLocation);
    if ( v15 == 4 )
      return sub_1C003F208(a1, a2, CurrentStackLocation);
    return sub_1C0029E7C((__int64)a1, a2);
  }
  v16 = LowPart - 2229320;
  if ( !v16 )
    return sub_1C003F8B0(a1, a2, CurrentStackLocation);
  v17 = v16 - 4;
  if ( !v17 )
    return sub_1C0040864(a1, a2);
  v18 = v17 - 4;
  if ( !v18 )
    return sub_1C003EC70(a1, a2, CurrentStackLocation);
  v19 = v18 - 4;
  if ( !v19 )
    return sub_1C003EF34(a1, a2, CurrentStackLocation);
  v20 = v19 - 4;
  if ( !v20 )
    return sub_1C0040574(a1, a2, CurrentStackLocation);
  v21 = v20 - 4;
  if ( v21 )
  {
    if ( v21 == 850855 )
    {
      v7 = -1073741808;
      goto LABEL_3;
    }
    return sub_1C0029E7C((__int64)a1, a2);
  }
  return sub_1C003FC88(a1, a2, CurrentStackLocation);
}
