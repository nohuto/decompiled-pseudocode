/*
 * XREFs of sub_1C000DB50 @ 0x1C000DB50
 * Callers:
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 * Callees:
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 *     sub_1C000AD70 @ 0x1C000AD70 (sub_1C000AD70.c)
 */

__int64 __fastcall sub_1C000DB50(wchar_t *P, _OWORD *a2, _QWORD *a3)
{
  char *PoolWithTag; // rax
  char *v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( (int)sub_1C000AD70(P, &v14) >= 0 )
  {
    v13 = -1073741771;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727641u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = a2[1];
      *(_OWORD *)PoolWithTag = *a2;
      v9 = a2[2];
      *((_OWORD *)PoolWithTag + 1) = v8;
      *((_OWORD *)PoolWithTag + 2) = v9;
      *((_QWORD *)PoolWithTag + 3) = P;
      v10 = (struct _LIST_ENTRY *)(PoolWithTag + 8);
      Blink = DeviceObject.DeviceLock.Header.WaitListHead.Blink;
      if ( DeviceObject.DeviceLock.Header.WaitListHead.Blink->Flink != &DeviceObject.DeviceLock.Header.WaitListHead )
        __fastfail(3u);
      v10->Flink = &DeviceObject.DeviceLock.Header.WaitListHead;
      v10->Blink = Blink;
      Blink->Flink = v10;
      DeviceObject.DeviceLock.Header.WaitListHead.Blink = v10;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    v13 = -1073741801;
  }
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xAu, (__int64)&unk_1C00053F8, v13);
  ExFreePoolWithTag(P, 0);
  return v13;
}
