/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C025D00C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v4 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v5 = a1 >> 16;
    v7 = HMPkheFromPhe(gSharedInfo[1] + (unsigned int)(v3 * LODWORD(gSharedInfo[2])));
    if ( ((_WORD)v5 == *(_WORD *)(v4 + 26) || (_WORD)v5 == 0xFFFF || !(_WORD)v5 && PsGetCurrentProcessWow64Process(v6))
      && *(_BYTE *)(v4 + 24) == 1 )
    {
      return *(_QWORD *)v7;
    }
  }
  return v2;
}
