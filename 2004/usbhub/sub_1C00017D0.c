/*
 * XREFs of sub_1C00017D0 @ 0x1C00017D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000174C @ 0x1C000174C (sub_1C000174C.c)
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00126A8 @ 0x1C00126A8 (sub_1C00126A8.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C00017D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  sub_1C000FD80(a1, 1024, 1884443460, a2, 0LL);
  v6 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 40, (__int64)&unk_1C0062100, *(_WORD *)(a2 + 4));
  sub_1C00015A0(a1, a2);
  v7 = sub_1C000174C(a1, a2, &v12);
  if ( v7 < 0 )
  {
    v6 = 0;
    sub_1C001518C(a1, a3, (unsigned int)v7);
    sub_1C0017FEC(a1, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 2408) |= 1u;
    *(_DWORD *)(a2 + 544) = 0;
    if ( a3 )
    {
      v8 = sub_1C0011220(a3);
      *(_DWORD *)(v8 + 1420) &= ~0x1000u;
      v9 = sub_1C0011220(a3);
      sub_1C0003610(a1, v10, *(_QWORD *)(v9 + 856));
      *(_QWORD *)(sub_1C0011220(a3) + 856) = 0LL;
    }
    sub_1C00126A8(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    sub_1C00018E8(a1, a2, v12);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 10);
  }
  return v6;
}
