/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C018085C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015BD7C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015C704 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0173AEC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0174410 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01799B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017A0EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017D10C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C01807D8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C01808F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0180944 (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF

  active = RIMCmActiveContactsBegin((__int64)&v13, a2, a3, a4);
  v7 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v7;
  v8 = RIMCmActiveContactsEnd(v15, a2);
  v9 = *(_OWORD *)v8;
  v10 = *(_QWORD *)(v8 + 16);
  v11 = *(_QWORD *)v8;
  v14 = v10;
  v13 = v9;
  if ( (*(_QWORD *)a1 != v11 || *(_DWORD *)(a1 + 8) != DWORD2(v13) || *(_QWORD *)(a1 + 16) != v14)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    RIMCmActiveContactsNext(a2, a1);
  }
  return a1;
}
