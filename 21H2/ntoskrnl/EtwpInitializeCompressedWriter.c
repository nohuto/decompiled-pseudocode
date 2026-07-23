/*
 * XREFs of EtwpInitializeCompressedWriter @ 0x140948854
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140948E5C (EtwpSavePersistedLogger.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140290A50 (RtlGetCompressionWorkSpaceSize.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpInitializeCompressedWriter(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v8; // esi
  PVOID v9; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v12 = 0;
  LODWORD(NumberOfBytes) = 0;
  RtlGetCompressionWorkSpaceSize(3u, (PULONG)&NumberOfBytes, &v12);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x5A777445u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( PoolWithTag
    && (*(_DWORD *)(a1 + 16) = a2,
        *(_DWORD *)(a1 + 48) = 2 * a2,
        v8 = 2 * a2,
        v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x5A777445u),
        (*(_QWORD *)(a1 + 40) = v9) != 0LL) )
  {
    memset(v9, 0, v8);
    *(_QWORD *)a1 = a3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
