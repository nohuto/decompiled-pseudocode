/*
 * XREFs of PiDmCacheDataFree @ 0x14074A884
 * Callers:
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063704C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A454 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmCacheDataFree(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1 - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
      PiDmObjectRelease(*(unsigned int **)(a1 + 16));
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x5A706E50u);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
