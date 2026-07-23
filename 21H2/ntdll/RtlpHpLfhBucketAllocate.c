/*
 * XREFs of RtlpHpLfhBucketAllocate @ 0x180087FF0
 * Callers:
 *     RtlpHpLfhContextAllocate @ 0x1800075AC (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 */

__int64 __fastcall RtlpHpLfhBucketAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h]

  v8 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
  v5 = *(unsigned __int8 *)(a1 + 56) - (unsigned __int64)((*(_BYTE *)(a1 + 56) - 1) & 7) + v8 + 7;
  if ( *(_BYTE *)(a2 + 2) == 1 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(v8 + BYTE1(NtCurrentTeb()->HeapData) + a2);
  return RtlpHpLfhSlotAllocate(a1, (_RTL_SRWLOCK *)a2, *(_QWORD *)(v5 + 8LL * v6 + a2), a3, a4);
}
