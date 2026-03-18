/*
 * XREFs of sub_1C003B508 @ 0x1C003B508
 * Callers:
 *     sub_1C003B8F0 @ 0x1C003B8F0 (sub_1C003B8F0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 */

void __fastcall sub_1C003B508(__int64 a1)
{
  _DWORD *v2; // rdi
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // r9
  KIRQL v8; // r10
  __int64 v9; // r11
  KIRQL v10; // r10

  v2 = sub_1C000F050(a1);
  v3 = (KSPIN_LOCK *)(v2 + 932);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 466);
  v5 = (int)v2[934];
  if ( !(_DWORD)v5 )
  {
    KeReleaseSpinLock(v3, v4);
    return;
  }
  v2[934] = 0;
  v6 = v5;
  sub_1C000FD80(a1, 0x2000, 1684886627, a1, v5);
  if ( (_DWORD)v9 != 1 )
  {
    KeReleaseSpinLock(v3, v8);
    sub_1C000FD80(a1, 0x2000, 1681079857, a1, v6);
    goto LABEL_7;
  }
  sub_1C000FD80(a1, 0x2000, 1684886573, v7, v9);
  KeReleaseSpinLock(v3, v10);
  if ( KeCancelTimer((PKTIMER)(v2 + 962)) )
  {
    sub_1C000FD80(a1, 0x2000, 1680948785, a1, v6);
    sub_1C001B88C(a1, (__int64)(v2 + 962));
LABEL_7:
    KeSetEvent((PRKEVENT)(v2 + 940), 0, 0);
  }
  sub_1C000FD80(a1, 0x2000, 1684887412, a1, v6);
  KeWaitForSingleObject(v2 + 940, Executive, 0, 0, 0LL);
}
