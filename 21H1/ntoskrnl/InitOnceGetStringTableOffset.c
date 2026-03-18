/*
 * XREFs of InitOnceGetStringTableOffset @ 0x14075F1A0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE RunOnce, char *Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( Parameter && Context )
  {
    FirstTag = SdbFindFirstTag((__int64)Parameter, 0LL, 30721);
    v7 = Parameter + 1352;
    *v7 = FirstTag;
    if ( FirstTag )
    {
      *Context = v7;
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
