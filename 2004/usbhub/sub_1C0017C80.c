/*
 * XREFs of sub_1C0017C80 @ 0x1C0017C80
 * Callers:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000E620 @ 0x1C000E620 (sub_1C000E620.c)
 *     sub_1C0017A30 @ 0x1C0017A30 (sub_1C0017A30.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

struct _LIST_ENTRY *__fastcall sub_1C0017C80(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        int a5,
        unsigned __int8 a6)
{
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v11; // rcx
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v13; // rbx
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rax
  __int64 v16; // rax
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rcx

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  Flink = a1[4].Flink;
  if ( !Flink )
    goto LABEL_25;
  if ( LODWORD(Flink->Flink) != 541218120 )
    sub_1C002DC78(a1, Flink);
  if ( a5 != 2001228627 && (dword_1C006B268 & 8) != 0 )
  {
    v11 = (__int64)&Flink[55].Blink[2
                                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)&Flink[55]) & HIDWORD(Flink[55].Flink))];
    *(_DWORD *)v11 = 1296783201;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = a4;
    *(_QWORD *)(v11 + 24) = a3;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 45, (__int64)&unk_1C0062088, a4);
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PoolType, 0x48uLL, 0x42554855u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  sub_1C001D340(PoolWithTag, 0LL, 72LL);
  v14 = a1[4].Flink;
  if ( !v14 )
LABEL_25:
    sub_1C002DC78(a1, 0LL);
  if ( LODWORD(v14->Flink) != 541218120 )
    sub_1C002DC78(a1, a1[4].Flink);
  v15 = v14[298].Flink;
  if ( !v15 || (v16 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, _QWORD))v15)(a1, a6)) == 0 )
  {
    ExFreePoolWithTag(v13, 0);
    return 0LL;
  }
  v13[2].Blink = (struct _LIST_ENTRY *)v16;
  LODWORD(v13->Flink) = 1230463592;
  HIDWORD(v13->Flink) = a5;
  HIDWORD(v13->Blink) = a4;
  v13[2].Flink = a3;
  v13[1].Flink = a1;
  v13[1].Blink = a2;
  ExInterlockedInsertTailList(Flink + 174, v13 + 3, (PKSPIN_LOCK)&Flink[175]);
  if ( HIDWORD(v13->Flink) != 2001228627 && (dword_1C006B268 & 8) != 0 )
  {
    v17 = a1[4].Flink;
    if ( v17 )
    {
      v18 = (__int64)&v17[55].Blink[2
                                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)&v17[55]) & HIDWORD(v17[55].Flink))];
      *(_DWORD *)v18 = 726485847;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      *(_QWORD *)(v18 + 24) = v13;
    }
  }
  return v13;
}
