/*
 * XREFs of _EtwCreateTraceInstanceId@8 @ 0x4B380A60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 */

int __stdcall EtwCreateTraceInstanceId(int a1, _DWORD *a2)
{
  struct _TEB *v2; // ecx
  signed __int32 v3; // eax

  if ( a1 && a2 && (v2 = NtCurrentTeb(), *a2 = a1, *(void **)(a1 + 4) == v2->ClientId.UniqueProcess) )
  {
    do
    {
      v3 = _InterlockedIncrement((volatile signed __int32 *)a1);
      a2[1] = v3;
    }
    while ( !v3 );
    return 0;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 87;
  }
}
