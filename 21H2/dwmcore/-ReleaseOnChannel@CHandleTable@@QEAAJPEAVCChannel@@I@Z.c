/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18005D870
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18005D7E0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18005DAE4 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180216A00 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, struct CChannel *a2, unsigned int a3)
{
  unsigned int v6; // edi
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  struct CHandleTable::HANDLE_ENTRY *v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+58h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+5Ch] [rbp+24h]

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  Entry = CHandleTable::GetEntry(this, a3);
  v8 = Entry;
  if ( !Entry || (v9 = *((_DWORD *)Entry + 1)) == 0 )
  {
    v6 = -2147418113;
    MilUnexpectedError(-2147418113, L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147418113, 0x106u, 0LL);
    goto LABEL_8;
  }
  if ( *(_DWORD *)v8 )
  {
    if ( v9 == 1 )
    {
      v14 = 46;
      v15 = a3;
      v10 = CChannel::SendCommand(a2, &v14, 8u);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x113u, 0LL);
        goto LABEL_8;
      }
      *((_DWORD *)v8 + 2) = *((_DWORD *)a2 + 3);
      *((_DWORD *)a2 + 3) = a3;
      v9 = *((_DWORD *)v8 + 1);
    }
    *((_DWORD *)v8 + 1) = v9 - 1;
  }
LABEL_8:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v6;
}
