/*
 * XREFs of HvpIsLogEntryHeaderCoherent @ 0x1408819C8
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x140881478 (HvpApplyIncrementalLogFile.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x1408818D8 (HvpDetermineIncrementalLogFileMaximums.c)
 * Callees:
 *     HvpLogEntryCheckHeaderChecksum @ 0x140872698 (HvpLogEntryCheckHeaderChecksum.c)
 */

bool __fastcall HvpIsLogEntryHeaderCoherent(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  bool result; // al

  result = 0;
  if ( *a1 == 1162638920 )
  {
    v3 = a1[1];
    if ( v3 > 0x28 )
    {
      v4 = v3;
      if ( v3 + (unsigned __int64)a2 <= 0xFFFFFFFF )
      {
        v5 = a1[4];
        if ( v5 - 1 <= 0x7FFFDFFF && (v5 & 0xFFF) == 0 && (!a3 || v5 <= a3) )
        {
          v6 = (unsigned int)a1[5];
          if ( (_DWORD)v6 )
          {
            v7 = 8 * v6 + 40;
            if ( v7 <= 0xFFFFFFFF && v4 >= v7 && HvpLogEntryCheckHeaderChecksum((__int64)a1) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
