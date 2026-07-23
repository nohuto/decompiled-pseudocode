/*
 * XREFs of TpReserveTaskPost @ 0x18000B6FC
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  _RTL_SRWLOCK *v6; // rdx
  __int64 result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode(v8, a2 + 8, a2 + 12);
    return v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = &TppPoolpSerializedPool;
    v6 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
  }
  else
  {
    v5 = (__int64 *)&TppPoolpGlobalPool;
    v6 = &TppPoolpGlobalPoolLock;
  }
  result = TppPoolpReferenceGlobalPool(v5, v6, &v8);
  v3 = result;
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
