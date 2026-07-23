/*
 * XREFs of PsspFreeLinkedHandleList @ 0x4B388A00
 * Callers:
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

void __thiscall PsspFreeLinkedHandleList(HANDLE *this)
{
  HANDLE *v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // edi
  HANDLE *v4; // ebx
  unsigned int v5; // ebx
  ULONG_PTR RegionSize; // [esp+4h] [ebp-10h] BYREF
  unsigned int v7; // [esp+Ch] [ebp-8h]
  PVOID BaseAddress; // [esp+10h] [ebp-4h] BYREF

  v1 = this;
  BaseAddress = this;
  if ( this )
  {
    do
    {
      v2 = *((unsigned __int16 *)v1 + 3);
      v3 = 0;
      v4 = (HANDLE *)*v1;
      HIDWORD(RegionSize) = *v1;
      v7 = v2;
      if ( v2 )
      {
        v5 = v2;
        do
          NtClose(v1[v3++ + 2]);
        while ( v3 < v5 );
        v4 = (HANDLE *)HIDWORD(RegionSize);
      }
      LODWORD(RegionSize) = 1;
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
      v1 = v4;
      BaseAddress = v4;
    }
    while ( v4 );
  }
}
