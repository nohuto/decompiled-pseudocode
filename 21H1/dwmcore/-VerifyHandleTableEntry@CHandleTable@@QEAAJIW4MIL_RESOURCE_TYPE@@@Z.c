/*
 * XREFs of ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180038B10
 * Callers:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18003812C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180038610 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x1800387E0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180038BCC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

__int64 __fastcall CHandleTable::VerifyHandleTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  int *v7; // rcx
  int v9; // eax

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, a2) )
    v7 = (int *)(*(_QWORD *)(a1 + 24) + a2 * *(_DWORD *)(a1 + 8));
  else
    v7 = 0LL;
  if ( !v7 || v7[2] )
  {
    v6 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, -2147024890, 0x158u, 0LL);
  }
  else if ( a3 )
  {
    v9 = *v7;
    if ( *v7 < 206 )
    {
      while ( v9 )
      {
        if ( v9 == a3 )
          goto LABEL_6;
        v7 = dword_1802E3E70;
        v9 = dword_1802E3E70[v9];
      }
    }
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, -2147024809, 0x15Eu, 0LL);
  }
LABEL_6:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v6;
}
