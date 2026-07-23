/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180079640
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x18007974C (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x18009E1C0 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
