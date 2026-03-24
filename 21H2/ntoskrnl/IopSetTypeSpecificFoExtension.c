/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x1402B7F84
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140206288 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140356AE8 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x140390E44 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x14069BA2C (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1408942EC (IopSetFileMemoryPartitionInformation.c)
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
