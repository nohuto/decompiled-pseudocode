/*
 * XREFs of PnpIsAnyDeviceInUse @ 0x1403A56FC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x1403A55B8 (PnpIsChainDereferenced.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpIsAnyDeviceInUse(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx
  int v4; // ecx

  v3 = *a1;
  v4 = 0;
  while ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 )
      break;
    v3 = *(_QWORD *)(v3 + 24);
  }
  if ( a3 )
    *a3 = v3;
  return v4 != 0;
}
