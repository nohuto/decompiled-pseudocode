/*
 * XREFs of _GreDeleteServerMetaFile@4 @ 0x21EDBC
 * Callers:
 *     _vCleanupMetaType@4 @ 0xD4406 (_vCleanupMetaType@4.c)
 *     _FreeDdeXact@4 @ 0x17FF12 (_FreeDdeXact@4.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall GreDeleteServerMetaFile(void *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = HmgLock(this, 21);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 16);
  if ( v2 != 1599096397 && v2 != 1480934989 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 8));
    return 0;
  }
  HmgFree(*(_DWORD *)v1);
  return 1;
}
