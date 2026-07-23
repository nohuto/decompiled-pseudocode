/*
 * XREFs of KiFilterBugCheckInfo @ 0x1403DBFAC
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140C13068 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140C13230 = *(_OWORD *)(a2 + 16);
    qword_140C13240 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140C0F1C0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140C13070;
    *(_QWORD *)(a2 + 32) = qword_140C13078;
    result = &KiBugCheckOriginalData;
    qword_140C13048 = (__int64)&KiBugCheckOriginalData;
    dword_140C13058 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
