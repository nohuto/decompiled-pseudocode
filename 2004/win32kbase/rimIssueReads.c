/*
 * XREFs of rimIssueReads @ 0x1C00AB7E4
 * Callers:
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 * Callees:
 *     rimStartDeviceReadIfAllowed @ 0x1C00051D8 (rimStartDeviceReadIfAllowed.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00565E0 (RimInputTypeToDeviceType.c)
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IfAllowed; // ebp
  unsigned int v5; // esi
  int v6; // r15d
  __int64 i; // rdi
  int v9; // r14d
  __int64 v10; // rdi
  unsigned int v11; // eax

  IfAllowed = 0;
  if ( *(_DWORD *)(a1 + 84) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 84) & DeviceTypeToRimInputType(v5, a2, a3);
      if ( v6 )
        break;
LABEL_4:
      if ( ++v5 > 2 )
        return IfAllowed;
    }
    for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      v9 = *(unsigned __int8 *)(i + 48);
      if ( (_BYTE)v9 != 3 )
      {
        if ( v5 != 2 )
        {
          if ( v9 != (unsigned int)RimInputTypeToDeviceType(v6) )
            continue;
LABEL_11:
          IfAllowed = rimStartDeviceReadIfAllowed(a1, i);
          continue;
        }
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2) & *(_DWORD *)(a1 + 84)) != 0 )
          goto LABEL_11;
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 424);
  while ( v10 )
  {
    v11 = rimStartDeviceReadIfAllowed(a1, v10);
    v10 = *(_QWORD *)(v10 + 40);
    IfAllowed = v11;
  }
  return IfAllowed;
}
