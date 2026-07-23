/*
 * XREFs of SmDecompressBuffer @ 0x14025C0DC
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140659F38 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14025BBB0 (RtlDecompressBufferEx.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14025C250 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlComputeCrc32 @ 0x140305E80 (RtlComputeCrc32.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 */

__int64 __fastcall SmDecompressBuffer(
        char *Buffer,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 (__fastcall **a6)(_QWORD))
{
  NTSTATUS CompressionWorkSpaceSize; // ebx
  void *WorkSpace; // r15
  int v10; // ecx
  ULONG CompressedBufferSize; // ebp
  char *v12; // r14
  size_t v13; // rdi
  __int64 v14; // r12
  void *v15; // rsi
  unsigned __int8 v16; // al
  USHORT v17; // r13
  _DWORD *v19; // rbx
  ULONG32 v20; // eax
  ULONG32 v21; // eax
  int Buffera; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressBufferWorkSpaceSize[21]; // [rsp+44h] [rbp-54h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  ULONG FinalUncompressedSize; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+18h]
  _DWORD *v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  CompressionWorkSpaceSize = 0;
  FinalUncompressedSize = 0;
  CompressFragmentWorkSpaceSize = 0;
  WorkSpace = 0LL;
  CompressBufferWorkSpaceSize[0] = 0;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v10 = *(_DWORD *)Buffer;
  CompressedBufferSize = a2 - 8;
  if ( (v10 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v10 < 0 )
  {
    if ( CompressedBufferSize >= 4 )
    {
      v19 = Buffer + 8;
      Buffera = 0;
      v12 = Buffer + 12;
      CompressedBufferSize = a2 - 12;
      v20 = RtlComputeCrc32(0, Buffer, 8u);
      v21 = RtlComputeCrc32(v20, &Buffera, 4u);
      if ( RtlComputeCrc32(v21, v12, CompressedBufferSize) == *v19 )
      {
        CompressionWorkSpaceSize = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v12 = Buffer + 8;
LABEL_5:
  v13 = *((unsigned int *)Buffer + 1);
  if ( a5 && (unsigned int)v13 > *a5 )
    return (unsigned int)-1073739516;
  v14 = (__int64)a6;
  v15 = (void *)(*a6)((unsigned int)v13);
  if ( !v15 )
    return (unsigned int)-1073741670;
  v16 = Buffer[3] & 0x7F;
  v17 = v16;
  if ( !v16 )
  {
    if ( CompressedBufferSize == (_DWORD)v13 )
    {
      memmove(v15, v12, v13);
      FinalUncompressedSize = v13;
      goto LABEL_15;
    }
LABEL_21:
    CompressionWorkSpaceSize = -1073741246;
    goto LABEL_16;
  }
  CompressionWorkSpaceSize = RtlGetCompressionWorkSpaceSize(
                               v16,
                               CompressBufferWorkSpaceSize,
                               &CompressFragmentWorkSpaceSize);
  if ( CompressionWorkSpaceSize >= 0 )
  {
    if ( CompressFragmentWorkSpaceSize )
    {
      WorkSpace = (void *)(*(__int64 (**)(void))v14)();
      if ( !WorkSpace )
      {
        CompressionWorkSpaceSize = -1073741670;
        goto LABEL_16;
      }
    }
    CompressionWorkSpaceSize = RtlDecompressBufferEx(
                                 v17,
                                 (PUCHAR)v15,
                                 v13,
                                 (PUCHAR)v12,
                                 CompressedBufferSize,
                                 &FinalUncompressedSize,
                                 WorkSpace);
    if ( CompressionWorkSpaceSize >= 0 )
    {
      if ( (_DWORD)v13 == FinalUncompressedSize )
      {
        CompressionWorkSpaceSize = 0;
LABEL_15:
        *v26 = v15;
        v15 = 0LL;
        *v27 = v13;
        goto LABEL_16;
      }
      goto LABEL_21;
    }
  }
LABEL_16:
  if ( v15 )
    (*(void (__fastcall **)(void *))(v14 + 8))(v15);
  if ( WorkSpace )
    (*(void (__fastcall **)(void *))(v14 + 8))(WorkSpace);
  return (unsigned int)CompressionWorkSpaceSize;
}
