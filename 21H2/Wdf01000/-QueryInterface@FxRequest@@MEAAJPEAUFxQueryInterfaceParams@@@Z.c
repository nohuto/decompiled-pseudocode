/*
 * XREFs of ?QueryInterface@FxRequest@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0002EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxRequest::QueryInterface(FxRequest *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Offset; // ax

  if ( Params->Type == 4104 )
    goto LABEL_4;
  if ( Params->Type == 4106 )
  {
    Offset = Params->Offset;
    if ( Offset == 216 )
    {
      this = (FxRequest *)((char *)this + 256);
      goto LABEL_4;
    }
    if ( Offset == 232 )
    {
      this = (FxRequest *)((char *)this + 272);
      goto LABEL_4;
    }
  }
  if ( Params->Type == 4096 )
  {
LABEL_4:
    *Params->Object = this;
    return 0LL;
  }
  return 3221226169LL;
}
