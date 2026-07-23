/*
 * XREFs of MiComputeAgingPercent @ 0x14025F778
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeAgingPercent(__int64 a1)
{
  __int64 AvailablePagesBelowPriority; // rax
  __int64 v2; // r10
  __int16 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 *v6; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int16 v14; // dx

  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  v3 = 0;
  v4 = AvailablePagesBelowPriority;
  v5 = 0LL;
  v6 = (unsigned __int64 *)(v2 + 2272);
  v7 = 8LL;
  do
  {
    v8 = *v6;
    if ( *v6 < v4 )
    {
      v8 = v4;
      *v6 = v4;
    }
    v5 += v8;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = v5 >> 3;
  *(_QWORD *)(v2 + 2336) = (v4 + 7 * v9) >> 3;
  result = *(_DWORD *)(v2 + 120) & 7;
  *(_QWORD *)(v2 + 8 * result + 2272) = v4;
  ++*(_DWORD *)(v2 + 120);
  if ( v4 >= v9 )
  {
    v13 = 3600LL;
  }
  else
  {
    result = *(_QWORD *)(v2 + 2400);
    v11 = v9 - v4;
    if ( v4 <= result )
    {
      v13 = 0LL;
    }
    else
    {
      v12 = v4 - result;
      if ( v11 < 8 )
        v11 = 8LL;
      result = v12 / (v11 >> 3);
      v13 = result - 2;
      if ( result < 2 )
        v13 = result;
    }
    if ( v13 )
    {
      result = 0x1B58 / v13;
      if ( (unsigned int)(0x1B58 / v13) > 0x3E8 )
        result = 1000LL;
      v14 = result;
    }
    else
    {
      v14 = 1000;
    }
    v3 = v14;
  }
  *(_QWORD *)(v2 + 2352) = v13;
  *(_WORD *)(v2 + 2346) = v3;
  return result;
}
