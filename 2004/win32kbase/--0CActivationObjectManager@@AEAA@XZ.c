/*
 * XREFs of ??0CActivationObjectManager@@AEAA@XZ @ 0x1C003569C
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 * Callees:
 *     ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C005CDBC (-CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z.c)
 */

CActivationObjectManager *__fastcall CActivationObjectManager::CActivationObjectManager(CActivationObjectManager *this)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 8) = 2;
  qword_1C02504D0 = 0LL;
  qword_1C02504D8 = 0LL;
  v3 = 1;
  *(_BYTE *)(ExActivationObjectType + 66LL) |= 0x10u;
  *(_QWORD *)(ExActivationObjectType + 104LL) = 96LL;
  *(_DWORD *)(ExActivationObjectType + 92LL) = 983043;
  *(_OWORD *)(ExActivationObjectType + 76LL) = ACTIVATIONOBJECTRights;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  CActivationObjectManager::CreateActivationGroupWithId(this, (const struct ACTIVATION_GROUP_ID *)&v3);
  return this;
}
