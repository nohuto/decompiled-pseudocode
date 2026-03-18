/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140305BE0
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x14025AFA8 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140281A24 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x14038D914 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x1406C9A54 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14088FF0C (IopSetFileMemoryPartitionInformation.c)
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
