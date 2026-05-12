/*
 * XREFs of StorPortBusy @ 0x1C0037740
 * Callers:
 *     StorPortBusyVrfy @ 0x1C007E150 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000E5B0 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000E728 (DbgLogRequest.c)
 *     WPP_SF_qD @ 0x1C0031FAC (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  PSLIST_ENTRY v4; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(v3, 18, retaddr, v3, a2, 0LL, 0LL);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 5484);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v6) = a2;
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x15u,
        (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids,
        v3,
        v6);
    }
    v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v3 + 1232));
    if ( v4 )
    {
      LODWORD(v4[1].Next) = 134684674;
      LODWORD(v4[2].Next) = 7;
      *((_DWORD *)&v4[2].Next + 2) = a2;
      RaidQueueDeferredItem((char *)(v3 + 1152), v4);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0068350 & 0x800) != 0 )
      DbgLogRequest(v3, 22, retaddr, 1021LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
