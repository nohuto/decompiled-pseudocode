/*
 * XREFs of sub_1800C0BA0 @ 0x1800C0BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800C04D0 @ 0x1800C04D0 (sub_1800C04D0.c)
 */

_QWORD *__fastcall sub_1800C0BA0(__int64 a1)
{
  __int64 v1; // rbx
  struct _TP_TIMER *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rcx

  v1 = a1 + 288;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
  v3 = *(struct _TP_TIMER **)(v1 + 48);
  *(_BYTE *)(v1 + 56) = 1;
  SetThreadpoolTimer(v3, 0LL, 0, 0);
  if ( v1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v1);
  WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(v1 + 48), 1);
  CloseThreadpoolTimer(*(PTP_TIMER *)(v1 + 48));
  sub_1800C04D0((LPCRITICAL_SECTION)v1);
  *(_QWORD *)(v1 + 64) = 0LL;
  v4 = (__int64 *)(a1 + 248);
  if ( *(_QWORD *)(a1 + 248) && *(_DWORD *)(a1 + 280) )
  {
    v5 = *v4;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_18016DDC0, a1);
      v5 = *v4;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 120LL))(v5, a1);
    *(_DWORD *)(a1 + 280) = 0;
  }
  return sub_180071C14((_QWORD *)(a1 + 248));
}
