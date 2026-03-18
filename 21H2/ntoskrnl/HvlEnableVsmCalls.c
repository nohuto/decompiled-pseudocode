/*
 * XREFs of HvlEnableVsmCalls @ 0x140B315C0
 * Callers:
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x1403BF6EC (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x1406538B4 (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140B4EAD0 (VslBindNtIum.c)
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
