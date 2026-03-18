/*
 * XREFs of IoGetOplockFullFoExt @ 0x1402F5CCC
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x1402F5C84 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD **)(a1 + 208);
    if ( v2 )
    {
      if ( v2 != IopRevocationExtension )
        return v2[7];
    }
  }
  return result;
}
