/*
 * XREFs of _RtlpQueryCriticalSectionOwnerInformation@8 @ 0x4B337A1F
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0 (_RtlQueryCriticalSectionOwner@8.c)
 */

int __thiscall RtlpQueryCriticalSectionOwnerInformation(int this)
{
  int v1; // esi

  v1 = 0;
  *(_DWORD *)(this + 84) = 0;
  if ( !*(_DWORD *)(this + 80) )
    return -1073741811;
  *(_DWORD *)(this + 84) = RtlQueryCriticalSectionOwner(*(HANDLE *)(this + 80));
  return v1;
}
