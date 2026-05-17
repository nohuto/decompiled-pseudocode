/*
 * XREFs of RtlpInitializeStackTraceLog @ 0x18010994C
 * Callers:
 *     RtlpRegisterStackTrace @ 0x18010AE18 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x18006FBD0 (RtlInitializeSListHead.c)
 *     RtlCreateMemoryZone @ 0x18007B790 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180085520 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180085580 (RtlDestroyMemoryZone.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18011C010 (RtlAllocateMemoryBlockLookaside.c)
 *     RtlAllocateMemoryZone @ 0x18011C130 (RtlAllocateMemoryZone.c)
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
  unsigned __int64 i; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  union _SLIST_HEADER *v13; // rdi
  union _SLIST_HEADER *v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rbx
  union _SLIST_HEADER *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+18h] BYREF
  void *v24; // [rsp+88h] [rbp+20h] BYREF

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
    if ( (int)RtlCreateMemoryZone(&v22, (v8 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0) >= 0 )
    {
      v9 = v22;
      if ( (int)RtlAllocateMemoryZone(v22, v8 + 64, &v21) < 0
        || (v13 = (union _SLIST_HEADER *)(((unsigned __int64)&v21->HeaderX64 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            v21 = v13,
            (int)RtlCreateMemoryZone(&v23, i, 0) < 0) )
      {
        RtlDestroyMemoryZone(v9, v10, v11, v12);
        return;
      }
      memset(v13, 0, v8 + 48);
      v13->Alignment = 0LL;
      v14 = v13 + 3;
      v15 = v23;
      v13->Region = v9;
      v13[1].Alignment = v15;
      v13[1].Region = 16LL;
      v13[2].Alignment = v4;
      *((_DWORD *)&v13[2].HeaderX64 + 2) = v5;
      while ( 1 )
      {
        RtlInitializeSListHead(v14);
        v14[1].Alignment = v3;
        v14[1].Region = (unsigned __int64)v13;
        if ( v3 == v4 )
          break;
        v3 *= 2LL;
        v14 += 2;
      }
      if ( (int)RtlAllocateMemoryBlockLookaside(v13, 6432LL, &v24) >= 0 )
      {
        v20 = v24;
        memset(v24, 0, 0x1920uLL);
        *v20 = v13;
        if ( !_InterlockedCompareExchange64(&RtlpHeapStackTraceLog, (signed __int64)v20, 0LL) )
          return;
        v19 = (unsigned __int64)v21;
      }
      else
      {
        v19 = (unsigned __int64)v13;
      }
      RtlDestroyMemoryBlockLookaside(v19, v16, v17, v18);
    }
  }
}
