/*
 * XREFs of FsFilterCtrlInit @ 0x1402885A0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14028D3BC (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x1407F730C (FsRtlQueryOpen.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     FsFilterAllocateCompletionStack @ 0x140459984 (FsFilterAllocateCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v6; // edi
  unsigned __int16 v8; // ax
  void *v9; // rcx
  __int64 result; // rax

  v6 = 0;
  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)a1 = 64;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v8;
  *(_WORD *)(a1 + 74) = 0;
  if ( v8 <= 0xFu )
  {
    v9 = (void *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = v9;
    memset(v9, 0, 0x1E0uLL);
    *(_WORD *)(a1 + 72) = 15;
    return v6;
  }
  result = FsFilterAllocateCompletionStack(a1, a6);
  v6 = result;
  if ( (int)result >= 0 )
    return v6;
  return result;
}
