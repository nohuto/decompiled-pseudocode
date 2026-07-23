/*
 * XREFs of _RtlFreeActivationContextStack@4 @ 0x4B2E49C0
 * Callers:
 *     _RtlFreeThreadActivationContextStack@0 @ 0x4B2E4910 (_RtlFreeThreadActivationContextStack@0.c)
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpFreeActivationContextStackFrame@8 @ 0x4B2E4B49 (_RtlpFreeActivationContextStackFrame@8.c)
 */

void __stdcall RtlFreeActivationContextStack(int **BaseAddress)
{
  int *v1; // edi
  int **v2; // edi
  int *v3; // eax
  int **v4; // edx
  int ***v5; // ecx
  int v6; // eax
  int *v7; // ebx

  if ( BaseAddress )
  {
    v1 = *BaseAddress;
    if ( *BaseAddress )
    {
      do
      {
        v6 = v1[2];
        v7 = (int *)*v1;
        if ( (v6 & 1) != 0 )
        {
          RtlReleaseActivationContext((PACTIVATION_CONTEXT)v1[1]);
          v6 = v1[2];
        }
        if ( (v6 & 8) != 0 )
          RtlpFreeActivationContextStackFrame(BaseAddress, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *BaseAddress = 0;
    v2 = (int **)BaseAddress[1];
    while ( v2 != BaseAddress + 1 )
    {
      v3 = *v2;
      v4 = v2 - 2;
      if ( (int **)(*v2)[1] != v2 || (v5 = (int ***)v2[1], *v5 != v2) )
        __fastfail(3u);
      *v5 = (int **)v3;
      v2 = (int **)v3;
      v3[1] = (int)v5;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    if ( ((_BYTE)BaseAddress[3] & 2) == 0 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
