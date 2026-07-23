/*
 * XREFs of CcRemoveVacbArray @ 0x1404EB50C
 * Callers:
 *     CcDereferenceVacbArray @ 0x1404EB2E0 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

unsigned int *__fastcall CcRemoveVacbArray(unsigned int *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r10
  int v4; // r8d
  _QWORD *v5; // rcx
  int v6; // eax
  unsigned int *result; // rax
  __int64 v8; // r8
  unsigned int **v9; // rcx

  v1 = 0;
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x20DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *a1;
  if ( *(unsigned int **)(CcVacbArrays + 8 * v3) != a1 )
    KeBugCheckEx(0x34u, 0x213uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = CcVacbArraysHighestUsedIndex;
  if ( (_DWORD)v3 == CcVacbArraysHighestUsedIndex && CcVacbArraysHighestUsedIndex )
  {
    v5 = (_QWORD *)(CcVacbArrays + 8LL * (unsigned int)CcVacbArraysHighestUsedIndex);
    while ( !*v5 )
    {
      --v5;
      if ( !--v4 )
        goto LABEL_10;
    }
    CcVacbArraysHighestUsedIndex = v4;
  }
LABEL_10:
  v6 = CcVacbArraysAllocated;
  *(_QWORD *)(CcVacbArrays + 8 * v3) = 0LL;
  if ( !v6 )
    KeBugCheckEx(0x34u, 0x22FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcVacbArraysAllocated = v6 - 1;
  do
  {
    result = &a1[10 * v1 + 8];
    v8 = *(_QWORD *)result;
    if ( *(unsigned int **)(*(_QWORD *)result + 8LL) != result
      || (v9 = (unsigned int **)*((_QWORD *)result + 1), *v9 != result) )
    {
      __fastfail(3u);
    }
    ++v1;
    *v9 = (unsigned int *)v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  while ( v1 < 0xCCC );
  CcNumberOfFreeVacbs -= 3276;
  return result;
}
