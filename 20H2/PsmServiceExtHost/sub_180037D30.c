/*
 * XREFs of sub_180037D30 @ 0x180037D30
 * Callers:
 *     sub_180037BEC @ 0x180037BEC (sub_180037BEC.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

__int64 __fastcall sub_180037D30(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  sub_180034650(a1, 0);
  RtlQueryUnbiasedInterruptTime(&v5);
  v2 = (unsigned int)(v5 / 0x2710) - *(_DWORD *)(a1 + 668);
  v3 = 0;
  if ( (unsigned int)v2 <= *(_DWORD *)(a1 + 672) )
    v3 = *(_DWORD *)(a1 + 672) - v2;
  sub_18001E830((unsigned int)(*(_DWORD *)(a1 + 672) - v2), v2, 1u);
  RtlReleaseSRWLockShared(a1);
  return v3;
}
