/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x14033F30C
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14033F2D8 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  ULONGLONG result; // rax
  ULONGLONG v7; // rdi
  ULONGLONG v8; // rsi
  ULONGLONG v9; // rcx
  unsigned __int64 v10; // rcx

  result = __rdtsc();
  v7 = result;
  if ( (*(_QWORD *)(a1 + 34208) & 0x8000000000LL) != 0 )
  {
    result = __readmsr(0xDB2u);
    v8 = result;
  }
  else
  {
    v8 = 0LL;
  }
  if ( a3 )
  {
    v9 = a2 - *(_QWORD *)(a1 + 32880);
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32896), a2 - *(_QWORD *)(a1 + 32880));
    if ( (*(_QWORD *)(a1 + 34208) & 0x8000000000LL) != 0 )
    {
      result = PpmConvertTime(v9, v7 - *(_QWORD *)(a1 + 32848), v8 - *(_QWORD *)(a1 + 32960));
      *(_QWORD *)(a1 + 32968) += result;
    }
  }
  *(_QWORD *)(a1 + 32880) = a2;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 32848);
    if ( v7 > v10 )
    {
      result = v7 - v10;
      *(_QWORD *)(a1 + 32856) += v7 - v10;
    }
  }
  *(_QWORD *)(a1 + 32848) = v7;
  if ( (*(_QWORD *)(a1 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(a1 + 32960) = v8;
  return result;
}
