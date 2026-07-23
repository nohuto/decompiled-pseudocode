/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x140898CE0
 * Callers:
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140896B80 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14050AAD0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlNumberOfSetBitsEx @ 0x1405880E0 (RtlNumberOfSetBitsEx.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x1408980BC (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898180 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteBuffer @ 0x140898C1C (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpWriteSecondaryData @ 0x1408998A8 (IopLiveDumpWriteSecondaryData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFile(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  void *v3; // r13
  void *v5; // r12
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  int SecureDumpHeader; // edi
  ULONG v10; // r8d
  struct _MDL *v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r15
  __int128 v15; // xmm0
  int v16; // ecx
  __int128 v17; // xmm0
  __int64 v18; // rax
  LARGE_INTEGER v19; // rcx
  SIZE_T v20; // rdx
  _DWORD *PoolWithTag; // rax
  ULONG v22; // r8d
  LARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-39h] BYREF
  struct _KTHREAD *v25; // [rsp+40h] [rbp-31h]
  __int64 v26; // [rsp+48h] [rbp-29h]
  __int128 v27; // [rsp+50h] [rbp-21h] BYREF
  __int128 v28; // [rsp+60h] [rbp-11h]
  __int64 v29; // [rsp+70h] [rbp-1h]
  __int128 v30; // [rsp+78h] [rbp+7h] BYREF
  __int128 v31; // [rsp+88h] [rbp+17h]
  __int64 v32; // [rsp+98h] [rbp+27h]

  v1 = *(_QWORD *)(a1 + 560);
  v2 = a1 + 680;
  v3 = *(void **)(a1 + 64);
  v26 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( *(_BYTE *)(a1 + 880) )
    v6.QuadPart = *(_QWORD *)(v1 + 8224) + *(unsigned int *)(a1 + 888);
  else
    v6 = *(LARGE_INTEGER *)(v1 + 8224);
  ByteOffset = v6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  if ( !*(_QWORD *)(a1 + 736) )
  {
LABEL_14:
    v12 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
    v13 = *(_DWORD *)(a1 + 984);
    v14 = v12;
    if ( v13 )
    {
      v15 = *(_OWORD *)(a1 + 960);
      *(_QWORD *)&v28 = *(_QWORD *)(a1 + 976);
      v29 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = &v27;
      v27 = v15;
      DWORD2(v28) = v13;
    }
    v16 = *(_DWORD *)(a1 + 936);
    if ( v16 )
    {
      v17 = *(_OWORD *)(a1 + 912);
      *(_QWORD *)&v31 = *(_QWORD *)(a1 + 928);
      v32 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = &v30;
      v30 = v17;
      DWORD2(v31) = v16;
    }
    SecureDumpHeader = IopLiveDumpWriteSecondaryData(v3, a1);
    if ( SecureDumpHeader < 0 )
      goto LABEL_29;
    v18 = *(unsigned int *)(a1 + 888);
    v19 = ByteOffset;
    *(_DWORD *)(v1 + 4176) |= 0x10u;
    *(_QWORD *)(v1 + 4000) = v19.QuadPart - v18;
    *(_QWORD *)(v1 + 8232) = v14;
    *(_DWORD *)(v1 + 0x2000) = 1347241043;
    *(_DWORD *)(v1 + 8196) = 1347245380;
    if ( *(_BYTE *)(a1 + 880) )
    {
      v20 = *(unsigned int *)(a1 + 888);
      ByteOffset.QuadPart = v20;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x706D644Cu);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_29;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v1, PoolWithTag, *(_DWORD *)(a1 + 888));
      if ( SecureDumpHeader < 0 )
        goto LABEL_27;
    }
    else
    {
      ByteOffset.QuadPart = 0LL;
    }
    SecureDumpHeader = IopLiveDumpWriteBuffer(v3, (PVOID)v1, *(_DWORD *)(v1 + 8224), &ByteOffset, a1, 0);
    if ( *(_BYTE *)(a1 + 880) )
    {
      v22 = *(_DWORD *)(a1 + 888);
      ByteOffset.QuadPart = 0LL;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v3, v5, v22, &ByteOffset, a1, 1);
    }
LABEL_27:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    goto LABEL_29;
  }
  while ( 1 )
  {
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      break;
    v10 = v7 >= *(_QWORD *)(v2 + 56) - 1LL ? *(_DWORD *)(v2 + 40) << 12 : BufferChunkSizeInBytes;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v3, *(PVOID *)(*(_QWORD *)(v2 + 72) + 8 * v7), v10, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      break;
    v11 = *(struct _MDL **)(*(_QWORD *)(v2 + 80) + 8 * v7);
    if ( v11 )
    {
      MmFreePagesFromMdl(v11);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v2 + 80) + 8 * v7), 0);
      *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v7) = 0LL;
    }
    else
    {
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v7), (unsigned int)BufferChunkSizeInBytes);
    }
    *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v7++) = 0LL;
    CurrentThread = v25;
    if ( v7 >= *(_QWORD *)(v2 + 56) )
      goto LABEL_14;
  }
LABEL_29:
  IopLiveDumpFreeDumpBuffers(v2);
  return (unsigned int)SecureDumpHeader;
}
