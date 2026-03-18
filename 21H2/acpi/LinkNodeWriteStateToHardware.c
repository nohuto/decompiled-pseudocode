/*
 * XREFs of LinkNodeWriteStateToHardware @ 0x1C009CB64
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009A2E0 (IrqArbCommitAllocation.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     LinkNodepRunSrs @ 0x1C00B6110 (LinkNodepRunSrs.c)
 */

__int64 LinkNodeWriteStateToHardware()
{
  __int64 v0; // rbx
  __int64 *i; // rax
  __int64 result; // rax
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rdi

  v0 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v0 = (__int64)(i - 7) )
  {
    if ( *(_DWORD *)(v0 + 28) )
    {
      if ( !*(_DWORD *)(v0 + 24) || *(_DWORD *)(v0 + 36) != *(_DWORD *)(v0 + 32) )
      {
        result = LinkNodepRunSrs(*(_QWORD *)(v0 + 600), *(unsigned int *)(v0 + 36));
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( *(_DWORD *)(v0 + 24) )
    {
      v3 = AMLIGetNamedChild(*(__int64 **)(v0 + 600), 1397310559);
      v4 = (volatile signed __int32 *)v3;
      if ( v3 )
      {
        AMLIEvalNameSpaceObject(v3, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v4);
      }
    }
    i = *(__int64 **)(v0 + 56);
  }
  return 0LL;
}
