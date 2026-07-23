/*
 * XREFs of KiGenerateHeteroSets @ 0x14051F4F8
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14027A170 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F740 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGenerateHeteroSets(__int64 a1, __int64 a2, int a3, _QWORD *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // r8d
  __int64 result; // rax

  v6 = 3LL * a3;
  v7 = a2 & *(_QWORD *)(a1 + 8 * v6 + 184);
  v8 = a2 & *(_QWORD *)(a1 + 8 * v6 + 192);
  v9 = a2 & *(_QWORD *)(a1 + 8 * v6 + 200);
  if ( v9 )
  {
    v10 = 0;
    if ( v8 )
    {
      a2 = v7;
      if ( !v7 )
        a2 = v8;
    }
    else
    {
      v8 = v9;
      a2 = v9;
    }
  }
  else
  {
    v9 = a2;
    v8 = a2;
    v10 = 1;
  }
  *a4 = a2;
  *a5 = v8;
  result = v10;
  *a6 = v9;
  return result;
}
