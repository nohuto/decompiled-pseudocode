/*
 * XREFs of EtwpPreserveLogger @ 0x140948A2C
 * Callers:
 *     EtwpKsrCallback @ 0x1409488F0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140949520 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x140246724 (EtwpFreeTraceBuffer.c)
 *     EtwpResetBufferHeader @ 0x140254314 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x14029E7BC (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x14029E818 (EtwpAllocateTraceBuffer.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpAddLogHeader @ 0x1406B76C8 (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140948624 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x140948C68 (EtwpPreserveMdlList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v4; // r14
  PVOID v5; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rsi
  int v8; // edi
  LARGE_INTEGER *TraceBuffer; // rax
  LARGE_INTEGER *v10; // r12
  __int128 v11; // xmm6
  __int64 *v12; // r14
  PVOID *v13; // rcx
  void *Src[2]; // [rsp+20h] [rbp-58h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  PVOID *v16; // [rsp+90h] [rbp+18h]

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
      v12 = *(__int64 **)(a1 + 96);
      v5 = P;
      if ( v12 == (__int64 *)(a1 + 96) )
        v12 = 0LL;
      if ( v12 )
      {
        v16 = (PVOID *)P;
        while ( 1 )
        {
          v8 = EtwpBuildMdlForTraceBuffer(a1, (char *)v12[2], (struct _MDL **)&P);
          if ( v8 < 0 )
            break;
          v13 = v16;
          v16 = (PVOID *)P;
          *v13 = P;
          ++v7[1];
          v12 = (__int64 *)*v12;
          if ( v12 == (__int64 *)(a1 + 96) )
            v12 = 0LL;
          if ( !v12 )
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
