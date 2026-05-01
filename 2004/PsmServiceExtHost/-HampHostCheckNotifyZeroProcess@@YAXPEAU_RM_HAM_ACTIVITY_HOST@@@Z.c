/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028C2C
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000EF80 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026D04 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029908 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007C624 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // esi
  int v3; // r14d
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v9; // [rsp+44h] [rbp-3Ch] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+58h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0DD1, 0, 0, 2u, &v11);
  v2 = 0;
  LODWORD(v10[0]) = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  if ( (*((_QWORD *)a1 + 81) & 0x800000000LL) != 0 )
  {
    v3 = 1;
    v5 = (char *)a1 + 680;
  }
  else
  {
    v3 = 0;
    HampHostStartProcessPresenceChange(a1);
    if ( (*((_QWORD *)a1 + 81) & 0x2000000000000LL) != 0 )
    {
      HampHostReleaseLockExclusiveEx(a1);
      v4 = *((_QWORD *)a1 - 2);
      v9 = 0;
      (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)(v4 + 40) + 72LL))(
        (char *)a1 + 488,
        *((unsigned int *)a1 + 139),
        (char *)a1 + 24,
        *((unsigned int *)a1 + 140),
        *((_QWORD *)a1 - 4),
        0LL,
        &v9);
      if ( v9 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      else
      {
        HampHostNotifyZeroProcess(a1, 0LL, 0LL, 0LL, v10);
        v2 = v10[0];
      }
    }
    v5 = (char *)a1 + 680;
    *((_QWORD *)a1 + 81) &= ~0x1000000000000uLL;
    RtlWakeAllConditionVariable((char *)a1 + 680);
  }
  HampHostReleaseLockExclusiveEx(a1);
  if ( v3 )
    RtlWakeAllConditionVariable(v5);
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)a1 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), v7);
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v10[0] = *((_QWORD *)a1 - 4);
      v10[1] = (char *)a1 + 24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v6,
        &unk_1800A0D90);
    }
  }
}
