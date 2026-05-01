/*
 * XREFs of ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180006EB8
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006E44 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180017F70 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000351C (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180006A2C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180008B18 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035A9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18003C2F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampActEndStateChange(struct _RM_HAM_ACTIVITY_HOST **a1, int a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  _DWORD *v5; // r14
  char v6; // al
  BOOL v7; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // edx
  int v11; // esi
  struct _HAM_DEPENDENCY_GROUP *v12; // rbp
  struct _HAM_HOST_DEPENDENCY *v13; // rdi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  char v17; // [rsp+80h] [rbp+8h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v19; // [rsp+90h] [rbp+18h] BYREF

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  if ( a2 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
    {
      v18 = *((_BYTE *)a1 + 548);
      v19 = a1[5];
      v17 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v14,
        (unsigned int)&unk_1800A1BB2,
        v15,
        v16,
        (__int64)&v19,
        (__int64)&v17,
        (__int64)&v18);
    }
    *((_BYTE *)a1 + 548) = 1;
    HampActSetPendState((__int64)a1, 6u);
  }
  v4 = a1[10];
  v5 = a1 + 68;
  *((_DWORD *)a1 + 136) &= ~1u;
  HampHostUpdateActivityState(v4);
  v6 = *((_BYTE *)a1 + 548);
  v7 = (v6 == 1 || v6 == 4) && (((_BYTE)a1[15] & 0xC) != 0 || ((_DWORD)a1[14] & 0x4000) != 0);
  v8 = a1[10];
  v9 = *((_QWORD *)v8 + 86);
  if ( v9 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v11 = (*v5 >> 1) & 1;
    *v5 &= ~2u;
  }
  else
  {
    v11 = 0;
    HampHostCheckQueueStateWorker(v8, 0);
  }
  v12 = (struct _HAM_DEPENDENCY_GROUP *)(v9 & -(__int64)(v11 != 0));
  if ( !a2 && *((_BYTE *)a1 + 548) == 4 )
  {
    v13 = a1[9];
    a1[9] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  HampHostReleaseLockExclusiveEx(a1[10], v10);
  RtlWakeAddressAll(a1 + 68);
  if ( v13 )
    HampHostDepDestroy(v13);
  if ( v7 )
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(((unsigned __int64)a1[4] & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v11 )
    HampDepGroupRunStateChangeWorker(v12);
  RmHamHostUpdateSettings(a1[10]);
}
