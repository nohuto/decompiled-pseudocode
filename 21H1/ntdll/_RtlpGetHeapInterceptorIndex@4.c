/*
 * XREFs of _RtlpGetHeapInterceptorIndex@4 @ 0x4B36D74D
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpSetHeapDebuggingInformation@8 @ 0x4B359790 (_RtlpSetHeapDebuggingInformation@8.c)
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpGetHeapInterceptorIndex(int (__stdcall *this)(int, int, int, int))
{
  unsigned __int16 v1; // ax

  v1 = 0;
  while ( RtlpInterceptorRoutines[v1] != this )
  {
    if ( ++v1 >= 2u )
      return 0;
  }
  return v1 + 1;
}
