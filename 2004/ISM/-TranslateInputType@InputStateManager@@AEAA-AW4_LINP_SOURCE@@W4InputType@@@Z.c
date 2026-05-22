/*
 * XREFs of ?TranslateInputType@InputStateManager@@AEAA?AW4_LINP_SOURCE@@W4InputType@@@Z @ 0x180087AB8
 * Callers:
 *     ?UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z @ 0x180087B0C (-UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::TranslateInputType(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  result = 4LL;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      return 1LL;
    }
    else if ( (a2 & 2) != 0 )
    {
      return 3LL;
    }
    else if ( (a2 & 8) != 0 )
    {
      return 11LL;
    }
    else if ( (a2 & 0x10) != 0 )
    {
      return 13LL;
    }
    else if ( (a2 & 0x100) == 0 )
    {
      return (a2 & 0x20) != 0 ? 0x11 : 0;
    }
  }
  return result;
}
