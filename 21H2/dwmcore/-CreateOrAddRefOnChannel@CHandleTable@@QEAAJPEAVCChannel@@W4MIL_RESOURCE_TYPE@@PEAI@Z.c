/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18005D9D8
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18005D940 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x18005F910 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18005DAE4 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18005DBD0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18005DE74 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, CChannel *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  int NewEntry; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  _DWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  _DWORD v19[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      goto LABEL_8;
    }
    v18 = 140;
LABEL_15:
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024890, v18, 0LL);
    goto LABEL_8;
  }
  v20 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v20);
  v8 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, NewEntry, 0x57u, 0LL);
    goto LABEL_8;
  }
  v11 = v20;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, v20) )
    v13 = (_DWORD *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8));
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v18 = 99;
    goto LABEL_15;
  }
  v19[2] = *v13;
  v19[0] = 45;
  v19[1] = v11;
  v14 = CChannel::SendCommand(a2, v19, 0xCu);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x71u, 0LL);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v13[1] = 1;
    *a4 = v11;
  }
LABEL_8:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v8;
}
