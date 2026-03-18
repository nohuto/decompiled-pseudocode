/*
 * XREFs of Bulk_MappingLoop @ 0x1C000C3B0
 * Callers:
 *     Bulk_MapTransfers @ 0x1C000C348 (Bulk_MapTransfers.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C480 (Bulk_RetrieveNextStage.c)
 *     Bulk_MapStage @ 0x1C000CC1C (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000D0B4 (Bulk_PrepareStage.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Bulk_MappingLoop(__int64 a1)
{
  char i; // di
  int v3; // eax
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v5,
        14,
        36,
        (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    *(_DWORD *)(a1 + 340) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    v3 = Bulk_PrepareStage(a1);
    if ( v3 != 1 )
    {
      if ( v3 == 3 )
        return;
      if ( v3 == 4 )
        break;
      v4 = Bulk_MapStage(a1);
      if ( v4 != 3 )
      {
        if ( v4 == 2 )
          return;
        if ( v4 == 1 )
          break;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 3) != 3 )
          goto LABEL_16;
      }
    }
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 2, 3) == 3 )
    return;
LABEL_16:
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v6 + 37)
      || (v7 = *(_QWORD *)(v6 + 136), _InterlockedIncrement((volatile signed __int32 *)(v7 + 20)) == *(_DWORD *)(v7 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v6 + 288), 20);
    }
  }
}
