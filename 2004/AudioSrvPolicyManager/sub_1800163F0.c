/*
 * XREFs of sub_1800163F0 @ 0x1800163F0
 * Callers:
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 *     sub_1800166BC @ 0x1800166BC (sub_1800166BC.c)
 *     sub_18001AFD0 @ 0x18001AFD0 (sub_18001AFD0.c)
 *     sub_18001DA44 @ 0x18001DA44 (sub_18001DA44.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800163F0(__int64 a1, int a2)
{
  struct _TP_WAIT *v4; // r8
  char *v5; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 400);
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v4 = *(struct _TP_WAIT **)(a1 + 440);
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x37u, &stru_180043390, *(_DWORD *)(a1 + 192));
      v4 = *(struct _TP_WAIT **)(a1 + 440);
    }
    WaitForThreadpoolWaitCallbacks(v4, 1);
    CloseThreadpoolWait(*(PTP_WAIT *)(a1 + 440));
    *(_QWORD *)(a1 + 440) = 0LL;
    if ( a2 )
    {
      v5 = *(char **)(a1 + 184);
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v5);
        SetLastError(LastError);
      }
      *(_QWORD *)(a1 + 184) = 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
    }
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return 0LL;
}
