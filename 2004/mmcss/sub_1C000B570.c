/*
 * XREFs of sub_1C000B570 @ 0x1C000B570
 * Callers:
 *     NotifyRoutine @ 0x1C0001060 (NotifyRoutine.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000B500 @ 0x1C000B500 (sub_1C000B500.c)
 * Callees:
 *     sub_1C0001B50 @ 0x1C0001B50 (sub_1C0001B50.c)
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 *     sub_1C0001BF0 @ 0x1C0001BF0 (sub_1C0001BF0.c)
 *     sub_1C0001CC0 @ 0x1C0001CC0 (sub_1C0001CC0.c)
 *     sub_1C0004254 @ 0x1C0004254 (sub_1C0004254.c)
 *     sub_1C000B720 @ 0x1C000B720 (sub_1C000B720.c)
 *     sub_1C000B820 @ 0x1C000B820 (sub_1C000B820.c)
 *     sub_1C000B890 @ 0x1C000B890 (sub_1C000B890.c)
 */

void __fastcall sub_1C000B570(__int64 a1)
{
  bool v2; // zf
  volatile signed __int64 *v3; // rbp
  volatile signed __int32 *v4; // rsi
  struct _KTHREAD *v5; // rdi
  char v6; // al
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(_BYTE *)(a1 + 148) & 2) == 0;
  v3 = 0LL;
  ThreadInformation = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
    v6 = *(_BYTE *)(a1 + 148);
    if ( (v6 & 2) == 0 )
    {
      v4 = *(volatile signed __int32 **)(a1 + 128);
      v3 = *(volatile signed __int64 **)(a1 + 72);
      *(_BYTE *)(a1 + 148) = v6 | 2;
      sub_1C0001B50(v4 + 23);
      v5 = *(struct _KTHREAD **)(a1 + 96);
      if ( v5 )
      {
        sub_1C0001CC0(a1);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 3LL) & 1) != 0 )
          sub_1C0001BF0(a1);
        sub_1C000B890(a1);
        if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
          sub_1C000B820(a1);
        KeSetBasePriorityThread(v5, *(_DWORD *)(a1 + 144));
        KeSetPriorityThread(v5, *(_DWORD *)(a1 + 108));
        ThreadInformation = *(_QWORD *)(a1 + 136);
        if ( v5 == KeGetCurrentThread() )
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &ThreadInformation, 8u);
        if ( byte_1C0007358 )
          sub_1C0004254(a1);
      }
      sub_1C0001B50(&dword_1C0007258);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( v4 )
      sub_1C000B720((PVOID)v4);
    if ( v3 )
      sub_1C0001B60(v3);
  }
}
