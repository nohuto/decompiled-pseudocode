/*
 * XREFs of ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QAEJXZ @ 0x1CF9E3
 * Callers:
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QAEJPAX@Z @ 0x1CF998 (-DdcciSaveCurrentSettings@CMonitorAPI@@QAEJPAX@Z.c)
 * Callees:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciSaveCurrentSettings(CPhysicalMonitorHandle *this)
{
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( GreIsInLowBox() )
    return -1073741790;
  v3 = -1307803311;
  return CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, (union _LARGE_INTEGER)-2000000LL, &v3, 4u);
}
