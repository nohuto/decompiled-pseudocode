/*
 * XREFs of _Init_thread_footer @ 0x18011ED48
 * Callers:
 *     sub_18003CBD0 @ 0x18003CBD0 (sub_18003CBD0.c)
 *     sub_18003E040 @ 0x18003E040 (sub_18003E040.c)
 *     sub_180043E00 @ 0x180043E00 (sub_180043E00.c)
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 *     sub_1800550B4 @ 0x1800550B4 (sub_1800550B4.c)
 *     sub_180055168 @ 0x180055168 (sub_180055168.c)
 *     sub_180055290 @ 0x180055290 (sub_180055290.c)
 *     sub_180055318 @ 0x180055318 (sub_180055318.c)
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 *     sub_18005C020 @ 0x18005C020 (sub_18005C020.c)
 *     sub_18005C3A0 @ 0x18005C3A0 (sub_18005C3A0.c)
 *     sub_18005C428 @ 0x18005C428 (sub_18005C428.c)
 *     sub_18005C7A8 @ 0x18005C7A8 (sub_18005C7A8.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005E9DC @ 0x18005E9DC (sub_18005E9DC.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     sub_1800CF05C @ 0x1800CF05C (sub_1800CF05C.c)
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 *     sub_180109E10 @ 0x180109E10 (sub_180109E10.c)
 *     sub_1801159EC @ 0x1801159EC (sub_1801159EC.c)
 *     sub_180115A74 @ 0x180115A74 (sub_180115A74.c)
 *     sub_180115B20 @ 0x180115B20 (sub_180115B20.c)
 *     sub_180115BA8 @ 0x180115BA8 (sub_180115BA8.c)
 *     sub_180115C20 @ 0x180115C20 (sub_180115C20.c)
 *     sub_18011C410 @ 0x18011C410 (sub_18011C410.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_18020DEB0;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 44LL) = dword_18020DEB0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
