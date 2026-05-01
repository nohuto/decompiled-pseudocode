/*
 * XREFs of ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180003E60
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800039D0 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInHostState(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // rdx
  unsigned __int8 v5; // cl
  int v6; // r10d
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  int v8; // r8d

  result = 8LL;
  if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    return 14LL;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(v3 + 648);
  v5 = (v4 >> 29) & 7;
  v6 = *(_DWORD *)(a1 + 116);
  if ( (v6 & 0x40) == 0 || !v5 )
  {
    if ( (v6 & 0x80u) == 0 || v5 <= 2u )
    {
      if ( (v6 & 0x100) != 0
        && ((v4 & 0x30000) != 0 && (v4 & 0x8000000000LL) != 0 || (v4 & 0x30000) == 0 && (v4 & 0x4000000000LL) != 0) )
      {
        return 10LL;
      }
      else if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && ((v4 & 0x30000) != 0 || (v4 & 0x2000000000000LL) == 0) )
      {
        return 12LL;
      }
      else
      {
        if ( (v6 & 0x200) == 0 )
          return 0LL;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v3);
        if ( !FirstActivity )
          return 0LL;
        do
          FirstActivity = HampHostGetNextActivity(FirstActivity);
        while ( FirstActivity );
        if ( v8 == 1 )
          return 13LL;
        else
          return 0LL;
      }
    }
    else
    {
      return 9LL;
    }
  }
  return result;
}
