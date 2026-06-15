/*
 * XREFs of sub_180015BC8 @ 0x180015BC8
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C920 @ 0x18002C920 (sub_18002C920.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180015BC8(__int64 a1)
{
  struct _TP_TIMER *v2; // r10
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 352);
  v4 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( *(_QWORD *)(a1 + 392) )
  {
    v2 = *(struct _TP_TIMER **)(a1 + 392);
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x2Fu, &stru_180043390, *(_DWORD *)(a1 + 192));
      v2 = *(struct _TP_TIMER **)(a1 + 392);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 392), 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(a1 + 392));
    *(_QWORD *)(a1 + 392) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
    }
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
