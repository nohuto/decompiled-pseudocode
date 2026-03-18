/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800DCCBC
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800DCC38 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180229CDC (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 8);
}
