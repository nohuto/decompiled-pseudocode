/*
 * XREFs of Bulk_Cleanup @ 0x1C0044450
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_DoesDriverOwnRequests @ 0x1C000BA84 (Bulk_DoesDriverOwnRequests.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 */

void __fastcall Bulk_Cleanup(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-20h]
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+38h] [rbp-10h]

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( Bulk_DoesDriverOwnRequests((_QWORD *)a1) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *(_DWORD *)(a1 + 64);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    v2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0xAu,
      (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
      v2,
      v3,
      v4);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
