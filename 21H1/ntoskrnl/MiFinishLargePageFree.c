/*
 * XREFs of MiFinishLargePageFree @ 0x1403F09F4
 * Callers:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiFreeLargePageCharges @ 0x14055898C (MiFreeLargePageCharges.c)
 */

unsigned __int64 __fastcall MiFinishLargePageFree(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 inserted; // rax
  unsigned __int64 v10; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v6 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
  v7 = *(_QWORD *)(qword_140C4E588 + 8 * v6);
  LOBYTE(v8) = MiLockPageInline(a1, a2, v6, a4);
  v12[1] = v4;
  v12[2] = (unsigned __int8)v8;
  v12[0] = (a1 + 0x58000000000LL) / 48;
  inserted = MiInsertLargePageInNodeList(
               (__int64)v12,
               v12[0],
               (unsigned __int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63,
               v8);
  v10 = inserted;
  if ( inserted )
    MiFreeLargePageCharges(v7, inserted);
  return v10;
}
