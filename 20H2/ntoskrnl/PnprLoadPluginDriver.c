/*
 * XREFs of PnprLoadPluginDriver @ 0x1408B0878
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x14076DF90 (MmUnloadSystemImage.c)
 *     PnprGetPluginDriverImagePath @ 0x1408B014C (PnprGetPluginDriverImagePath.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprLoadPluginDriver(ULONG_PTR *a1, __int64 a2)
{
  int PluginDriverImagePath; // ebx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  ULONG_PTR v8; // rax
  int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  BugCheckParameter2 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath >= 0 )
  {
    PluginDriverImagePath = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 2u, &BugCheckParameter2, &v13);
    if ( PluginDriverImagePath >= 0 )
    {
      memset((void *)(a2 + 8), 0, 0x58uLL);
      v8 = BugCheckParameter2;
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)a2 = 96;
      PluginDriverImagePath = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 56))(a2, 0LL);
      if ( PluginDriverImagePath >= 0 )
      {
        if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
        {
          PluginDriverImagePath = 0;
          *a1 = BugCheckParameter2;
          goto LABEL_23;
        }
        v5 = PnprContext;
        PluginDriverImagePath = -1073741637;
        v6 = *(_DWORD *)(PnprContext + 20984);
        if ( !v6 )
          v6 = 4887;
        v7 = 9;
      }
      else
      {
        v5 = PnprContext;
        v6 = *(_DWORD *)(PnprContext + 20984);
        if ( !v6 )
          v6 = 4871;
        v7 = 8;
      }
    }
    else
    {
      v5 = PnprContext;
      v6 = *(_DWORD *)(PnprContext + 20984);
      if ( !v6 )
        v6 = 4857;
      v7 = 10;
    }
    *(_DWORD *)(v5 + 20984) = v6;
    v9 = *(_DWORD *)(v5 + 20988);
    if ( !v9 )
      v9 = v7;
    *(_DWORD *)(v5 + 20988) = v9;
  }
  if ( BugCheckParameter2 )
    MmUnloadSystemImage(BugCheckParameter2);
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
