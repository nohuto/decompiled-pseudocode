/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E0C4C
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E0BC8 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180185F7C (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}
