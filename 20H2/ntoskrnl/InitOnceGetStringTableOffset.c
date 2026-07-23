/*
 * XREFs of InitOnceGetStringTableOffset @ 0x14076FBB0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE a1, char *a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( a2 && a3 )
  {
    FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 30721);
    v7 = a2 + 1352;
    *v7 = FirstTag;
    if ( FirstTag )
    {
      *a3 = v7;
      return 1;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
