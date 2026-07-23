/*
 * XREFs of HalpAcpiTableCacheInit @ 0x140A65690
 * Callers:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     HalpSetupAcpiPhase0 @ 0x140A64D20 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetCachedTable @ 0x1402164D4 (HalpAcpiGetCachedTable.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     HalpAcpiCacheTable @ 0x1403BB830 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x1403BB898 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiAllocateMemory @ 0x1403BB978 (HalpAcpiAllocateMemory.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpAcpiFindRsdp @ 0x140A65290 (HalpAcpiFindRsdp.c)
 *     HalpAcpiCacheOverrideTables @ 0x140A8D800 (HalpAcpiCacheOverrideTables.c)
 *     HalpAcpiCalculateCacheSizeForOverrideTables @ 0x140A8D8A0 (HalpAcpiCalculateCacheSizeForOverrideTables.c)
 */

__int64 __fastcall HalpAcpiTableCacheInit(__int64 a1)
{
  unsigned int Rsdp; // esi
  char v2; // bp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned int *v11; // rax
  unsigned __int64 v12; // rdi
  char *v13; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  void *Memory; // rax
  void *v18; // r12
  __int64 *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
  Rsdp = 0;
  v2 = 0;
  if ( HalpAcpiTableCacheList )
    return Rsdp;
  HalpAcpiTableCacheLock.Owner = 0LL;
  HalpAcpiTableCacheLock.Contention = 0;
  HalpAcpiTableCacheLock.Event.Header.SignalState = 0;
  HalpAcpiTableCacheLock.Event.Header.WaitListHead.Blink = &HalpAcpiTableCacheLock.Event.Header.WaitListHead;
  HalpAcpiTableCacheLock.Event.Header.WaitListHead.Flink = &HalpAcpiTableCacheLock.Event.Header.WaitListHead;
  qword_140CDB748 = (__int64)&HalpAcpiTableCacheList;
  HalpAcpiTableCacheList = (__int64)&HalpAcpiTableCacheList;
  HalpAcpiTableCacheLock.Count = 1;
  LOWORD(HalpAcpiTableCacheLock.Event.Header.Lock) = 1;
  HalpAcpiTableCacheLock.Event.Header.Size = 6;
  Rsdp = HalpAcpiFindRsdp(a1, (__int64 *)&v19);
  if ( (Rsdp & 0x80000000) != 0 )
    return Rsdp;
  v5 = *(_QWORD *)(a1 + 240);
  v6 = *(_QWORD *)(v5 + 120);
  if ( v6 )
  {
    v14 = *(_DWORD *)(v5 + 128);
    if ( v14 )
    {
      v15 = HalpAcpiCalculateCacheSizeForOverrideTables(*(_QWORD *)(v5 + 120), v14);
      v16 = v15;
      if ( v15 )
      {
        Memory = (void *)HalpAcpiAllocateMemory(a1, v15);
        v18 = Memory;
        if ( Memory )
        {
          memset(Memory, 0, v16);
          HalpAcpiCacheOverrideTables(a1, v18, v16, v6, v14);
        }
      }
    }
  }
  if ( HalpAcpiGetCachedTable(1413763922, 0LL, 0LL) || HalpAcpiGetCachedTable(1413763928, 0LL, 0LL) )
    v2 = 1;
  v7 = *v19;
  if ( *v19 == -1 || (v8 = HalpMap(*v19, ((*v19 & 0xFFFuLL) + 4131) >> 12, 1u, 0LL, 4u)) == 0 )
  {
    if ( v2 )
      return Rsdp;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to map RSDT\n");
    return (unsigned int)-1073741670;
  }
  if ( *(_DWORD *)v8 != 1413763928 && *(_DWORD *)v8 != 1413763922 )
  {
    if ( !v2 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: The RSDT pointer is invalid.\n");
      KeBugCheckEx(0xA5u, 0x1000AuLL, 0LL, 0LL, 0LL);
    }
    return Rsdp;
  }
  v9 = *(unsigned int *)(v8 + 4);
  HalpUnmapVirtualAddress(v8, ((v8 & 0xFFF) + 4131) >> 12, 0LL);
  v10 = (unsigned int)v9;
  v11 = (unsigned int *)HalpMap(v7, (v9 + (unsigned __int64)(v7 & 0xFFF) + 4095) >> 12, 1u, 0LL, 4u);
  v12 = (unsigned __int64)v11;
  if ( !v11 )
  {
    if ( v2 )
      return Rsdp;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to remap RSDT.\n");
    return (unsigned int)-1073741670;
  }
  v13 = HalpAcpiCopyBiosTable(a1, v11, v7);
  if ( v13 )
  {
    HalpUnmapVirtualAddress(v12, (v10 + (v12 & 0xFFF) + 4095) >> 12, 0LL);
    HalpAcpiCacheTable(a1, (__int64)v13);
  }
  else
  {
    if ( !v2 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: Unable to cache RSDT.\n");
      Rsdp = -1073741670;
    }
    HalpUnmapVirtualAddress(v12, (v10 + (v12 & 0xFFF) + 4095) >> 12, 0LL);
  }
  return Rsdp;
}
