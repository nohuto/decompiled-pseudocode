/*
 * XREFs of _TpWaitForAlpcCompletion@4 @ 0x4B383490
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _ZwAlpcQueryInformation@20 @ 0x4B2F3210 (_ZwAlpcQueryInformation@20.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [esp+4h] [ebp-4h] BYREF

  if ( TppAlpcpValidateAlpc((int)Alpc, 0, 0) )
  {
    PortInformation = *((_DWORD *)Alpc + 43);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 42), AlpcWaitForPortReferences, &PortInformation, 4u, 0);
    TppBarrierAdjust((signed __int64 *)Alpc + 10, 0, 1);
  }
}
