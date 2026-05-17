/*
 * XREFs of PsspFreeLinkedHandleList @ 0x180116B9C
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18011661C (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PsspFreeLinkedHandleList(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rsi
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (__int64 *)*a1;
      v3 = (unsigned int *)v1 + 3;
      if ( *((_WORD *)a1 + 5) )
      {
        v4 = *((unsigned __int16 *)a1 + 5);
        do
        {
          NtClose((HANDLE)*v3++);
          --v4;
        }
        while ( v4 );
      }
      result = ZwFreeVirtualMemory();
      a1 = v2;
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
