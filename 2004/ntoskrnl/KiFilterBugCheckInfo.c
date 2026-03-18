/*
 * XREFs of KiFilterBugCheckInfo @ 0x1403D883C
 * Callers:
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140C12EA8 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140C13070 = *(_OWORD *)(a2 + 16);
    qword_140C13080 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140C0F140;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140C12EB0;
    *(_QWORD *)(a2 + 32) = qword_140C12EB8;
    result = &KiBugCheckOriginalData;
    qword_140C12E88 = (__int64)&KiBugCheckOriginalData;
    dword_140C12E98 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
