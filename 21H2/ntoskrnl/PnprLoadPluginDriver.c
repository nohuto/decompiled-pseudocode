/*
 * XREFs of PnprLoadPluginDriver @ 0x1408ADFA8
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD87C (PnprGetPluginDriverImagePath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprLoadPluginDriver(ULONG_PTR *a1, __int64 a2)
{
  __int64 v4; // rdx
  int PluginDriverImagePath; // ebx
  __int64 v6; // rcx
  int v7; // eax
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
        v6 = PnprContext;
        PluginDriverImagePath = -1073741637;
        v7 = *(_DWORD *)(PnprContext + 20984);
        if ( !v7 )
          v7 = 4887;
        v4 = 9LL;
      }
      else
      {
        v6 = PnprContext;
        v7 = *(_DWORD *)(PnprContext + 20984);
        if ( !v7 )
          v7 = 4871;
        v4 = 8LL;
      }
    }
    else
    {
      v6 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 20984);
      if ( !v7 )
        v7 = 4857;
      v4 = 10LL;
    }
    *(_DWORD *)(v6 + 20984) = v7;
    v9 = *(_DWORD *)(v6 + 20988);
    if ( !v9 )
      v9 = v4;
    *(_DWORD *)(v6 + 20988) = v9;
  }
  if ( BugCheckParameter2 )
    MmUnloadSystemImage(BugCheckParameter2, v4);
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
