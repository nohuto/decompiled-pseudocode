/*
 * XREFs of EtwpPreserveLogger @ 0x14094B08C
 * Callers:
 *     EtwpKsrCallback @ 0x14094AF50 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x14094BB84 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1402675C0 (EtwpResetBufferHeader.c)
 *     EtwpFreeTraceBuffer @ 0x1403604A4 (EtwpFreeTraceBuffer.c)
 *     EtwpInitializeBufferHeader @ 0x140360BCC (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x140360E40 (EtwpAllocateTraceBuffer.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpAddLogHeader @ 0x140716AC4 (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x14094AC84 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x14094B2CC (EtwpPreserveMdlList.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v4; // r15
  PVOID v5; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rsi
  int v8; // edi
  LARGE_INTEGER *TraceBuffer; // rax
  LARGE_INTEGER *v10; // r12
  __int128 v11; // xmm6
  __int64 v12; // rax
  __int64 v13; // r15
  PVOID *v14; // rcx
  __int64 v15; // rax
  void *Src[2]; // [rsp+20h] [rbp-58h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  PVOID *v18; // [rsp+90h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 1072);
  P = 0LL;
  if ( *(_BYTE *)(v1 + 33) )
    return 0LL;
  v4 = *(unsigned int *)(a1 + 4);
  v5 = 0LL;
  *(_OWORD *)Src = *(_OWORD *)(v1 + 16);
  if ( ((v4 * (unsigned int)(*(_DWORD *)(a1 + 248) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)LOWORD(Src[0]) + 18, 0x4B777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)LOWORD(Src[0]) + 18);
    v7[2] = *(_DWORD *)(a1 + 4);
    v7[3] = 16;
    memmove(v7 + 4, Src[1], (unsigned int)LOWORD(Src[0]) + 2);
    TraceBuffer = (LARGE_INTEGER *)EtwpAllocateTraceBuffer(a1, v4);
    v10 = TraceBuffer;
    if ( !TraceBuffer )
    {
      v8 = -1073741801;
LABEL_23:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    EtwpInitializeBufferHeader((__int16 *)a1, TraceBuffer);
    EtwpResetBufferHeader((__int64)v10, 4);
    v11 = *(_OWORD *)(a1 + 168);
    *(_OWORD *)(a1 + 168) = *(_OWORD *)Src;
    EtwpAddLogHeader(a1, v10);
    *(_OWORD *)(a1 + 168) = v11;
    v8 = EtwpBuildMdlForTraceBuffer(a1, (char *)v10, (struct _MDL **)&P);
    if ( v8 >= 0 )
    {
      ++v7[1];
      v12 = *(_QWORD *)(a1 + 96);
      v5 = P;
      v13 = v12 - 56;
      if ( v12 == a1 + 96 )
        v13 = 0LL;
      if ( v13 )
      {
        v18 = (PVOID *)P;
        while ( 1 )
        {
          v8 = EtwpBuildMdlForTraceBuffer(a1, (char *)v13, (struct _MDL **)&P);
          if ( v8 < 0 )
            break;
          v14 = v18;
          v18 = (PVOID *)P;
          *v14 = P;
          ++v7[1];
          v15 = *(_QWORD *)(v13 + 56);
          v13 = v15 - 56;
          if ( v15 == a1 + 96 )
            v13 = 0LL;
          if ( !v13 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v8 = EtwpPreserveMdlList(v5, v7, (unsigned int)LOWORD(Src[0]) + 18, v1);
        if ( v8 >= 0 )
        {
          *(_QWORD *)(v1 + 8) = v10;
          *(_BYTE *)(v1 + 33) = 1;
          goto LABEL_21;
        }
      }
    }
    EtwpFreeTraceBuffer(a1, (char *)v10);
LABEL_21:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    goto LABEL_23;
  }
  return (unsigned int)-1073741670;
}
