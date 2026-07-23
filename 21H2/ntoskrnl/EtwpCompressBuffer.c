/*
 * XREFs of EtwpCompressBuffer @ 0x1405AC944
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1405ACCCC (EtwpCompressPendingBuffers.c)
 * Callees:
 *     RtlCompressBuffer @ 0x14028BE80 (RtlCompressBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x14036CF28 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetNextEventOffsetType @ 0x1405AD680 (EtwpGetNextEventOffsetType.c)
 *     EtwpRotateCompressionTarget @ 0x1405AD9F4 (EtwpRotateCompressionTarget.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1405ADA60 (EtwpRotateCompressionTargetIfNeeded.c)
 */

__int64 __fastcall EtwpCompressBuffer(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  ULONG v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 CompressedBufferSize; // r9
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  ULONG i; // r13d
  int NextEventOffsetType; // r10d
  ULONG v18; // eax
  __int64 v19; // rax
  ULONG v21; // eax
  unsigned int v22; // [rsp+40h] [rbp-48h]
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF
  int v25; // [rsp+A8h] [rbp+20h]

  FinalCompressedSize = 0;
  v24 = 0;
  if ( *(_DWORD *)(a2 + 8) <= *(_DWORD *)a2 )
    v4 = *(_DWORD *)(a2 + 8);
  else
    v4 = *(_DWORD *)(a2 + 4);
  v5 = v4 - 72;
  v6 = 72;
  if ( v4 == 72 )
  {
LABEL_5:
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  EtwpRotateCompressionTargetIfNeeded();
  while ( 1 )
  {
    v19 = *(_QWORD *)(a1 + 1136);
    if ( !v19 )
    {
      ++*(_DWORD *)(a1 + 268);
      return 3221225495LL;
    }
    v9 = *(unsigned int *)(v19 + 8);
    v10 = *(_QWORD *)(a1 + 1136);
    v11 = (unsigned int)v9;
    v7 = v9 + 72;
    CompressedBufferSize = (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)(v10 + 8) - 72);
    v22 = *(_DWORD *)(a1 + 4) - *(_DWORD *)(v10 + 8) - 72;
    if ( *(_DWORD *)(v10 + 8) == 72 || v5 < (int)CompressedBufferSize * *(_DWORD *)(a1 + 1156) )
    {
      v13 = RtlCompressBuffer(
              3u,
              (PUCHAR)(a2 + v6),
              v5,
              (PUCHAR)(v7 + v10),
              CompressedBufferSize,
              0,
              &FinalCompressedSize,
              *(PVOID *)(a1 + 1144));
      v7 = (unsigned int)v13;
      if ( v13 >= 0 )
      {
        *(_OWORD *)(v10 + v11) = *(_OWORD *)a2;
        *(_OWORD *)(v10 + v11 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v10 + v11 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v10 + v11 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v10 + v11 + 64) = *(_QWORD *)(a2 + 64);
        v21 = FinalCompressedSize;
        *(_QWORD *)(v10 + v11 + 24) = 0LL;
        *(_DWORD *)(v10 + v11) = v21 + 72;
        *(_DWORD *)(v10 + v11 + 8) = v5 + 72;
        *(_DWORD *)(v10 + v11 + 4) = v5 + 72;
        *(_DWORD *)(v10 + v11 + 12) = 0;
        *(_DWORD *)(v10 + v11 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 8LL) += 72;
        *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 8LL) += FinalCompressedSize;
        return (unsigned int)v7;
      }
      CompressedBufferSize = v22;
    }
    LOBYTE(v14) = 1;
    v25 = 1;
    if ( *(_DWORD *)(a1 + 1160) )
      break;
LABEL_27:
    v5 = v4 - v6;
    EtwpRotateCompressionTarget(a1, v8, v7, CompressedBufferSize);
  }
  while ( 1 )
  {
    v15 = v6 + (v5 >> v14);
    for ( i = 0; ; i += v24 )
    {
      NextEventOffsetType = EtwpGetNextEventOffsetType(a2, v6 + i, &v24);
      if ( !NextEventOffsetType )
        break;
      v8 = v24;
      if ( v24 + v6 + i > v15 )
        break;
    }
    if ( i )
    {
      if ( RtlCompressBuffer(
             3u,
             (PUCHAR)(a2 + v6),
             i,
             (PUCHAR)(v11 + v10 + 72),
             CompressedBufferSize,
             0,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 1144)) >= 0 )
      {
        v6 += i;
        *(_OWORD *)(v10 + v11) = *(_OWORD *)a2;
        *(_OWORD *)(v10 + v11 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v10 + v11 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v10 + v11 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v10 + v11 + 64) = *(_QWORD *)(a2 + 64);
        v18 = FinalCompressedSize;
        *(_QWORD *)(v10 + v11 + 24) = 0LL;
        *(_DWORD *)(v10 + v11) = v18 + 72;
        *(_DWORD *)(v10 + v11 + 8) = i + 72;
        *(_DWORD *)(v10 + v11 + 4) = i + 72;
        *(_DWORD *)(v10 + v11 + 12) = 0;
        *(_DWORD *)(v10 + v11 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 8LL) += 72;
        v8 = FinalCompressedSize + *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 8LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 8LL) = v8;
        goto LABEL_27;
      }
      v14 = ++v25;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 8LL) != 72 )
      goto LABEL_27;
    if ( !NextEventOffsetType )
      break;
    EtwpUpdateEventsLostCount(a1);
    v6 += v24;
    if ( v6 == v4 )
      goto LABEL_5;
    if ( v6 > v4 )
      goto LABEL_30;
    v14 = v25;
LABEL_24:
    v5 = v4 - v6;
    if ( v14 > *(_DWORD *)(a1 + 1160) )
      goto LABEL_27;
  }
  ++*(_DWORD *)(a1 + 268);
LABEL_30:
  LODWORD(v7) = -1073741566;
  return (unsigned int)v7;
}
