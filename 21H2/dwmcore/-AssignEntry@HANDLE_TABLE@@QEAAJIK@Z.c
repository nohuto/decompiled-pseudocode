/*
 * XREFs of ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1800BE02C
 * Callers:
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18002CFF0 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x1800612DC (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800BDEB8 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_C.c)
 * Callees:
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18003ADD0 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::AssignEntry(__int64 this, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v6 = this;
  if ( !a3 || !a2 )
  {
    v11 = 398;
    goto LABEL_11;
  }
  if ( a2 >= *(_DWORD *)(this + 12) )
  {
    v9 = HANDLE_TABLE::ResizeToFit((HANDLE_TABLE *)this, a2);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x19Bu);
      return v3;
    }
  }
  v7 = *(_QWORD *)(v6 + 24);
  this = a2 * *(_DWORD *)(v6 + 8);
  if ( *(_DWORD *)(this + v7) )
  {
    v11 = 426;
LABEL_11:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0LL, -2147024809, v11);
    return v3;
  }
  *(_DWORD *)(this + v7) = a3;
  return v3;
}
