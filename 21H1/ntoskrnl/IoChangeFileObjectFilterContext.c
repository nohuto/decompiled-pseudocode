/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x1402819BC
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x1402F62B0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406BAB70 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r10
  char v2; // r11
  bool v3; // zf

  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL);
  if ( v2 )
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)0x20, v1, 0LL) == 0;
  else
    v3 = v1 == _InterlockedCompareExchange64((volatile signed __int64 *)0x20, 0LL, v1);
  if ( v3 )
    return 0LL;
  else
    return 3221225505LL;
}
