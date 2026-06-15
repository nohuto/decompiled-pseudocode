/*
 * XREFs of sub_180028944 @ 0x180028944
 * Callers:
 *     sub_180007840 @ 0x180007840 (sub_180007840.c)
 *     TS_SessionGetAudioProtocol @ 0x18002ACB0 (TS_SessionGetAudioProtocol.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028944(DWORD SessionId, _DWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h]

  *a2 = 0xFFFF;
  EnterCriticalSection(&CriticalSection);
  v10 = &CriticalSection;
  v6 = sub_18002880C(SessionId, 0, 0LL, &v9);
  if ( !v6 )
  {
    v7 = v9;
    *a2 = *(_DWORD *)(v9 + 4);
    *a3 = *(_DWORD *)(v7 + 8);
  }
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
