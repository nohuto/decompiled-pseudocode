/*
 * XREFs of ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005DB10
 * Callers:
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18005D610 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18005D7E0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E524 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18005DBD0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

__int64 __fastcall CHandleTable::VerifyHandleTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  int *v7; // rcx
  int v9; // edx

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
    if ( (unsigned int)(*v7 - 1) > 0xCC )
    {
LABEL_12:
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, -2147024809, 0x15Eu, 0LL);
    }
    else
    {
      while ( v9 != a3 )
      {
        v7 = dword_1802E32B0;
        v9 = dword_1802E32B0[v9];
        if ( !v9 )
          goto LABEL_12;
      }
    }
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  return v6;
}
