/*
 * XREFs of ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C00188F4
 * Callers:
 *     NtUserDestroyActivationObject @ 0x1C0005180 (NtUserDestroyActivationObject.c)
 *     ?QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInformation@@@Z @ 0x1C001880C (-QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInforma.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0132B20 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0132CE0 (-GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0132D6C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 * Callees:
 *     <none>
 */

struct CActivationObject *__fastcall CActivationObjectManager::GetActivationObjectFromLuid(
        CActivationObjectManager *this,
        const struct _LUID *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi

  v2 = *((_DWORD *)this + 5);
  v3 = 0LL;
  v4 = 0LL;
  v5 = -1LL << (*((_BYTE *)this + 20) & 0x1F);
  v6 = v5 & (HIBYTE(a2->HighPart)
           + 37
           * (BYTE2(a2->HighPart)
            + 37
            * (BYTE1(a2->HighPart)
             + 37
             * (LOBYTE(a2->HighPart)
              + 37
              * (HIBYTE(a2->LowPart)
               + 37 * (BYTE2(a2->LowPart) + 37 * (BYTE1(a2->LowPart) + 37 * (LOBYTE(a2->LowPart) + 11623883LL))))))));
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_5;
    if ( !(v2 >> 5) )
      return (struct CActivationObject *)v3;
    v4 = *((_QWORD *)this + 3)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & ((v2 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v4 + 8)) )
        goto LABEL_7;
    }
    v4 = 0LL;
LABEL_7:
    if ( !v4 )
      return (struct CActivationObject *)v3;
    if ( a2->LowPart == *(_DWORD *)(v4 + 56) && a2->HighPart == *(_DWORD *)(v4 + 60) )
      return (struct CActivationObject *)(v4 - 8);
  }
}
