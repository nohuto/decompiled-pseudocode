/*
 * XREFs of ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0003FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  switch ( Type )
  {
    case 0x1002u:
    case 0x1030u:
      goto LABEL_3;
    case 0x1503u:
      this = (FxDevice *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
      goto LABEL_3;
    case 0x1000u:
LABEL_3:
      *Params->Object = this;
      return 0LL;
  }
  return 3221226169LL;
}
