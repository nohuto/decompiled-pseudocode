/*
 * XREFs of HvlEnableVsmCalls @ 0x140A75220
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x1403AE790 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x1405C96CC (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140A90470 (VslBindNtIum.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      HvlpGetVtlCallVa();
      return VslBindNtIum();
    }
  }
  return result;
}
