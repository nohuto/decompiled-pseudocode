/*
 * XREFs of ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800DB8B8
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800DB244 (--1CInteraction@@MEAA@XZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801CAFB0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteraction::IsDefaultInteractionStateLocked(CInteraction *this)
{
  int v1; // eax
  CInteraction **v3; // rdx

  v1 = 0;
  if ( dword_18034D4B8 > 0 )
  {
    v3 = (CInteraction **)CInteraction::s_DefaultStateLockedInteractions;
    while ( *v3 != this )
    {
      ++v1;
      ++v3;
      if ( v1 >= dword_18034D4B8 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v1 = -1;
  }
  return v1 != -1;
}
