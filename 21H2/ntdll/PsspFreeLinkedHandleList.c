/*
 * XREFs of PsspFreeLinkedHandleList @ 0x180116B5C
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1801165DC (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall PsspFreeLinkedHandleList(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  unsigned __int16 *v2; // rsi
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  NTSTATUS result; // eax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    v1 = a1;
    do
    {
      v2 = *(unsigned __int16 **)a1;
      v3 = (unsigned int *)(v1 + 6);
      if ( a1[5] )
      {
        v4 = a1[5];
        do
        {
          NtClose((HANDLE)*v3++);
          --v4;
        }
        while ( v4 );
      }
      RegionSize = 1LL;
      result = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      a1 = v2;
      v1 = v2;
      BaseAddress = v2;
    }
    while ( v2 );
  }
  return result;
}
