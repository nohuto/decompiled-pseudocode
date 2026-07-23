/*
 * XREFs of _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0
 * Callers:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlpMuiFreeLangRegistryInfo@4 @ 0x4B36ADA0 (_RtlpMuiFreeLangRegistryInfo@4.c)
 * Callees:
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 */

int __stdcall RtlpMuiRegFreeRegistryInfo(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v2 = 0;
  if ( !a1 )
    return -1073741811;
  v3 = a2;
  if ( !a2 )
    return -1073741811;
  if ( (a2 & 0x400) != 0 )
    v3 = 4095;
  if ( (v3 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 20));
      *(_DWORD *)(a1 + 20) = 0;
    }
    *(_DWORD *)a1 &= ~1u;
  }
  if ( (v3 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (*(_BYTE *)a1 & 2) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 24));
      *(_DWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 &= ~2u;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( *(_DWORD *)(a1 + 28) )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 28));
      *(_DWORD *)(a1 + 28) = 0;
    }
    *(_DWORD *)a1 &= ~4u;
  }
  if ( (v3 & 8) != 0 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      if ( (*(_BYTE *)a1 & 8) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 32));
      *(_DWORD *)(a1 + 32) = 0;
    }
    *(_DWORD *)a1 &= ~8u;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 )
    {
      if ( (*(_BYTE *)a1 & 0x10) != 0 )
      {
        *(_DWORD *)(v5 + 32) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(PVOID *)(a1 + 36));
      }
      *(_DWORD *)(a1 + 36) = 0;
    }
    *(_DWORD *)a1 &= ~0x10u;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 40);
    if ( v6 )
    {
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 32) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(PVOID *)(a1 + 40));
      }
      *(_DWORD *)(a1 + 40) = 0;
    }
    *(_DWORD *)a1 &= ~0x20u;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 52);
    if ( v7 )
    {
      if ( (*(_BYTE *)a1 & 0x40) != 0 )
      {
        *(_DWORD *)(v7 + 32) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(PVOID *)(a1 + 52));
      }
      *(_DWORD *)(a1 + 52) = 0;
    }
    *(_DWORD *)a1 &= ~0x40u;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 48);
    if ( v8 )
    {
      if ( *(char *)a1 < 0 )
      {
        *(_DWORD *)(v8 + 32) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(PVOID *)(a1 + 48));
      }
      *(_DWORD *)(a1 + 48) = 0;
    }
    *(_DWORD *)a1 &= ~0x80u;
  }
  if ( (v3 & 0x200) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    if ( v9 )
    {
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        *(_DWORD *)(v9 + 32) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(PVOID *)(a1 + 56));
      }
      *(_DWORD *)(a1 + 56) = 0;
    }
    *(_DWORD *)a1 &= ~0x200u;
  }
  if ( (v3 & 0x800) != 0 )
  {
    if ( *(_DWORD *)(a1 + 80) )
    {
      if ( (*(_DWORD *)a1 & 0x800) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 80));
      *(_DWORD *)(a1 + 80) = 0;
    }
    *(_DWORD *)a1 &= ~0x800u;
  }
  if ( (v3 & 0xFFF) != 0 && *(_DWORD *)(a1 + 60) )
  {
    RtlpMuiRegFreeRegistryInfo(*(_DWORD *)(a1 + 60), v3);
    if ( *(_DWORD *)(a1 + 60) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 60));
    *(_DWORD *)(a1 + 60) = 0;
  }
  return v2;
}
