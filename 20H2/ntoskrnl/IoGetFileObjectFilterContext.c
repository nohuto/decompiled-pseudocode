/*
 * XREFs of IoGetFileObjectFilterContext @ 0x14020B550
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x14020AF80 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x14030DF20 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1405FE100 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14029FD20 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileObjectFilterContext(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax

  v4 = *(_QWORD **)(a1 + 208);
  v5 = 0LL;
  if ( v4 )
    goto LABEL_2;
  if ( !(_BYTE)a3 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  result = IopAllocateFileObjectExtension(a1, 0LL, a3, a4);
  if ( (int)result >= 0 )
  {
    v4 = *(_QWORD **)(a1 + 208);
    if ( !v4 )
    {
LABEL_4:
      result = 0LL;
      goto LABEL_5;
    }
LABEL_2:
    if ( v4 != IopRevocationExtension )
      v5 = v4[4];
    goto LABEL_4;
  }
LABEL_5:
  *a2 = v5;
  return result;
}
