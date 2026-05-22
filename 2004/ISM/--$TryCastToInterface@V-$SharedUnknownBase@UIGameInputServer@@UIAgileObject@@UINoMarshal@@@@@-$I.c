/*
 * XREFs of ??$TryCastToInterface@V?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@@?$InterfaceIterator@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@SAPEAXPEAV1@AEBU_GUID@@@Z @ 0x18004208C
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042C20 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::InterfaceIterator<IGameInputServer,IAgileObject,INoMarshal>::TryCastToInterface<SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  if ( *a2 == *(_QWORD *)&GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data1
    && a2[1] == *(_QWORD *)GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data4 )
  {
    v2 = a1 + 16;
  }
  else if ( *a2 == *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1
         && a2[1] == *(_QWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
  {
    v2 = a1 + 24;
  }
  else
  {
    if ( *a2 != *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1
      || a2[1] != *(_QWORD *)GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data4 )
    {
      return 0LL;
    }
    v2 = a1 + 32;
  }
  return v2 & -(__int64)(a1 != 0);
}
