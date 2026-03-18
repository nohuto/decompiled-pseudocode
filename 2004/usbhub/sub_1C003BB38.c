/*
 * XREFs of sub_1C003BB38 @ 0x1C003BB38
 * Callers:
 *     sub_1C003BB20 @ 0x1C003BB20 (sub_1C003BB20.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall sub_1C003BB38(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r10
  char QuadPart; // r8
  int MinorFunction; // r9d
  __int64 v8; // rcx
  __int64 v9; // r10
  PDEVICE_OBJECT *v11; // rax

  v4 = sub_1C000F050((__int64)a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (_BYTE)MinorFunction )
  {
    if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
    {
      QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
      if ( CurrentStackLocation->Parameters.Create.Options != 1 )
        QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v8 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 321, 1u) + 1) & 0xF;
  *((_BYTE *)v4 + v8 + 1288) = MinorFunction;
  *((_BYTE *)v4 + v8 + 1304) = QuadPart;
  v4[4] = MinorFunction;
  sub_1C000FD80((__int64)a1, 16, 1717858128, 0LL, (__int64)a2);
  if ( *(_BYTE *)(v9 + 1) < 4u )
    return off_1C005E128[2 * *(unsigned __int8 *)(v9 + 1)](a1, a2);
  v11 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v11[151], a2);
}
