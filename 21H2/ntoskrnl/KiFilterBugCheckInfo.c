/*
 * XREFs of KiFilterBugCheckInfo @ 0x1403EB11C
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140C0DB68 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140C0DD30 = *(_OWORD *)(a2 + 16);
    qword_140C0DD40 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140C094D0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140C0DB70;
    *(_QWORD *)(a2 + 32) = qword_140C0DB78;
    result = &KiBugCheckOriginalData;
    qword_140C0DB48 = (__int64)&KiBugCheckOriginalData;
    dword_140C0DB58 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
