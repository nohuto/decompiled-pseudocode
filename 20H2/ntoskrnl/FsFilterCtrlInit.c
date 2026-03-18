/*
 * XREFs of FsFilterCtrlInit @ 0x1402A02D0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140344298 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140344550 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlQueryOpen @ 0x1405D6010 (FsRtlQueryOpen.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140680470 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407080AC (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     FsFilterAllocateCompletionStack @ 0x1404EF51C (FsFilterAllocateCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v6; // edi
  unsigned __int16 v8; // ax
  void *v9; // rcx
  unsigned int v10; // eax
  __int64 result; // rax
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)a1 = 64;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  v12 = 0;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v8;
  *(_WORD *)(a1 + 74) = 0;
  if ( v8 <= 0xFu )
  {
    v9 = (void *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = v9;
    v10 = 480;
    *(_WORD *)(a1 + 72) = 15;
LABEL_3:
    memset(v9, 0, v10);
    return v6;
  }
  result = FsFilterAllocateCompletionStack(a1, a6, &v12);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v9 = *(void **)(a1 + 80);
    v10 = v12;
    goto LABEL_3;
  }
  return result;
}
