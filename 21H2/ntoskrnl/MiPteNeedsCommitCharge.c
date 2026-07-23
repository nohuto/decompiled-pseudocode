/*
 * XREFs of MiPteNeedsCommitCharge @ 0x140209B38
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 */

_BOOL8 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  bool v4; // zf
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  if ( (v2 & 0x70) == 0x20
    && (v2 & 0xF80) != 0x80
    && (MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 4LL, &v6), v6) )
  {
    v4 = (*(_BYTE *)(v6 + 32) & 0xA) == 10;
  }
  else
  {
    v4 = (*(_DWORD *)(a1 + 48) & 0x280) == 640;
  }
  return !v4;
}
