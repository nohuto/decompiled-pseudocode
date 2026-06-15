/*
 * XREFs of sub_180062C18 @ 0x180062C18
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 *     sub_180062CB4 @ 0x180062CB4 (sub_180062CB4.c)
 */

__int64 __fastcall sub_180062C18(__int64 a1)
{
  __int64 v2; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1 + 24;
  qword_18019E5D8 = a1;
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (int)sub_180010FD8((struct _RTL_CRITICAL_SECTION *)v2) < 0 )
    byte_18019E5E0 = 1;
  else
    *(_DWORD *)(a1 + 8) = 56;
  xmmword_18019FA60 = xmmword_18016D190;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a1 + 80) = 0LL;
  LOBYTE(v4) = 1;
  *(_DWORD *)(a1 + 72) = CurrentThreadId;
  *(_DWORD *)(a1 + 88) = 5000;
  *(_DWORD *)(a1 + 92) = 1000;
  *(_BYTE *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 98) = 1;
  sub_180062CB4(v5, v4);
  return a1;
}
