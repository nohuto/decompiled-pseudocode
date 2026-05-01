/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070010
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180040CCC (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180063330 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800633AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006DCD0 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006E030 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006E10C (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x1800789D4 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  int v5; // esi
  char v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // r15
  unsigned int v10; // r14d
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+40h] [rbp-79h]
  int v20; // [rsp+128h] [rbp+6Fh] BYREF
  int v21; // [rsp+130h] [rbp+77h] BYREF
  PVOID P; // [rsp+138h] [rbp+7Fh] BYREF

  P = 0LL;
  v2 = 0;
  if ( *((_DWORD *)a2 + 26) && (*((_BYTE *)a2 + 144) & 2) == 0 )
  {
    v5 = 255;
    goto LABEL_32;
  }
  v6 = 1;
  RmpAcquireGlobalLock();
  v5 = RmpCpuSetManagerRegisterProcessWithAllocation(
         *((struct _RM_CPU_SET_MANAGER ***)a1 + 5),
         *((void **)a2 + 5),
         *((struct _RM_CPU_SET_ALLOCATION **)a1 + 15),
         &P);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v20 = *((_DWORD *)a2 + 27);
    v21 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800B31E0,
      byte_18009CA91,
      v7,
      v8,
      (__int64)&v21,
      (__int64)&v20);
  }
  v9 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)P;
  if ( v5 >= 0 )
  {
    v10 = *((_DWORD *)a2 + 35);
    if ( (v10 & 2) != 0 || (v10 & 1) != 0 && (*((_BYTE *)a2 + 171) & 2) == 0 )
    {
      v11 = (v10 >> 3) & 1;
      v5 = RmpCpuSetManagerSetProcessDefaultMaskForGameMode((struct _RM_CPU_SET_PROCESS_REGISTRATION *)P, v11);
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v21 = *((_DWORD *)a2 + 27);
        v20 = v11;
        LODWORD(P) = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1800B31E0,
          byte_18009C894,
          v12,
          v13,
          (__int64)&P,
          (__int64)&v21,
          (__int64)&v20);
      }
      if ( v5 < 0 )
        goto LABEL_24;
      v2 = 1;
    }
    v19 = *(_OWORD *)(*((_QWORD *)a1 + 15) + 104LL);
    RmpReleaseGlobalLock();
    v6 = 0;
    if ( (*((_BYTE *)a2 + 140) & 0x10) == 0 )
      goto LABEL_21;
    v5 = RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 1u);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v20 = *((_DWORD *)a2 + 27);
      v21 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1800B31E0,
        byte_18009C8DB,
        v14,
        v15,
        (__int64)&v21,
        (__int64)&v20);
    }
    if ( v5 >= 0 )
    {
LABEL_21:
      if ( *((_DWORD *)a2 + 26) != 1 )
        *((_QWORD *)a2 + 15) = v19;
      *((_BYTE *)a2 + 171) |= 2u;
      v2 = 0;
      *((_QWORD *)a2 + 19) = v9;
      v9 = 0LL;
      v5 = 0;
    }
  }
LABEL_24:
  if ( v9 )
  {
    if ( !v6 )
    {
      v6 = 1;
      RmpAcquireGlobalLock();
    }
    RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL), v9, 1);
  }
  if ( v6 )
    RmpReleaseGlobalLock();
  if ( v2 )
    v5 = RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
LABEL_32:
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v20 = *((_DWORD *)a2 + 27);
    v21 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800B31E0,
      byte_18009C91C,
      v16,
      v17,
      (__int64)&v21,
      (__int64)&v20);
  }
  return (unsigned int)v5;
}
