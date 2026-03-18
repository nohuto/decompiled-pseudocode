/*
 * XREFs of ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAPEAVCChannel@@@Z @ 0x18002CD68
 * Callers:
 *     ?MilCompositionEngine_CreateChannel@@YAJPEAPEAUIDwmChannel@@@Z @ 0x18002CD10 (-MilCompositionEngine_CreateChannel@@YAJPEAPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x18002CE44 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x18002CEEC (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18002CFF0 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801A9A4C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::CreateChannel(CInternalMilCmdConnection *this, struct CChannel **a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  struct CChannel *v12; // rcx
  struct CChannel *v13; // rax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF
  struct CChannel *v17; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v4 = NtDCompositionCreateDwmChannel(&v16);
  if ( v4 < 0 )
  {
    v9 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x2Fu, 0LL);
    v6 = 0;
    if ( v9 >= 0 )
      goto LABEL_5;
  }
  else
  {
    v6 = v16;
    v7 = CChannelTable::AssignChannelEntry((CInternalMilCmdConnection *)((char *)this + 56), v16, &v15);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x33u, 0LL);
    }
    else
    {
      v10 = CChannel::Create(this, v6, &v17);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v12 = v17;
        *((_QWORD *)v15 + 1) = v17;
        _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
        v13 = v17;
        v17 = 0LL;
        *a2 = v13;
        goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x37u, 0LL);
    }
  }
  if ( v6 )
  {
    CChannelTable::DestroyHandle((CInternalMilCmdConnection *)((char *)this + 56), v6);
    NtDCompositionDestroyChannel(v6);
  }
LABEL_5:
  ReleaseInterface<CChannel>(&v17);
  return (unsigned int)v9;
}
