/*
 * XREFs of IommuGetLibraryContext @ 0x1405263E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     IommupGetSystemContext @ 0x1403DB0A0 (IommupGetSystemContext.c)
 */

__int64 __fastcall IommuGetLibraryContext(int a1, unsigned int a2, _QWORD *a3)
{
  PVOID *SystemContext; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  _QWORD *v11; // rcx

  *a3 = 0LL;
  SystemContext = IommupGetSystemContext(a2);
  v9 = HalpMmAllocCtxAlloc(v7, 56LL);
  if ( !v9 )
    return 3221225626LL;
  v11 = (_QWORD *)HalpMmAllocCtxAlloc(v8, 16LL);
  if ( !v11 )
  {
    HalpMmAllocCtxFree(0LL, v9);
    return 3221225626LL;
  }
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 48) = v9 + 40;
  *(_QWORD *)(v9 + 40) = v9 + 40;
  result = 0LL;
  *(_DWORD *)(v9 + 16) = a1;
  *(_DWORD *)(v9 + 20) = a2;
  *v11 = SystemContext;
  v11[1] = v9;
  *a3 = v11;
  return result;
}
