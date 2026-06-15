/*
 * XREFs of sub_180028C94 @ 0x180028C94
 * Callers:
 *     TS_UnregisterAudioProtocolNotification @ 0x18002ADC0 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_1800286E8 @ 0x1800286E8 (sub_1800286E8.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002B478 @ 0x18002B478 (sub_18002B478.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028C94(DWORD SessionId, void *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = sub_18002880C(SessionId, 0, &v10, &v9);
  if ( !v5 )
  {
    v6 = v9;
    v5 = sub_1800286E8(v9, a2);
    if ( !v5 && *(_DWORD *)(v6 + 48) && *(_DWORD *)(v6 + 4) == 0xFFFF && !*(_DWORD *)(v6 + 32) && !*(_QWORD *)(v6 + 72) )
    {
      EnterCriticalSection(&CriticalSection);
      sub_18002B478(v7, v10);
      sub_180025BB0(v6);
      sub_180039D98((void *)v6);
      LeaveCriticalSection(&CriticalSection);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
