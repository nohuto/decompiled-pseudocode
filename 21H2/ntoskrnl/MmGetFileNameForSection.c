/*
 * XREFs of MmGetFileNameForSection @ 0x14096B158
 * Callers:
 *     DbgkpSectionToFileHandle @ 0x14092AAC4 (DbgkpSectionToFileHandle.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForSection(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  PVOID Pool; // rax
  unsigned __int64 v8; // r14
  char *v9; // rsi
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebp
  PVOID v13; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v14 = 0;
  *a2 = 0LL;
  if ( (v2 & 0x20) == 0 )
    return 3221225545LL;
  Pool = MiAllocatePool(256, 0x400uLL, 0x20206D4Du);
  *a2 = (__int64)Pool;
  if ( !Pool )
    return 3221225495LL;
  v8 = MiSectionControlArea(a1);
  v9 = (char *)MiReferenceControlAreaFile(v8);
  v10 = ObQueryNameStringMode(v9, *a2, 0x400u, &v14, 0);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_11;
  if ( v10 == -1073741820 )
  {
    ExFreePoolWithTag((PVOID)*a2, 0);
    v12 = v14 + 1024;
    if ( v14 >= 0xFFFFFC00 || v14 == 0 )
    {
      *a2 = 0LL;
      MiDereferenceControlAreaFile(v8, (unsigned __int64)v9);
      return 3221225495LL;
    }
    v13 = MiAllocatePool(256, v12, 0x20206D4Du);
    *a2 = (__int64)v13;
    if ( !v13 )
    {
      v3 = -1073741801;
LABEL_11:
      MiDereferenceControlAreaFile(v8, (unsigned __int64)v9);
      return v3;
    }
    v11 = ObQueryNameStringMode(v9, (__int64)v13, v12, &v14, 0);
    if ( v11 >= 0 )
      goto LABEL_11;
  }
  MiDereferenceControlAreaFile(v8, (unsigned __int64)v9);
  ExFreePoolWithTag((PVOID)*a2, 0);
  result = (unsigned int)v11;
  *a2 = 0LL;
  return result;
}
