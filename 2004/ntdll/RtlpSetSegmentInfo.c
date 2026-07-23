/*
 * XREFs of RtlpSetSegmentInfo @ 0x180078EF4
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapAffinitySlotAssign @ 0x180109AB8 (RtlpLogHeapAffinitySlotAssign.c)
 */

__int64 __fastcall RtlpSetSegmentInfo(__int64 a1, volatile signed __int64 *a2)
{
  unsigned int v4; // edi
  unsigned int v6; // r8d
  int v7; // edx
  signed __int32 v8; // ebx
  volatile signed __int64 *v9; // r8
  int v10; // edx
  signed __int64 v11; // rax
  int v12; // edx
  signed __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  signed __int64 v16; // [rsp+40h] [rbp+8h]
  signed __int64 v17; // [rsp+40h] [rbp+8h]

  v4 = 1;
  if ( *(volatile signed __int64 **)a1 != a2 )
  {
    v6 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 32);
      if ( v8 >= 0 )
      {
        if ( !(_WORD)v8 )
          return 0;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8 | 0x80000000, v8) )
          break;
      }
      if ( ++v7 > v6 )
      {
        v8 = -1;
        break;
      }
    }
    if ( v8 == -1 )
      return 0;
    if ( v8 )
    {
      v9 = *(volatile signed __int64 **)a1;
      v10 = -*(unsigned __int16 *)(a1 + 40);
      do
      {
        v11 = *((_QWORD *)v9 + 20);
        LODWORD(v16) = v11 + v10;
        HIDWORD(v16) = HIDWORD(v11) - 1;
      }
      while ( v11 != _InterlockedCompareExchange64(v9 + 20, v16, v11) );
      v12 = *(unsigned __int16 *)(a1 + 40);
      do
      {
        v13 = *((_QWORD *)a2 + 20);
        if ( v12 )
          v14 = HIDWORD(v13) + 1;
        else
          v14 = HIDWORD(v13) - 1;
        HIDWORD(v17) = v14;
        LODWORD(v17) = v13 + v12;
      }
      while ( v13 != _InterlockedCompareExchange64(a2 + 20, v17, v13) );
      *(_QWORD *)a1 = a2;
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v15 = 2147353472LL;
      if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapAffinitySlotAssign(
          *(_QWORD *)(*(_QWORD *)(*a2 + 24) + 24LL),
          *(_QWORD *)(a1 + 8),
          (unsigned int)LOBYTE(NtCurrentTeb()->HeapData) - 1);
    }
    else
    {
      v4 = 0;
    }
    *(_DWORD *)(a1 + 32) = v8;
  }
  return v4;
}
