/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x14029F890
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x14020AF80 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1405FE100 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  signed __int64 v3; // r11
  char v4; // r10
  bool v5; // zf
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL, &v7, a2);
  if ( v4 )
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 32), v2, 0LL) == 0;
  else
    v5 = v2 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 32), v3, v2);
  if ( v5 )
    return 0LL;
  else
    return 3221225505LL;
}
