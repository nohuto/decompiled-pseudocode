/*
 * XREFs of sub_1C0001BF0 @ 0x1C0001BF0
 * Callers:
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 * Callees:
 *     sub_1C0001B10 @ 0x1C0001B10 (sub_1C0001B10.c)
 */

void __fastcall sub_1C0001BF0(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  _QWORD *v8; // rax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
  DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 72);
  if ( (*(_DWORD *)(v2 + 184) & 6) != 0 )
    sub_1C0001B10(a1, 0);
  v3 = *(_QWORD **)(a1 + 80);
  v4 = a1 + 80;
  v5 = *(_QWORD **)(v4 + 8);
  if ( v3[1] != v4 || *v5 != v4 )
    goto LABEL_10;
  *v5 = v3;
  v3[1] = v5;
  if ( v5 == v3 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    v7 = v2 + 16;
    if ( *(_QWORD *)(v6 + 8) == v7 )
    {
      v8 = *(_QWORD **)(v7 + 8);
      if ( *v8 == v7 )
      {
        *v8 = v6;
        *(_QWORD *)(v6 + 8) = v8;
        goto LABEL_9;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
LABEL_9:
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
}
