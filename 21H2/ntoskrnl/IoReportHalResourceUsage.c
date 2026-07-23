/*
 * XREFs of IoReportHalResourceUsage @ 0x140A3B810
 * Callers:
 *     HalpReportResourceUsage @ 0x140A3AD8C (HalpReportResourceUsage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IopCreateRegistryKeyEx @ 0x14073FF04 (IopCreateRegistryKeyEx.c)
 *     IopWriteResourceList @ 0x14075272C (IopWriteResourceList.c)
 *     HeadlessTerminalAddResources @ 0x140795890 (HeadlessTerminalAddResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoReportHalResourceUsage(UNICODE_STRING *a1, void *a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  int v8; // ebx
  int v9; // eax
  PVOID v10; // rdi
  ULONG v11; // ecx
  _DWORD *v12; // rax
  PVOID v13; // r14
  ULONG v14; // eax
  PVOID PoolWithTag; // rax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  PVOID v19; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  v4 = a4;
  Handle = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  v21 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Abstraction Layer");
  v8 = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&v21, L".Raw");
    v9 = HeadlessTerminalAddResources(a2, (unsigned int)v4, 0, &v19, &v17);
    v10 = v19;
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = v4;
      if ( v19 )
        v11 = v17;
      v12 = a2;
      if ( v19 )
        v12 = v19;
      v8 = IopWriteResourceList(Handle, &DestinationString, a1, &v21, v12, v11);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v21, L".Translated");
        v8 = HeadlessTerminalAddResources(a3, (unsigned int)v4, 1, &P, (_DWORD *)&v17 + 1);
        if ( v8 >= 0 )
        {
          v13 = P;
          v14 = v4;
          if ( P )
          {
            v14 = HIDWORD(v17);
            a3 = P;
          }
          v8 = IopWriteResourceList(Handle, &DestinationString, a1, &v21, a3, v14);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
        }
      }
    }
    ZwClose(Handle);
    if ( v8 < 0 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    else if ( v10 )
    {
      IopInitHalResources = v10;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
      IopInitHalResources = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, a2, v4);
      else
        return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
