/*
 * XREFs of sub_18001B65C @ 0x18001B65C
 * Callers:
 *     sub_180007220 @ 0x180007220 (sub_180007220.c)
 *     sub_18001B18C @ 0x18001B18C (sub_18001B18C.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     sub_1800210C0 @ 0x1800210C0 (sub_1800210C0.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180023460 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180023B60 (PbmUnregisterAppClosureNotification.c)
 * Callees:
 *     sub_18001058C @ 0x18001058C (sub_18001058C.c)
 *     sub_180015574 @ 0x180015574 (sub_180015574.c)
 *     sub_18001DA44 @ 0x18001DA44 (sub_18001DA44.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B65C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( a2 && (unsigned int)sub_180015574(a2) )
  {
    v5 = *(_QWORD *)(a2 + 256);
    if ( v5 )
      sub_18001058C(v5, a2);
    sub_18001DA44(a1, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
