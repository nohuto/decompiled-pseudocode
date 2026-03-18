/*
 * XREFs of sub_1C0059210 @ 0x1C0059210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 */

void __fastcall sub_1C0059210(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rbp
  KIRQL v6; // al
  int v7; // ebx
  PIRP v8; // rbx
  __int64 *v9; // r10
  __int64 v10; // r10

  sub_1C000F050(a1);
  v5 = sub_1C0011220(a3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(
      (__int64)DeviceObject->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&unk_1C0065268,
      *((unsigned __int16 *)v5 + 714));
  sub_1C000FD80(a1, 0x10000, 1768189015, a3, *((unsigned __int16 *)v5 + 714));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 256);
  v7 = v5[384];
  KeReleaseSpinLock((PKSPIN_LOCK)v5 + 256, v6);
  if ( v7 == 1 )
  {
    KeWaitForSingleObject(v5 + 514, Executive, 0, 0, 0LL);
    v8 = IoCsqRemoveNextIrp((PIO_CSQ)(v5 + 366), 0LL);
    sub_1C000FD80(a1, 16, 1919764785, a3, (__int64)v8);
    if ( v8 )
    {
      sub_1C0058A58(a1, a3, v8, 2u, 0);
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
      if ( v5[198] == 1 )
      {
        sub_1C000FD80(
          a1,
          16,
          1231249969,
          (__int64)v8->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters,
          (__int64)v8);
        if ( v9 )
        {
          if ( *v9 )
          {
            sub_1C000FD80(a1, 16, 1231249970, *v9, v9[1]);
            (*(void (__fastcall **)(_QWORD))v10)(*(_QWORD *)(v10 + 8));
          }
        }
      }
      KeWaitForSingleObject(v5 + 514, Executive, 0, 0, 0LL);
      sub_1C0058A58(a1, a3, v8, 4u, v5[360]);
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
    }
    else
    {
      KeSetEvent((PRKEVENT)(v5 + 514), 0, 0);
      sub_1C0058A58(a1, a3, 0LL, 3u, 0);
    }
    sub_1C00171A0(a1, a3, (__int64)v5, 0x656C6449u);
  }
  else
  {
    sub_1C00171A0(a1, a3, (__int64)v5, 0x656C6449u);
    sub_1C000FD80(a1, 0x10000, 1768189006, a3, *((unsigned __int16 *)v5 + 714));
  }
}
