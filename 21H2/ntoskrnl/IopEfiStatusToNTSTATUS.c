/*
 * XREFs of IopEfiStatusToNTSTATUS @ 0x14089A02C
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x14089A300 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableTrEE @ 0x14089A8D0 (IopGetEnvironmentVariableTrEE.c)
 *     IopQueryEnvironmentVariableInfoTrEE @ 0x14089AE20 (IopQueryEnvironmentVariableInfoTrEE.c)
 *     IopSetEnvironmentVariableTrEE @ 0x14089B030 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopEfiStatusToNTSTATUS(unsigned __int64 a1)
{
  if ( a1 > 0x800000000000000BuLL )
  {
    if ( a1 > 0x8000000000000011uLL )
    {
      switch ( a1 )
      {
        case 0x8000000000000012uLL:
          return 258LL;
        case 0x8000000000000013uLL:
          return 3221225635LL;
        case 0x8000000000000014uLL:
          return 3221225528LL;
        case 0x8000000000000015uLL:
          return 3221226048LL;
      }
      if ( a1 != 0x800000000000001AuLL )
        return 3221225473LL;
    }
    else
    {
      switch ( a1 )
      {
        case 0x8000000000000011uLL:
          return 3221226098LL;
        case 0x800000000000000CuLL:
          return 3221225848LL;
        case 0x800000000000000DuLL:
          return 2147483676LL;
        case 0x800000000000000EuLL:
          return 3221225728LL;
      }
      if ( a1 != 0x800000000000000FuLL )
        return 258LL;
    }
    return 3221225506LL;
  }
  if ( a1 == 0x800000000000000BuLL )
    return 3221225599LL;
  if ( a1 <= 0x8000000000000005uLL )
  {
    switch ( a1 )
    {
      case 0x8000000000000005uLL:
        return 3221225507LL;
      case 0uLL:
        return 0LL;
      case 0x8000000000000001uLL:
        return 3221226092LL;
      case 0x8000000000000002uLL:
        return 3221225485LL;
      case 0x8000000000000003uLL:
        return 3221225659LL;
      case 0x8000000000000004uLL:
        return 3221225990LL;
    }
    return 3221225473LL;
  }
  switch ( a1 )
  {
    case 0x8000000000000006uLL:
      return 3221226021LL;
    case 0x8000000000000007uLL:
      return 3221225861LL;
    case 0x8000000000000008uLL:
      return 3221225634LL;
    case 0x8000000000000009uLL:
      return 3221226580LL;
  }
  return 3221225522LL;
}
