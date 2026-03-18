/*
 * XREFs of ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0001350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // r8
  FxDevice *v3; // r9
  __int64 result; // rax

  Type = Params->Type;
  v3 = this;
  if ( Type == 4098 )
  {
    *Params->Object = this;
    return 0LL;
  }
  else
  {
    result = 0LL;
    switch ( Type )
    {
      case 0x1030u:
LABEL_3:
        *Params->Object = v3;
        return result;
      case 0x1503u:
        if ( !this )
        {
          v3 = 0LL;
          goto LABEL_3;
        }
        *Params->Object = &this->IFxHasCallbacks;
        break;
      case 0x1000u:
        *Params->Object = this;
        return 0LL;
      default:
        return 3221226169LL;
    }
  }
  return result;
}
