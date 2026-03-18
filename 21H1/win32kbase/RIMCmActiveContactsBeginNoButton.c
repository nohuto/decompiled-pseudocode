/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C018655C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01620CC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0179E1C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C017A740 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C017F6B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017FDEC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C01864D8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 active; // rax
  __int64 v5; // xmm1_8
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  _BYTE v13[32]; // [rsp+38h] [rbp-20h] BYREF

  active = RIMCmActiveContactsBegin((__int64)&v11, a2);
  v5 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v5;
  v6 = RIMCmActiveContactsEnd(v13, a2);
  v7 = *(_OWORD *)v6;
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)v6;
  v12 = v8;
  v11 = v7;
  if ( (*(_QWORD *)a1 != v9 || *(_DWORD *)(a1 + 8) != DWORD2(v11) || *(_QWORD *)(a1 + 16) != v12)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    RIMCmActiveContactsNext(a2, a1);
  }
  return a1;
}
