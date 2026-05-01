/*
 * XREFs of sub_18003CAD0 @ 0x18003CAD0
 * Callers:
 *     sub_18003C6F0 @ 0x18003C6F0 (sub_18003C6F0.c)
 * Callees:
 *     sub_18003CB74 @ 0x18003CB74 (sub_18003CB74.c)
 *     sub_18003CC4C @ 0x18003CC4C (sub_18003CC4C.c)
 *     sub_18003CE24 @ 0x18003CE24 (sub_18003CE24.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003CAD0(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebp
  __int64 result; // rax

  memset((void *)a3, 0, 0x88uLL);
  sub_18003CE24(sub_18003C5E0, a1 + 128, a3);
  *(_OWORD *)(a3 + 96) = 0LL;
  RtlInitializeSRWLock(a3 + 96);
  v6 = 0;
  *(_DWORD *)(a3 + 104) = 0;
  *(_DWORD *)(a3 + 88) = a2;
  result = sub_18003CC4C();
  if ( (_DWORD)result || (result = sub_18003CB74(), (_DWORD)result) )
    v6 = 1;
  *(_DWORD *)(a3 + 132) &= ~1u;
  *(_DWORD *)(a3 + 132) |= v6;
  return result;
}
