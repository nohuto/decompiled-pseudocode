/*
 * XREFs of sub_180011D1C @ 0x180011D1C
 * Callers:
 *     sub_180010090 @ 0x180010090 (sub_180010090.c)
 *     sub_180011B94 @ 0x180011B94 (sub_180011B94.c)
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011D1C(__int64 a1)
{
  struct _TP_TIMER *v2; // r10
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 496);
  v6 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( *(_QWORD *)(a1 + 536) )
  {
    v2 = *(struct _TP_TIMER **)(a1 + 536);
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Bu, &stru_180043390, *(const wchar_t **)(a1 + 24));
      v2 = *(struct _TP_TIMER **)(a1 + 536);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 536), 1);
    v3 = *(_QWORD *)(a1 + 544);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  if ( v6 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v6 = 0;
  }
  return 0LL;
}
