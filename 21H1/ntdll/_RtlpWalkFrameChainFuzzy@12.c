/*
 * XREFs of _RtlpWalkFrameChainFuzzy@12 @ 0x4B350436
 * Callers:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 * Callees:
 *     _RtlpStkIsPointerInDllRange@4 @ 0x4B307021 (_RtlpStkIsPointerInDllRange@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

unsigned int __fastcall RtlpWalkFrameChainFuzzy(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int *StackBase; // edx
  unsigned int v5; // esi
  unsigned int *v6; // eax
  unsigned int *v7; // ecx
  unsigned int *v8; // edi
  unsigned int v9; // ebx
  unsigned int *v12; // [esp+28h] [ebp-2Ch]
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  v3 = a2;
  StackBase = (unsigned int *)NtCurrentTeb()->NtTib.StackBase;
  v12 = StackBase;
  v5 = 0;
  v6 = (unsigned int *)&savedregs;
  while ( v5 < v3 )
  {
    v7 = v6 + 1;
    if ( v6 + 1 >= StackBase )
      break;
    v8 = (unsigned int *)*v6;
    if ( *v6 <= (unsigned int)v6 || v8 >= StackBase )
      v8 = v6 + 1;
    v9 = *v7;
    if ( v8 != v7 || RtlpStkIsPointerInDllRange(v9) )
    {
      if ( v5 >= a3 )
        *(_DWORD *)(a1 + 4 * (v5 - a3)) = v9;
    }
    else
    {
      --v5;
    }
    ++v5;
    v6 = v8;
    StackBase = v12;
    v3 = a2;
  }
  return v5;
}
