/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALCAPTURE@@@Z @ 0x1801B4498
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3004 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z @ 0x1801B4698 (-RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(
        CVisualCapture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALCAPTURE *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct CResourceTable *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 64LL))(this);
  v6 = *((_DWORD *)a3 + 2);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0xC3u);
    *((_QWORD *)this + 235) = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x6A3u, 0LL);
LABEL_15:
      (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 64LL))(this);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 235) = 0LL;
  }
  v10 = *((_DWORD *)a3 + 3);
  if ( v10 )
  {
    v11 = CResourceTable::GetResource((__int64)a2, v10, 0xC3u);
    *((_QWORD *)this + 236) = v11;
    if ( !v11 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0x6B5u, 0LL);
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 236) = 0LL;
  }
  v13 = (struct CResourceTable *)*((unsigned int *)a3 + 4);
  if ( (_DWORD)v13 )
  {
    v14 = CResourceTable::GetResource((__int64)a2, (unsigned int)v13, 0x28u);
    *((_QWORD *)this + 237) = v14;
    if ( !v14 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2003303421, 0x6C7u, 0LL);
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 237) = 0LL;
  }
  *((_DWORD *)this + 476) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 477) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 478) = *((_DWORD *)a3 + 7);
  v16 = CVisualCapture::RegisterNotifiers(this, v13);
  v9 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x6D4u, 0LL);
    goto LABEL_15;
  }
LABEL_16:
  (*(void (__fastcall **)(CVisualCapture *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return v9;
}
