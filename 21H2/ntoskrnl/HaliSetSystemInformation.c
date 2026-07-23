/*
 * XREFs of HaliSetSystemInformation @ 0x140866584
 * Callers:
 *     HalpSetSystemInformation @ 0x1407335A0 (HalpSetSystemInformation.c)
 * Callees:
 *     HalpRegisterSecondaryIcInterface @ 0x1404D1634 (HalpRegisterSecondaryIcInterface.c)
 *     HalpChannelPowerRequest @ 0x140866A88 (HalpChannelPowerRequest.c)
 */

__int64 __fastcall HaliSetSystemInformation(int a1, __int64 a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx

  v3 = a1 - 11;
  if ( !v3 )
    return (unsigned int)-1073741637;
  v4 = v3 - 2;
  if ( !v4 )
  {
    if ( (unsigned int)a2 < 0x58 )
      return (unsigned int)-1073741820;
    return (unsigned int)HalpRegisterSecondaryIcInterface();
  }
  v5 = v4 - 1;
  if ( !v5 )
    return (unsigned int)HalpChannelPowerRequest(a3, a2, 0LL);
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      v7 = 0;
      HalpResetParkDisposition = *a3 != 0;
      return v7;
    }
    return (unsigned int)-1073741820;
  }
  if ( v6 == 2 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      v7 = 0;
      HalpHvciEnabled = *a3 != 0;
      return v7;
    }
    return (unsigned int)-1073741820;
  }
  return (unsigned int)-1073741496;
}
