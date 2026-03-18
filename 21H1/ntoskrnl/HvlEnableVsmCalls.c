/*
 * XREFs of HvlEnableVsmCalls @ 0x140A702F0
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x1403AA0B0 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x1405C38AC (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140A8D328 (VslBindNtIum.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1, a2, a3, a4);
    if ( (int)result >= 0 )
    {
      HvlpGetVtlCallVa();
      return VslBindNtIum();
    }
  }
  return result;
}
