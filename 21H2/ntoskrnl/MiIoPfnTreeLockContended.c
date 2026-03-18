/*
 * XREFs of MiIoPfnTreeLockContended @ 0x1403A5C24
 * Callers:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140591AD0 (MiMarkHugeRangeIoPfnDeleted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPfnTreeLockContended(char a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 0;
  if ( !a1 )
    return (*(_DWORD *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1561) + 128LL) >> 30) & 1;
  if ( !KeNumberNodes )
    return 0LL;
  for ( i = qword_140C506E0 + 112; (*(_DWORD *)(*(_QWORD *)i + 128LL) & 0x40000000) == 0; i += 120LL )
  {
    if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return 1LL;
}
