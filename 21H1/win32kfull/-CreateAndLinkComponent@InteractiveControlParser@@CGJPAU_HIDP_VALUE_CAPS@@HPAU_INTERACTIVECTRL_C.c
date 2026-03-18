/*
 * XREFs of ?CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_CAPABILITIES@@PAPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1B5AB3
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractiveControlDevice@@@Z @ 0x1B5646 (-BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractive.c)
 * Callees:
 *     ?GetComponentMultiplier@InteractiveControlParser@@SGXPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PAJ1@Z @ 0x1B5DDA (-GetComponentMultiplier@InteractiveControlParser@@SGXPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PAJ1.c)
 *     ?GetComponentType@InteractiveControlParser@@CG?AW4_INTERACTIVECTRL_COMPONENT_TYPE@@GG@Z @ 0x1B5E7F (-GetComponentType@InteractiveControlParser@@CG-AW4_INTERACTIVECTRL_COMPONENT_TYPE@@GG@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36 (-GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z.c)
 */

int __userpurge InteractiveControlParser::CreateAndLinkComponent@<eax>(
        int a1@<edx>,
        _WORD *a2@<ecx>,
        struct _HIDP_VALUE_CAPS *a3,
        ULONG *a4,
        struct _INTERACTIVECTRL_CAPABILITIES *a5,
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY **a6)
{
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  ULONG v10; // ebx
  ULONG *p_Units; // eax
  ULONG Units; // ecx
  struct _HIDP_VALUE_CAPS *v13; // eax
  __int16 v14; // cx
  int *v16; // [esp+0h] [ebp-18h]
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v17; // [esp+0h] [ebp-18h]
  int *v18; // [esp+4h] [ebp-14h]
  int v19; // [esp+4h] [ebp-14h]
  _WORD *v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int ComponentType; // [esp+14h] [ebp-4h]

  v6 = a2;
  v7 = a1;
  v8 = 0;
  v21 = a1;
  v20 = a2;
  LOWORD(a1) = a2[28];
  LOWORD(a2) = *a2;
  *a4 = 0;
  ComponentType = InteractiveControlParser::GetComponentType(a2, a1);
  if ( !ComponentType )
  {
    *(_DWORD *)&a3[1].NotRange.DataIndex = 1;
    return v8;
  }
  if ( v7 || (v9 = v6[12], v9 != v6[13]) || v6[10] != v6[11] || v9 )
  {
    v10 = Win32AllocPoolZInit(124, 1819440195);
    if ( !v10 )
      return -1073741670;
    p_Units = &a3[1].Units;
    Units = a3[1].Units;
    if ( *(struct _HIDP_VALUE_CAPS **)(Units + 4) != (struct _HIDP_VALUE_CAPS *)&a3[1].Units )
      __fastfail(3u);
    *(_DWORD *)(v10 + 4) = p_Units;
    *(_DWORD *)v10 = Units;
    *(_DWORD *)(Units + 4) = v10;
    *p_Units = v10;
    switch ( ComponentType )
    {
      case 1:
        *(_DWORD *)(v10 + 88) = 2;
        break;
      case 5:
        v14 = *((_WORD *)v6 + 28);
        if ( (unsigned __int16)(v14 - 1) <= 4u )
        {
          v13 = a3;
          *(_DWORD *)(v10 + 88) = 4 << (v14 - 1);
          if ( *((_WORD *)v6 + 28) == 2 )
          {
            *(_DWORD *)(v10 + 88) = 128;
            *(_DWORD *)&a3[2].UsagePage = 1;
          }
          goto LABEL_22;
        }
        break;
      case 7:
        if ( *(_WORD *)v6 == 13 )
        {
          v13 = a3;
          if ( *((_WORD *)v6 + 28) == 51 )
            *(_DWORD *)(v10 + 88) = 1;
          goto LABEL_22;
        }
        break;
      default:
        *(_DWORD *)(v10 + 88) = 0;
        break;
    }
    v13 = a3;
LABEL_22:
    *(_DWORD *)(v10 + 8) = ComponentType;
    *(_DWORD *)(v10 + 12) = *((_DWORD *)&v13->NotRange.DataIndex + ComponentType);
    qmemcpy((void *)(v10 + 16), v6, 0x48u);
    ++*((_DWORD *)&a3->NotRange.DataIndex + ComponentType);
    ++a3[1].UnitsExp;
    *(_DWORD *)(v10 + 116) = 1;
    *(_DWORD *)(v10 + 104) = 1;
    *(_DWORD *)(v10 + 100) = 1;
    if ( !v21 )
    {
      InteractiveControlParser::GetComponentMultiplier(
        (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)(v10 + 112),
        v16,
        v18);
      *(_DWORD *)(v10 + 104) = InteractiveControlParser::GetScaledComponentValue(v17, v19);
    }
    if ( *(_DWORD *)(v10 + 8) == 8 && *((_DWORD *)v20 + 10) == *((_DWORD *)v20 + 11) )
      *(_DWORD *)(v10 + 92) = 1;
    v8 = 0;
    *a4 = v10;
  }
  return v8;
}
