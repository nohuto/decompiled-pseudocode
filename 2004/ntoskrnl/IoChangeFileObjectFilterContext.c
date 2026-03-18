/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x14022896C
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x140333150 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406DBE80 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r10
  char v2; // r11
  bool v3; // zf
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL, &v5);
  if ( v2 )
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 32), v1, 0LL) == 0;
  else
    v3 = v1 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 32), 0LL, v1);
  if ( v3 )
    return 0LL;
  else
    return 3221225505LL;
}
