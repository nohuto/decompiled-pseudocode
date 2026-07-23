/*
 * XREFs of IommuMapLogicalRange @ 0x1404DABD0
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x1404DA470 (IommupHvMapDeviceLogical.c)
 *     IommuUnmapLogicalRange @ 0x1404DAFE0 (IommuUnmapLogicalRange.c)
 *     IommupValidateMdl @ 0x1404DB024 (IommupValidateMdl.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC44C (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall IommuMapLogicalRange(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  unsigned __int64 v12; // r8
  int v13; // edi
  __int64 v14; // r14
  int v15; // eax
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 44) )
    return 3221225711LL;
  if ( !(unsigned __int8)IommupValidateMdl(a3) )
    return 3221225713LL;
  if ( (a4 & 0xFFF) != 0 )
    return 3221225714LL;
  v9 = (unsigned __int64)*(unsigned int *)(v8 + 40) >> 12;
  v10 = v8 + 8 * ((unsigned __int64)*(unsigned int *)(v8 + 44) >> 12);
  if ( HalpHvIommu )
  {
    v16 = (unsigned __int64)*(unsigned int *)(v8 + 40) >> 12;
    v11 = IommupHvMapDeviceLogical(a1, a2, v10 + 48, (__int64)&v16, a4);
    v12 = v16;
    v13 = v11;
LABEL_12:
    if ( v13 >= 0 )
      return (unsigned int)v13;
    goto LABEL_13;
  }
  v12 = 0LL;
  v13 = 0;
  v16 = 0LL;
  v14 = a4;
  if ( v9 )
  {
    while ( 1 )
    {
      v15 = HalpIommuMapLogicalRange(
              0,
              *(_QWORD *)(a1 + 24),
              a2,
              (unsigned int)*(_QWORD *)(v10 + 8 * v12 + 48) << 12,
              4096LL,
              v14);
      v12 = v16;
      v13 = v15;
      if ( v15 < 0 )
        break;
      v12 = v16 + 1;
      v14 += 4096LL;
      ++v16;
      if ( !--v9 )
        goto LABEL_12;
    }
LABEL_13:
    IommuUnmapLogicalRange(a1, a4, v12);
  }
  return (unsigned int)v13;
}
