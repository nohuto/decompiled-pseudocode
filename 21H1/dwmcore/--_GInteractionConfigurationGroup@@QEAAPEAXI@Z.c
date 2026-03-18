/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18022C69C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18022C80C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x180238FF8 (RemoveCountFromEndOfArrayAndFree.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x180099E18 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

InteractionConfigurationGroup *__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(
        InteractionConfigurationGroup *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this);
  return this;
}
