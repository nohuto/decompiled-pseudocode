/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18007327C
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180073210 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDE28 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18026BE1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, struct CChannel *a2, unsigned int a3)
{
  unsigned int v6; // edi
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  struct CHandleTable::HANDLE_ENTRY *v8; // rbx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v13; // ecx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+6Ch] [rbp+24h]

  v14 = &g_csCompositionEngine;
  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  Entry = CHandleTable::GetEntry(this, a3);
  v8 = Entry;
  if ( !Entry || (v9 = *((_DWORD *)Entry + 1)) == 0 )
  {
    v6 = -2147418113;
    MilUnexpectedError(-2147418113, L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147418113, 0x107u, 0LL);
    goto LABEL_8;
  }
  if ( *(_DWORD *)v8 )
  {
    if ( v9 == 1 )
    {
      v15 = 45;
      v16 = a3;
      v10 = CChannel::SendCommand(a2, &v15, 8u);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x114u, 0LL);
        goto LABEL_8;
      }
      *((_DWORD *)v8 + 2) = *((_DWORD *)a2 + 3);
      *((_DWORD *)a2 + 3) = a3;
      v9 = *((_DWORD *)v8 + 1);
    }
    *((_DWORD *)v8 + 1) = v9 - 1;
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v6;
}
