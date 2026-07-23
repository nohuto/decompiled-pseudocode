/*
 * XREFs of KiQueryIptSupport @ 0x1409B05D0
 * Callers:
 *     <none>
 * Callees:
 *     KiXSavesManagesIpt @ 0x14051A844 (KiXSavesManagesIpt.c)
 */

__int64 __fastcall KiQueryIptSupport(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  _DWORD *v3; // rcx
  int v4; // r8d
  int v5; // eax

  if ( a1 && a2 )
  {
    if ( KiXSavesManagesIpt() )
    {
      *v3 = 1;
      v5 = MEMORY[0xFFFFF78000000624];
    }
    else
    {
      if ( (_DWORD)KiIptMsrMask == v4 )
      {
        *v3 = v4;
        *v2 = v4;
        return 0LL;
      }
      v5 = KiIptSaveAreaLength;
      *v3 = 2;
    }
    *v2 = v5;
    return 0LL;
  }
  return 3221225485LL;
}
