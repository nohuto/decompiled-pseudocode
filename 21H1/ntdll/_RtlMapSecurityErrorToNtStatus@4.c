/*
 * XREFs of _RtlMapSecurityErrorToNtStatus@4 @ 0x4B3467B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlMapSecurityErrorToNtStatus(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 > -2146893034 )
  {
    switch ( a1 )
    {
      case -2146893020:
        return -1073741517;
      case -2146893007:
        return -1073741637;
      case -2146892963:
        return -1073741811;
    }
  }
  else if ( a1 == -2146893034 )
  {
    return -1073741570;
  }
  else
  {
    switch ( a1 )
    {
      case -2146893056:
        result = -1073741670;
        break;
      case -2146893055:
        result = -1073741816;
        break;
      case -2146893054:
      case -2146893046:
        return -1073741637;
      case -2146893053:
        result = -1073741634;
        break;
      case -2146893052:
        result = -1073741595;
        break;
      case -2146893051:
      case -2146893049:
        return -1073741570;
      case -2146893050:
        result = -1073741727;
        break;
      case -2146893048:
      case -2146893047:
        return -1073741811;
      case -2146893045:
        result = -1073741555;
        break;
      case -2146893044:
        result = -1073741715;
        break;
      case -2146893043:
      case -2146893042:
        result = -1073741729;
        break;
      case -2146893041:
      case -2146893040:
        result = -1073741790;
        break;
      case -2146893039:
        result = -1073741730;
        break;
      default:
        return result;
    }
  }
  return result;
}
