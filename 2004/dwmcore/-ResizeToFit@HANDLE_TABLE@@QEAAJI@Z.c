/*
 * XREFs of ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1800B4778
 * Callers:
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x18009DC7C (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009F300 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800A5024 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_C.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x1800B47CC (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::ResizeToFit(HANDLE_TABLE *this, unsigned int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( a2 >= 0x4000000 )
  {
    v4 = -2003303411;
    v8 = 139;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, v8, 0LL);
    return v4;
  }
  v3 = a2 + 1024;
  if ( v3 < a2 )
  {
    v4 = -2147024362;
    v8 = 155;
    goto LABEL_11;
  }
  v4 = 0;
  if ( v3 >= 0x4000000 )
    v3 = 0x4000000;
  if ( v3 > *((_DWORD *)this + 3) )
  {
    v5 = HANDLE_TABLE::Resize(this, v3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xAFu, 0LL);
  }
  return v4;
}
