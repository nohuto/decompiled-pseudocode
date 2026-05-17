/*
 * XREFs of _RtlpQueryCriticalSectionOwnerInformation@8 @ 0x4B337A1F
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0 (_RtlQueryCriticalSectionOwner@8.c)
 */

int __fastcall RtlpQueryCriticalSectionOwnerInformation(int a1, __int16 a2)
{
  int v2; // esi

  v2 = 0;
  *(_DWORD *)(a1 + 84) = 0;
  if ( !*(_DWORD *)(a1 + 80) )
    return -1073741811;
  *(_DWORD *)(a1 + 84) = RtlQueryCriticalSectionOwner(*(_DWORD *)(a1 + 80), (a2 & 0x800) != 0);
  return v2;
}
