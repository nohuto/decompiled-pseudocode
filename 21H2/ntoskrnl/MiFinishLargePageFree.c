/*
 * XREFs of MiFinishLargePageFree @ 0x1403F7A04
 * Callers:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiFreeLargePageMemory @ 0x1402FE654 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiFreeLargePageCharges @ 0x14055E47C (MiFreeLargePageCharges.c)
 */

unsigned __int64 __fastcall MiFinishLargePageFree(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int64 inserted; // rax
  unsigned __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
  v6 = *(_QWORD *)(qword_140C4E648 + 8 * v5);
  v10[1] = (unsigned int)a2;
  v10[2] = (unsigned __int8)MiLockPageInline(a1, a2, v5, a4);
  v10[0] = (a1 + 0x58000000000LL) / 48;
  inserted = MiInsertLargePageInNodeList((__int64)v10);
  v8 = inserted;
  if ( inserted )
    MiFreeLargePageCharges(v6, inserted);
  return v8;
}
