/*
 * XREFs of HalpSfiTimerArm @ 0x1404D59B0
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalSetTimerProblem @ 0x1404D5840 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpSfiTimerArm(__int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // r14d
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  unsigned int i; // esi
  unsigned int v8; // esi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a3;
  if ( a3 > 0xFFFFFFFF || (unsigned int)(a2 - 2) > 1 )
  {
    HalSetTimerProblem(a1, 3, 0);
    return 3221225485LL;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 8);
    v6 = 0;
    for ( i = 0; i < 0x64; ++i )
    {
      if ( (v5[4] & 1) == 0 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( i == 100 )
      goto LABEL_12;
    v5[2] = v5[2] & 0xFFFFFFFA | 4;
    _InterlockedOr(v10, 0);
    v5[2] |= 2u;
    _InterlockedOr(v10, 0);
    *v5 = v3;
    _InterlockedOr(v10, 0);
    v5[2] = v5[2] & 0xFFFFFFFA | 1;
    _InterlockedOr(v10, 0);
    v8 = v5[1];
    do
    {
      if ( v8 > v5[1] )
        break;
      KeStallExecutionProcessor(0x32u);
      ++v6;
    }
    while ( v6 < 0x64 );
    if ( v6 == 100 )
    {
LABEL_12:
      HalSetTimerProblem(a1, 2, 0);
      return 3221225473LL;
    }
    else
    {
      return 0LL;
    }
  }
}
