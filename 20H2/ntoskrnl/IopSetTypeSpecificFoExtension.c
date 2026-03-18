/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140314B10
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140209778 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x140390974 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x1406BEC5C (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140896D1C (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 8 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
