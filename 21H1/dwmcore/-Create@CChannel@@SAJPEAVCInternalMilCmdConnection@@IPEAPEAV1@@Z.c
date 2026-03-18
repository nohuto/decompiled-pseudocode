/*
 * XREFs of ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x1800D8B68
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800D8AA0 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800D8C10 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@I@Z @ 0x1800D8C74 (--0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::Create(struct CInternalMilCmdConnection *a1, unsigned int a2, struct CChannel **a3)
{
  CChannel *v6; // rax
  __int64 v7; // rcx
  CChannel *v8; // rdi
  HANDLE EventW; // rax
  signed int v10; // ebx
  signed int LastError; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CChannel *v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CChannel *)DefaultHeap::AllocClear(0xD8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v16 = CChannel::CChannel(v6, a1, a2);
  v8 = v16;
  if ( v16 )
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v8 + 10) = EventW;
    if ( EventW )
    {
      v10 = 0;
      *a3 = v8;
      _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x42u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v10, 0x18Au, 0LL);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x185u, 0LL);
  }
  ReleaseInterface<CChannel>(&v16);
  return (unsigned int)v10;
}
