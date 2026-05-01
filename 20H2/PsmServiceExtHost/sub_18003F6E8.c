/*
 * XREFs of sub_18003F6E8 @ 0x18003F6E8
 * Callers:
 *     sub_18003F5F8 @ 0x18003F5F8 (sub_18003F5F8.c)
 * Callees:
 *     sub_180009BA8 @ 0x180009BA8 (sub_180009BA8.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003F6E8(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x58uLL);
  sub_180009BA8((__int64)sub_18003C690, (_QWORD *)a1);
  *(_OWORD *)(a1 + 48) = 0LL;
  result = RtlInitializeSRWLock(a1 + 48);
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
