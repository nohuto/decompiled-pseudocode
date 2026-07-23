/*
 * XREFs of CsrVerifyRegion @ 0x1800CB600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CsrVerifyRegion(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r8
  void *ReadOnlySharedMemoryBase; // r9
  bool result; // al

  result = 0;
  if ( !LdrpIsSecureProcess )
  {
    v2 = a2 + a1 - 1;
    if ( v2 >= a1 )
    {
      ReadOnlySharedMemoryBase = NtCurrentPeb()->ReadOnlySharedMemoryBase;
      if ( v2 <= (unsigned __int64)ReadOnlySharedMemoryBase + CsrReadOnlySharedMemorySize - 1
        && a1 >= (unsigned __int64)ReadOnlySharedMemoryBase )
      {
        return 1;
      }
    }
  }
  return result;
}
