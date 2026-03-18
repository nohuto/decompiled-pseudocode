/*
 * XREFs of ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C003B190
 * Callers:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C003ABA4 (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C003AF98 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall compModeCap(struct tagModeCap *a1, struct tagModeCap *a2)
{
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
    return (unsigned int)(*((_DWORD *)a1 + 1) - *((_DWORD *)a2 + 1));
  else
    return (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)a2);
}
