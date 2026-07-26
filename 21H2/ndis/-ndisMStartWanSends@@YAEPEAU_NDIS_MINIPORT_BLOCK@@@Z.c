/*
 * XREFs of ?ndisMStartWanSends@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C28F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall ndisMStartWanSends(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_PacketList; // rsi
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v4; // rax
  _LIST_ENTRY *Blink; // rcx
  int v6; // eax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0xAu,
      (struct _GUID *)&WPP_d9cd2507b37b370d30083b2d3aaa2c43_Traceguids,
      a1);
  p_PacketList = &a1->PacketList;
  while ( 1 )
  {
    Flink = p_PacketList->Flink;
    if ( p_PacketList->Flink == p_PacketList )
      break;
    v4 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v4;
    v4->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v6 = ((__int64 (__fastcall *)(void *, _LIST_ENTRY *, _LIST_ENTRY *))a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
           a1->MiniportAdapterContext,
           Flink[5].Flink,
           Flink);
    if ( v6 != 259 )
      a1->WanSendCompleteHandler(a1, Flink, v6);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0xBu,
      (struct _GUID *)&WPP_d9cd2507b37b370d30083b2d3aaa2c43_Traceguids,
      a1);
  return 0;
}
