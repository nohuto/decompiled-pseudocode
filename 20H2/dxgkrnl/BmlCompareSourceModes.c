/*
 * XREFs of BmlCompareSourceModes @ 0x1C0134FA8
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C0134B90 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     BmlCompareSourceModesWithMonitors @ 0x1C01348C4 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C0134ACC (BmlCompareSourceModesWithConstraint.c)
 *     BmlGetPixelFormatPreference @ 0x1C01350D8 (BmlGetPixelFormatPreference.c)
 *     BmlCompareModeRegions @ 0x1C0165E90 (BmlCompareModeRegions.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1C02EA74C (BmlCompareSourceModesWithContentRes.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 result; // rax
  unsigned int v12; // ebx
  int PixelFormatPreference; // r15d
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v5 = a3;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a4 == a5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v9 = 104 * v5;
  v10 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(104 * v5 + a1 + 16) + 129LL) && (*(_DWORD *)(a1 + 8) & 1) != 0
    || (result = BmlCompareSourceModesWithConstraint(a1, v5, a4, a5), !(_DWORD)result) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v9 + a1 + 16) + 129LL)
      || (*(_DWORD *)(v9 + a1 + 116) & 1) == 0
      || (result = BmlCompareSourceModesWithContentRes(a1, (unsigned __int16)v5, a4, a5), !(_DWORD)result) )
    {
      v12 = *(_DWORD *)(a4 + 96);
      PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(a5 + 96));
      v14 = BmlGetPixelFormatPreference(v12);
      if ( v14 <= PixelFormatPreference )
      {
        if ( v14 >= PixelFormatPreference )
        {
          v10 = BmlCompareModeRegions(a4 + 76, a5 + 76);
          if ( v10 )
          {
            v16 = BmlCompareSourceModesWithMonitors(a1, v5, v15, a4, a5);
            if ( v16 )
              return v16;
          }
        }
        else
        {
          return (unsigned int)-1;
        }
      }
      return v10;
    }
  }
  return result;
}
