/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x14075228C
 * Callers:
 *     IoTranslateBusAddress @ 0x14050CD40 (IoTranslateBusAddress.c)
 *     PnpReleaseResourcesInternal @ 0x140750F94 (PnpReleaseResourcesInternal.c)
 *     IopChildToRootTranslation @ 0x140751614 (IopChildToRootTranslation.c)
 *     IopSetupArbiterAndTranslators @ 0x140751E1C (IopSetupArbiterAndTranslators.c)
 *     IopDuplicateDetection @ 0x1407AF074 (IopDuplicateDetection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(unsigned int a1, unsigned int a2)
{
  PVOID v2; // r8
  int v4; // eax
  _QWORD **v5; // r10
  _QWORD *i; // rax

  v2 = IopRootDeviceNode;
  if ( a1 != 15 && a1 <= 0x11 )
  {
    v4 = 1;
    if ( a1 != 2 )
      v4 = a1;
    v5 = (_QWORD **)((char *)&IopLegacyBusInformationTable + 16 * v4);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a2 )
        return i - 78;
      if ( *((_DWORD *)i - 43) > a2 )
        return v2;
    }
  }
  return v2;
}
