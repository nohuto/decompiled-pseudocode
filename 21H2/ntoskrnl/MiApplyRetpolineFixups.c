/*
 * XREFs of MiApplyRetpolineFixups @ 0x140214824
 * Callers:
 *     MmRemoveImportOptimizationWorker @ 0x140544A50 (MmRemoveImportOptimizationWorker.c)
 *     MiPerformFixups @ 0x1406EBD18 (MiPerformFixups.c)
 * Callees:
 *     RtlApplyImportRelocationToPage @ 0x14021476C (RtlApplyImportRelocationToPage.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x1402149D0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructImportRelocationFixup @ 0x140214A30 (RtlpConstructImportRelocationFixup.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlApplyIndirectRelocationToPage @ 0x14058FF54 (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x140590000 (RtlApplySwitchJumpRelocationToPage.c)
 */

__int64 __fastcall MiApplyRetpolineFixups(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6,
        char a7)
{
  BOOL v9; // r14d
  int v10; // ebp
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  _DWORD *v15; // rdi
  unsigned int v16; // ebx
  unsigned __int64 v17; // [rsp+48h] [rbp-60h]
  unsigned __int64 v18; // [rsp+50h] [rbp-58h]
  __int64 v19; // [rsp+58h] [rbp-50h] BYREF
  int v20; // [rsp+60h] [rbp-48h]
  __int16 v21; // [rsp+64h] [rbp-44h]

  v9 = 0;
  v10 = (a7 & 8) != 0 ? 2 : 0;
  if ( (a7 & 8) == 0 )
    v9 = (a7 & 1) == 0;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    v10 |= 1u;
  switch ( a6[3] )
  {
    case 3u:
      RtlApplyImportRelocationToPage(a1, a4, a5, (int)Base, (_DWORD *)a6 + 2, v9, 1, v10);
      break;
    case 4u:
      RtlApplyIndirectRelocationToPage(a1, a4, a5, (_DWORD)Base, (__int64)(a6 + 4), v9, 1);
      break;
    case 5u:
      RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (_DWORD)Base, (__int64)(a6 + 4), v9, 1);
      break;
  }
  result = (__int64)(a6 + 6);
  v12 = (unsigned __int64)a6 + *a6 + 12;
  v13 = v12 + a6[1];
  v14 = v13 + a6[2];
  v17 = v13;
  v18 = v14;
  if ( (unsigned __int64)(a6 + 6) < v12 )
  {
    v15 = a6 + 6;
    do
    {
      v16 = *v15 & 0xFFF;
      v19 = 0LL;
      v20 = 0;
      v21 = 0;
      RtlpConstructImportRelocationFixup(v16 + a4, a5, (_DWORD)Base, (_DWORD)v15, v9, v10, (__int64)&v19);
      result = RtlpApplyGenericRetpolineFixup(a1, 4096LL, &v19, v16);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v12 );
    v13 = v17;
    v14 = v18;
  }
  while ( v12 < v13 )
  {
    result = RtlApplyIndirectRelocationToPage(a1, a4, a5, (_DWORD)Base, v12, v9, 0);
    v12 += 2LL;
  }
  while ( v13 < v14 )
  {
    result = RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (_DWORD)Base, v13, v9, 0);
    v13 += 2LL;
  }
  return result;
}
