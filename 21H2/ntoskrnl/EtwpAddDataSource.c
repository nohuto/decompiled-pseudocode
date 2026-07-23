/*
 * XREFs of EtwpAddDataSource @ 0x1406BB79C
 * Callers:
 *     EtwpQueueNotification @ 0x1406BB52C (EtwpQueueNotification.c)
 *     EtwpAddNotificationEvent @ 0x1406BB6F4 (EtwpAddNotificationEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall EtwpAddDataSource(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD **)(a1 + 1424);
  if ( !result )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x53777445u);
    v3 = result;
    if ( result )
    {
      *result = 0LL;
      result[1] = 0LL;
      result[4] = 0LL;
      v4 = result + 3;
      v4[1] = v4;
      *v4 = v4;
      v3[2] = 0LL;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), (signed __int64)v3, 0LL);
      if ( v5 )
      {
        ExFreePoolWithTag(v3, 0);
        return (_QWORD *)v5;
      }
      return v3;
    }
  }
  return result;
}
