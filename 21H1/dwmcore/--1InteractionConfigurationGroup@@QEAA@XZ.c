/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x180099E18
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x180099E50 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18022C69C (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 8);
}
