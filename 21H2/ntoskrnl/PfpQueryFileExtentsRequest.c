/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x1408DFE6C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x1403FACA0 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FAEA0 (ZwQueryVolumeInformationFile.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     PfpPrefetchSharedInitialize @ 0x140674B98 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedDeref @ 0x140675528 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedStart @ 0x140675848 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140675994 (PfpPrefetchSharedCleanup.c)
 *     PfpOpenHandleCreate @ 0x140677DE8 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  PVOID PoolWithTag; // r14
  _DWORD *v7; // r12
  ULONG_PTR v8; // rsi
  int inited; // ebx
  __int64 v10; // rax
  __int128 v11; // xmm7
  __m128i v12; // xmm6
  unsigned int v13; // ebx
  char *v14; // xmm0_8
  __int64 v15; // r13
  PVOID v16; // rax
  ULONG OutputBufferLength; // r15d
  NTSTATUS v18; // eax
  unsigned int Information; // r13d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // rax
  char v25; // [rsp+50h] [rbp-148h]
  int v26; // [rsp+54h] [rbp-144h]
  unsigned int v27; // [rsp+70h] [rbp-128h]
  __int64 FileInformation; // [rsp+78h] [rbp-120h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-118h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-F8h]
  __m128i v32; // [rsp+B0h] [rbp-E8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-D8h]
  SIZE_T NumberOfBytes; // [rsp+D0h] [rbp-C8h]
  __int64 InputBuffer; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-B8h]
  _DWORD *v37; // [rsp+E8h] [rbp-B0h]
  HANDLE v38; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-A0h]
  __int64 v40; // [rsp+108h] [rbp-90h]
  HANDLE FileHandle; // [rsp+110h] [rbp-88h] BYREF
  __int128 v42; // [rsp+118h] [rbp-80h]
  __int64 v43; // [rsp+128h] [rbp-70h]
  __int128 FsInformation; // [rsp+130h] [rbp-68h] BYREF
  __int64 v45; // [rsp+140h] [rbp-58h]

  v37 = (_DWORD *)a3;
  v4 = a2;
  v25 = a2;
  v36 = a1;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  v45 = 0LL;
  DestinationString = 0LL;
  PoolWithTag = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  FileHandle = 0LL;
  v42 = 0LL;
  v43 = 0x200000000LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0x200000000LL;
  v26 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_58;
  }
  if ( (_BYTE)a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v10 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)Src = *(_OWORD *)v10;
  v11 = *(_OWORD *)Src;
  v12 = *(__m128i *)(v10 + 16);
  v32 = v12;
  *(_OWORD *)Address = *(_OWORD *)(v10 + 32);
  NumberOfBytes = *(_QWORD *)(v10 + 48);
  if ( _mm_cvtsi128_si32(*(__m128i *)Src) != 2 )
  {
    inited = -1073741735;
    goto LABEL_58;
  }
  v13 = _mm_cvtsi128_si32(v12);
  if ( (v13 & 1) != 0 || v13 - 1 > 0xFFFFF || (v12.m128i_i8[4] & 1) != 0 || !v12.m128i_i32[1] || v12.m128i_i32[1] >= v13 )
    goto LABEL_57;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x70436650u);
  if ( !PoolWithTag )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_58;
  }
  if ( v4 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8)) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (char *)_mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
    Src[1] = v14;
    if ( (unsigned __int64)&v14[v13] > 0x7FFFFFFF0000LL || &v14[v13] < v14 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(PoolWithTag, Src[1], v13);
  if ( *((_WORD *)PoolWithTag + (v13 >> 1) - 1)
    || (v15 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) >> 1, *((_WORD *)PoolWithTag + v15) != 92) )
  {
LABEL_57:
    inited = -1073741811;
    goto LABEL_58;
  }
  v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v8 = (ULONG_PTR)v16;
  if ( !v16 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize((__int64)v16);
  *(_DWORD *)(v8 + 56) = 15;
  *(_DWORD *)(v8 + 60) = 150;
  inited = PfpPrefetchSharedStart(v8);
  if ( inited >= 0 )
  {
    *((_WORD *)PoolWithTag + v15) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
    if ( inited >= 0 )
    {
      OutputBufferLength = 32;
      inited = PfpOpenHandleCreate((__int64)&FileHandle, v8, (__int64)&DestinationString, 0LL, 1048960, 0x20u, 0, 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)PoolWithTag + v15) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (__int64)&v38,
                     v8,
                     (__int64)&DestinationString,
                     0LL,
                     1048704,
                     0x20u,
                     0x80u,
                     (__int64)&FileHandle);
          if ( inited >= 0 )
          {
            v18 = ZwQueryVolumeInformationFile(
                    FileHandle,
                    &IoStatusBlock,
                    &FsInformation,
                    0x18u,
                    FileFsVolumeInformation);
            inited = v18;
            if ( v18 == 259 )
              KeBugCheckEx(0x191u, 0xF72uLL, 0LL, 0LL, 0LL);
            if ( (v18 & 0xC0000000) != 0xC0000000 )
            {
              LODWORD(Address[0]) = DWORD2(FsInformation);
              Information = NumberOfBytes;
              v27 = NumberOfBytes;
              if ( (unsigned int)NumberOfBytes > 0x20 )
                OutputBufferLength = NumberOfBytes;
              while ( 1 )
              {
                if ( OutputBufferLength > 0xA00000 )
                  goto LABEL_2;
                if ( v7 )
                  ExFreePoolWithTag(v7, 0);
                OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x65466650u);
                v7 = OutputBuffer;
                if ( !OutputBuffer )
                  goto LABEL_13;
                v21 = ZwFsControlFile(
                        v38,
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v21;
                if ( v21 == 259 )
                  KeBugCheckEx(0x191u, 0xFB0uLL, 0LL, 0LL, 0LL);
                if ( v21 >= 0 )
                  break;
                if ( v21 == -1073741807 )
                  goto LABEL_43;
                if ( v21 != -2147483643 )
                  goto LABEL_58;
                OutputBufferLength *= 2;
              }
              Information = IoStatusBlock.Information;
              LODWORD(NumberOfBytes) = IoStatusBlock.Information;
              if ( *v7 )
              {
                inited = 0;
LABEL_47:
                v23 = *(_QWORD *)(v36 + 16);
                *(_OWORD *)v23 = v11;
                *(__m128i *)(v23 + 16) = v12;
                *(_OWORD *)(v23 + 32) = *(_OWORD *)Address;
                *(_QWORD *)(v23 + 48) = NumberOfBytes;
                if ( inited == -1073741807 )
                {
                  v26 = 0;
                }
                else if ( v27 >= Information )
                {
                  if ( v25 )
                    ProbeForWrite(Address[1], Information, 8u);
                  memmove((void *)Address[1], v7, Information);
                }
                else
                {
                  v26 = 0;
                  inited = -1073741789;
                }
                *v37 = 56;
                goto LABEL_58;
              }
LABEL_43:
              v22 = ZwQueryInformationFile(v38, &IoStatusBlock, &FileInformation, 8u, FileInternalInformation);
              inited = v22;
              if ( v22 == 259 )
                KeBugCheckEx(0x191u, 0xFEBuLL, 0LL, 0LL, 0LL);
              if ( v22 >= 0 )
              {
                v32.m128i_i64[1] = FileInformation;
                inited = -1073741807;
                v12 = v32;
                goto LABEL_47;
              }
            }
          }
        }
      }
    }
  }
LABEL_58:
  if ( v26 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( (v40 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v38, v8);
  if ( (v43 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&FileHandle, v8);
  if ( v8 )
  {
    PfpPrefetchSharedCleanup(v8, a2, a3, a4);
    PfpPrefetchSharedDeref((volatile signed __int64 *)v8);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)inited;
}
