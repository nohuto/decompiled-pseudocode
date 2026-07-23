/*
 * XREFs of MiShareExistingControlArea @ 0x14071F1CC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     PsIsCurrentThreadPrefetching @ 0x1402253E0 (PsIsCurrentThreadPrefetching.c)
 *     MmChangeSectionBackingFile @ 0x140241634 (MmChangeSectionBackingFile.c)
 *     IoSetTopLevelIrp @ 0x140361970 (IoSetTopLevelIrp.c)
 *     MiValidateControlAreaPartition @ 0x140361F84 (MiValidateControlAreaPartition.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     MiValidateExistingImage @ 0x1406C24AC (MiValidateExistingImage.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiShareExistingControlArea(__int64 a1)
{
  __int64 v1; // rsi
  struct _FILE_OBJECT *v3; // rdi
  int v4; // ebp
  __int64 v5; // rbp
  NTSTATUS v6; // esi
  LARGE_INTEGER v7; // rax
  __int64 result; // rax
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER FileSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  FileSize.QuadPart = 0LL;
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v4 = MiValidateControlAreaPartition(a1, v1);
  if ( v4 < 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v4;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
      MmChangeSectionBackingFile(0LL, v3, ((*(_DWORD *)(a1 + 16) & 0x1000000) != 0) + 1);
    *(_DWORD *)a1 |= 4u;
    v5 = *(_QWORD *)v1;
    if ( (*(_DWORD *)a1 & 1) == 0 && (*(_BYTE *)(v1 + 56) & 0x20) == 0 )
    {
      v6 = FsRtlGetFileSize(v3, &FileSize);
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
      if ( v6 < 0 )
        return (unsigned int)v6;
      v7 = FileSize;
      if ( !FileSize.QuadPart && !*(_QWORD *)(a1 + 152) )
        return 3221225758LL;
    }
    else
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v3);
        *(_DWORD *)a1 &= ~2u;
      }
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        result = MiValidateExistingImage((unsigned int *)a1);
        if ( (int)result < 0 )
          return result;
      }
      v7.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), -1LL, -1LL);
    }
    v9 = *(LARGE_INTEGER *)(a1 + 152);
    if ( v9.QuadPart )
    {
      if ( v7.QuadPart < (unsigned __int64)v9.QuadPart )
      {
        if ( (*(_DWORD *)(a1 + 28) & 0x44) == 0 )
          return 3221225536LL;
      }
      else
      {
        *(_DWORD *)a1 |= 8u;
      }
      *(LARGE_INTEGER *)(a1 + 128) = v9;
    }
    else
    {
      *(_DWORD *)a1 |= 8u;
      *(LARGE_INTEGER *)(a1 + 128) = v7;
    }
    return 0LL;
  }
}
