/*
 * XREFs of Bulk_Cleanup @ 0x1C0043420
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_DoesDriverOwnRequests @ 0x1C000B40C (Bulk_DoesDriverOwnRequests.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Bulk_Cleanup(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( Bulk_DoesDriverOwnRequests((_QWORD *)a1) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = *(_QWORD *)(a1 + 56);
    v3 = *(_DWORD *)(v2 + 144);
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v2,
      14,
      10,
      (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      v3,
      *(_DWORD *)(a1 + 64));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
