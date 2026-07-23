/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x1408BF36C
 * Callers:
 *     KeSetTracepoint @ 0x1408BEBD0 (KeSetTracepoint.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402FE1D0 (RtlSectionTableFromVirtualAddress.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1408BF2BC (KiTpIsExcludedKernelTracepointLocation.c)
 */

_BOOL8 __fastcall KiTpIsSupportedKernelTracepointLocation(PVOID BaseOfImage, unsigned __int64 a2)
{
  _IMAGE_NT_HEADERS64 *v4; // rax
  PIMAGE_SECTION_HEADER v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // dl

  v4 = RtlImageNtHeader(BaseOfImage);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress(v4, BaseOfImage, (int)a2 - (int)BaseOfImage);
  if ( !v5 )
    return 0LL;
  if ( (v5->Characteristics & 0x2000020) != 0x20 )
    return 0LL;
  v6 = *(_DWORD *)v5->Name;
  if ( *(_DWORD *)v5->Name == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)&v5->Name[4] )
  {
    v7 = v5->Name[4];
    if ( v7 == 119 )
    {
      if ( v5->Name[5] == 120 )
        return 0LL;
    }
    else if ( v7 == 86 && v5->Name[5] == 82 && v5->Name[6] == 70 )
    {
      return 0LL;
    }
  }
  return BaseOfImage != PsHalImageBase
      && (BaseOfImage != PsNtosImageBase
       || v6 != 1128354388 && v6 != 1347769157 && !(unsigned int)KiTpIsExcludedKernelTracepointLocation(a2));
}
