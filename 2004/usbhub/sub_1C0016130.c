/*
 * XREFs of sub_1C0016130 @ 0x1C0016130
 * Callers:
 *     sub_1C000ABD0 @ 0x1C000ABD0 (sub_1C000ABD0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00138BC @ 0x1C00138BC (sub_1C00138BC.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0034E5C @ 0x1C0034E5C (sub_1C0034E5C.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

__int64 __fastcall sub_1C0016130(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // rax
  KIRQL v12; // dl

  v8 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 47, (__int64)&unk_1C0062100, *(_WORD *)(a4 + 4));
  sub_1C000FD80(a1, 1024, 1936937808, a4, 0LL);
  sub_1C000F050(a1);
  if ( !a5 )
  {
    sub_1C0034E5C(a1, a4);
    return v8;
  }
  v9 = *(_QWORD *)(a4 + 376);
  *(_BYTE *)(v9 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v9 + 136) = 1;
  *(_DWORD *)(v9 + 88) = 2018460752;
  *(_DWORD *)(v9 + 92) = 19;
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)v9;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  if ( sub_1C0011220(a5)[281] == 2 )
  {
    sub_1C004C6A0(a1, a5, a4, v10, v9 + 132);
    sub_1C0054AFC(a1, a5, 2LL);
  }
  else
  {
    v11 = *(_QWORD *)(a4 + 376);
    *(_DWORD *)(v11 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v12 = *(_BYTE *)(v11 + 132);
    *(_DWORD *)(v11 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v12);
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 48, (__int64)&unk_1C0062100, *(_WORD *)(a4 + 4));
  if ( a3 == 25 )
  {
    sub_1C00138BC(a1, *(_WORD *)(a4 + 4));
  }
  else if ( a3 != 27 )
  {
    return v8;
  }
  return 5;
}
