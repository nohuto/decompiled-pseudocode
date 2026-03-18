/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0036374
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C00353FC (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0036060 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 CitpIsInteractiveSession(void)
{
  char v0; // cl
  char IsMultiSessionSku; // al

  if ( gSessionId != (unsigned int)RtlGetCurrentServiceSessionId() )
    return 1;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  v0 = 0;
  if ( !IsMultiSessionSku )
    return 1;
  return v0;
}
