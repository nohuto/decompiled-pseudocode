/*
 * XREFs of RtlpInitializeStackTraceLog @ 0x18010959C
 * Callers:
 *     RtlpRegisterStackTrace @ 0x18010AA68 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x18006EAA0 (RtlInitializeSListHead.c)
 *     RtlCreateMemoryZone @ 0x18007A660 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180084F50 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180084FB0 (RtlDestroyMemoryZone.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18011B010 (RtlAllocateMemoryBlockLookaside.c)
 *     RtlAllocateMemoryZone @ 0x18011B130 (RtlAllocateMemoryZone.c)
 */

void RtlpInitializeStackTraceLog()
{
  char v0; // cl
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // r14
  unsigned int v5; // r15d
  unsigned __int64 v6; // rax
  SIZE_T i; // r12
  __int64 v8; // rbx
  PVOID v9; // rbp
  _SLIST_HEADER *v10; // rdi
  _SLIST_HEADER *v11; // rbx
  PVOID v12; // rax
  PVOID v13; // rcx
  _QWORD *v14; // rbx
  PVOID Block; // [rsp+70h] [rbp+8h] BYREF
  PVOID MemoryZone; // [rsp+78h] [rbp+10h] BYREF
  PVOID v17; // [rsp+80h] [rbp+18h] BYREF
  PVOID v18; // [rsp+88h] [rbp+20h] BYREF

  if ( !RtlpHeapStackTraceLog )
  {
    v0 = 0;
    v1 = 6432LL;
    v2 = 0x10000LL;
    do
    {
      ++v0;
      v1 >>= 1;
    }
    while ( v1 );
    v3 = 16LL;
    v4 = 1LL << v0;
    v5 = 1;
    if ( (unsigned __int64)(1LL << v0) > 0x10000 )
      v2 = 1LL << v0;
    v6 = 16LL;
    for ( i = (v2 + 48 * (v2 / v4) + 4095) & 0xFFFFFFFFFFFFF000uLL; v6 < v4; ++v5 )
      v6 *= 2LL;
    v8 = 32LL * v5;
    if ( RtlCreateMemoryZone(&MemoryZone, (v8 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0) >= 0 )
    {
      v9 = MemoryZone;
      if ( RtlAllocateMemoryZone(MemoryZone, v8 + 64, &Block) < 0
        || (v10 = (_SLIST_HEADER *)(((unsigned __int64)Block + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            Block = v10,
            RtlCreateMemoryZone(&v17, i, 0) < 0) )
      {
        RtlDestroyMemoryZone(v9);
        return;
      }
      memset(v10, 0, v8 + 48);
      v10->Alignment = 0LL;
      v11 = v10 + 3;
      v12 = v17;
      v10->Region = (unsigned __int64)v9;
      v10[1].Alignment = (unsigned __int64)v12;
      v10[1].Region = 16LL;
      v10[2].Alignment = v4;
      *((_DWORD *)&v10[2].HeaderX64 + 2) = v5;
      while ( 1 )
      {
        RtlInitializeSListHead(v11);
        v11[1].Alignment = v3;
        v11[1].Region = (unsigned __int64)v10;
        if ( v3 == v4 )
          break;
        v3 *= 2LL;
        v11 += 2;
      }
      if ( RtlAllocateMemoryBlockLookaside(v10, 0x1920u, &v18) >= 0 )
      {
        v14 = v18;
        memset(v18, 0, 0x1920uLL);
        *v14 = v10;
        if ( !_InterlockedCompareExchange64(&RtlpHeapStackTraceLog, (signed __int64)v14, 0LL) )
          return;
        v13 = Block;
      }
      else
      {
        v13 = v10;
      }
      RtlDestroyMemoryBlockLookaside(v13);
    }
  }
}
