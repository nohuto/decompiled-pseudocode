/*
 * XREFs of GetImageTuple @ 0x18021701C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180217120 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

DWORD __fastcall GetImageTuple(__int64 a1, CHAR *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ecx
  int v7; // edx
  DWORD result; // eax
  DWORD v9; // ecx
  DWORD v10; // edx

  if ( *(__int16 *)((char *)&word_180000018 + (int)off_18000003C) == 267
    || *(__int16 *)((char *)&word_180000018 + (int)off_18000003C) == 523 )
  {
    v6 = *(_DWORD *)&byte_180000040[(int)off_18000003C + 16];
    v7 = *(_DWORD *)((char *)&word_180000008 + (int)off_18000003C);
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  *a4 = v7;
  *a5 = v6;
  result = GetModuleFileNameA(&_ImageBase, a2, 0x104u);
  if ( result )
  {
    v9 = result - 1;
    v10 = result - 1;
    if ( result != 1 )
    {
      while ( a2[v10] != 92 )
      {
        if ( !--v10 )
          goto LABEL_11;
      }
      v9 = v10;
    }
LABEL_11:
    if ( v9 != 259 )
      memmove_0(a2, &a2[v9 + 1], 259 - v9);
    return 1;
  }
  return result;
}
