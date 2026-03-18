/*
 * XREFs of ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QAEJKK@Z @ 0x1CFB53
 * Callers:
 *     ?DdcciSetVCPFeature@CMonitorAPI@@QAEJPAXKK@Z @ 0x1CFB02 (-DdcciSetVCPFeature@CMonitorAPI@@QAEJPAXKK@Z.c)
 * Callees:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciSetVCPFeature(CPhysicalMonitorHandle *this, char a2, __int16 a3)
{
  int v5; // [esp+4h] [ebp-8h] BYREF
  __int16 v6; // [esp+8h] [ebp-4h]
  char v7; // [esp+Ah] [ebp-2h]

  if ( GreIsInLowBox() )
    return -1073741790;
  v5 = unk_25CBE8;
  v6 = *((_WORD *)&unk_25CBE8 + 2);
  v7 = *((_BYTE *)&unk_25CBE8 + 6);
  HIBYTE(v5) = a2;
  LOBYTE(v6) = HIBYTE(a3);
  HIBYTE(v6) = a3;
  return CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, (union _LARGE_INTEGER)-500000LL, &v5, 7u);
}
