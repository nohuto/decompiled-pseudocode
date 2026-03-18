/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140343690
 * Callers:
 *     IopGetSetSpecificExtension @ 0x1402289D4 (IopGetSetSpecificExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x140297828 (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14038E484 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x1406EAC04 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089122C (IopSetFileMemoryPartitionInformation.c)
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
