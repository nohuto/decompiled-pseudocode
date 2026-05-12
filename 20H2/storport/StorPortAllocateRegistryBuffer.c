/*
 * XREFs of StorPortAllocateRegistryBuffer @ 0x1C0038AD0
 * Callers:
 *     <none>
 * Callees:
 *     PortAllocateRegistryBuffer @ 0x1C0058E10 (PortAllocateRegistryBuffer.c)
 */

__int64 __fastcall StorPortAllocateRegistryBuffer(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int RegistryBuffer; // eax
  __int64 v5; // rcx

  v3 = **(_QWORD **)(a1 - 16);
  *(_DWORD *)(v3 + 2200) = *a2;
  RegistryBuffer = PortAllocateRegistryBuffer(v3 + 2152);
  v5 = 0LL;
  if ( RegistryBuffer < 0 )
  {
    *a2 = 0;
  }
  else
  {
    *a2 = *(_DWORD *)(v3 + 2192);
    return *(_QWORD *)(v3 + 2184);
  }
  return v5;
}
