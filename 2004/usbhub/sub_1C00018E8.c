/*
 * XREFs of sub_1C00018E8 @ 0x1C00018E8
 * Callers:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C0001BF8 @ 0x1C0001BF8 (sub_1C0001BF8.c)
 *     sub_1C0001C3C @ 0x1C0001C3C (sub_1C0001C3C.c)
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

char __fastcall sub_1C00018E8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  unsigned int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // bl
  int v10; // eax
  int v11; // edi
  __int64 v12; // rax
  ULONG TimeIncrement; // eax
  int v14; // edx
  int v16; // [rsp+20h] [rbp-68h]
  char v17; // [rsp+48h] [rbp-40h]
  __int16 v18; // [rsp+98h] [rbp+10h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF
  __int16 v21; // [rsp+ACh] [rbp+24h]
  __int16 v22; // [rsp+AEh] [rbp+26h]

  v19 = 0;
  sub_1C000FD80(a1, 4, 1919242324, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 26, (__int64)"FKh&", *(_WORD *)(a2 + 4));
  v6 = sub_1C000F050(a1);
  v21 = *(_WORD *)(a2 + 4);
  v18 = 0;
  v20 = 262947;
  v22 = 0;
  v7 = sub_1C000A740(a1, (unsigned int)&v20, 0, (unsigned int)&v18, v16, (__int64)&v19);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4(v7) )
  {
    v17 = 0;
    sub_1C004A608(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v14, v19, (__int64)aBusC, 2486, v17);
  }
  sub_1C000FD80(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  sub_1C0001C3C(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  v10 = sub_1C0001BF8(a1);
  *(_DWORD *)(a2 + 852) = v10;
  *(_DWORD *)(a2 + 848) = v10;
  *(_DWORD *)(a3 + 4) = v10;
  sub_1C000FD80(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 4944), v9);
  v11 = *((_DWORD *)&stru_1C006B480.DeviceQueue.1 + 1);
  v12 = sub_1C0001AE8(a1, a2 + 552, 1380799602LL) & 0xC0000000LL;
  if ( (_DWORD)v12 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v12) = KeSetTimer(
                    (PKTIMER)(a2 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v11 - TimeIncrement),
                    (PKDPC)(a2 + 616));
    if ( (_BYTE)v12 )
      LOBYTE(v12) = sub_1C001B88C(a1, a2 + 552);
  }
  return v12;
}
