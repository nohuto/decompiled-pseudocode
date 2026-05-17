/*
 * XREFs of _LdrResolveDelayLoadsFromDll@12 @ 0x4B32F670
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpResolveDelayLoadDescriptor@8 @ 0x4B2CE4C8 (_LdrpResolveDelayLoadDescriptor@8.c)
 *     _LdrpGetDelayloadDescriptor@8 @ 0x4B32F7C7 (_LdrpGetDelayloadDescriptor@8.c)
 */

int __stdcall LdrResolveDelayLoadsFromDll(_BYTE *a1, int a2, int a3)
{
  int DelayloadDescriptor; // eax

  if ( a3 )
    return -1073741811;
  DelayloadDescriptor = LdrpGetDelayloadDescriptor(a1);
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor(a1, DelayloadDescriptor);
  else
    return -1073741515;
}
