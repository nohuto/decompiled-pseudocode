/*
 * XREFs of IopSymlinkSetFoExtension @ 0x14069BA2C
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1407035D0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14022C1D0 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1402B7F84 (IopSetTypeSpecificFoExtension.c)
 *     IopGetFileObjectExtension @ 0x1403567E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IopSymlinkSetFoExtension(__int64 a1, signed __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 5, &v4);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v4);
    if ( (int)result < 0 )
      return result;
  }
  return IopSetTypeSpecificFoExtension(v4, 5u, a2);
}
