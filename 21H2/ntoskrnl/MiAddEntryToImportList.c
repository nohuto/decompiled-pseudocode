/*
 * XREFs of MiAddEntryToImportList @ 0x140545788
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     MiCompressImportList @ 0x14075DB10 (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x14075DC24 (MiAllocateImportList.c)
 */

__int64 __fastcall MiAddEntryToImportList(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  _QWORD *v6; // rsi
  unsigned __int64 *v7; // rcx

  if ( a1 == (__int64 *)-2LL )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = 1LL;
    if ( ((unsigned __int8)a1 & 1) == 0 )
      v4 = *a1;
  }
  result = MiAllocateImportList(v4 + 1);
  v6 = (_QWORD *)result;
  if ( result )
  {
    if ( v4 )
    {
      v7 = (unsigned __int64 *)(result + 8);
      if ( ((unsigned __int8)a1 & 1) != 0 )
        *v7 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        memmove(v7, a1 + 1, 8 * v4);
    }
    v6[v4 + 1] = a2;
    return MiCompressImportList(v6);
  }
  return result;
}
