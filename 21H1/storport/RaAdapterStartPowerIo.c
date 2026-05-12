/*
 * XREFs of RaAdapterStartPowerIo @ 0x1C0010E40
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0010CD8 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004DA4 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004E00 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C00070FC (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C00080AC (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000B710 (RaidZeroXrb.c)
 *     WPP_SF_qqD @ 0x1C0032120 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaAdapterStartPowerIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ebp

  v5 = *(_QWORD *)(a4 + 16);
  v7 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  RaidZeroXrb(v5, a2, 0, 0LL);
  v11 = *(_BYTE *)(v5 + 16);
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 160) = a2;
  *(_BYTE *)(v5 + 16) = v11 & 0xE3 | 4;
  *(_QWORD *)(v5 + 168) = a3;
  *(_QWORD *)(v5 + 216) = v7;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v10 = a3;
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 96) = v5;
    *(_QWORD *)(a3 + 80) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 48) = v5;
  }
  RaSrbSetMiniportContext(v7, a3, *(_QWORD *)(a4 + 8));
  *(_QWORD *)(v5 + 656) = a5;
  if ( *(_BYTE *)(v7 + 4514) )
    v13 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v5);
  else
    v13 = RaidAdapterExecuteXrb(v7, (_QWORD *)v5, v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
    {
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(v5 + 184);
    }
    else
    {
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(v5 + 176);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(v5 + 184);
    }
    RaidXrbDeallocateResources(v5, 0);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        10LL,
        &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids,
        v7,
        a2,
        *(_DWORD *)(a2 + 48));
    }
  }
  return v14;
}
