/*
 * XREFs of _RtlFreeActivationContextStack@4 @ 0x4B2E49C0
 * Callers:
 *     _RtlFreeThreadActivationContextStack@0 @ 0x4B2E4910 (_RtlFreeThreadActivationContextStack@0.c)
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpFreeActivationContextStackFrame@8 @ 0x4B2E4B49 (_RtlpFreeActivationContextStackFrame@8.c)
 */

void __stdcall RtlFreeActivationContextStack(int a1)
{
  int *v1; // edi
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  int *v7; // ebx

  if ( a1 )
  {
    v1 = *(int **)a1;
    if ( *(_DWORD *)a1 )
    {
      do
      {
        v6 = v1[2];
        v7 = (int *)*v1;
        if ( (v6 & 1) != 0 )
        {
          RtlReleaseActivationContext((volatile signed __int32 *)v1[1]);
          v6 = v1[2];
        }
        if ( (v6 & 8) != 0 )
          RtlpFreeActivationContextStackFrame(a1, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *(_DWORD *)a1 = 0;
    v2 = *(_DWORD **)(a1 + 4);
    while ( v2 != (_DWORD *)(a1 + 4) )
    {
      v3 = (_DWORD *)*v2;
      v4 = (int)(v2 - 2);
      if ( *(_DWORD **)(*v2 + 4) != v2 || (v5 = (_DWORD *)v2[1], (_DWORD *)*v5 != v2) )
        __fastfail(3u);
      *v5 = v3;
      v2 = v3;
      v3[1] = v5;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    if ( (*(_BYTE *)(a1 + 12) & 2) == 0 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
