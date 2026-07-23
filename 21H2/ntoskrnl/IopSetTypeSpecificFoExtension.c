/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140236194
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x1402AABB8 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x140390F94 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x1405FABEC (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089444C (IopSetFileMemoryPartitionInformation.c)
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
