/*
 * XREFs of ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800027F8
 * Callers:
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002784 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000625C (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001E610 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001F100 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007D214 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DAF4 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007DF84 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x18007FB44 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180021864 (RmpWnfPublishMessageToClientStateName.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180072DEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180080BE8 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 */

__int64 __fastcall HampActRequestStopEx(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  int v11; // r15d
  int v12; // r9d
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 (__fastcall **v16)(_QWORD *, _QWORD); // rax
  int v17; // r8d
  int v18; // r9d
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+41h] [rbp-BFh] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  unsigned int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  int v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+84h] [rbp-7Ch]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  if ( a7 )
    v11 = *(_DWORD *)(a7 + 140);
  else
    v11 = 0;
  if ( a6 )
    HampActCheckSetExpiration((struct _HAM_ACTIVITY *)a1, a6);
  v12 = *(_DWORD *)(a1 + 544);
  result = (unsigned __int8)v12 >> 6;
  if ( (unsigned int)result >= a2 )
  {
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v19 = a2;
      v37 = &v19;
      v21 = v11;
      v35 = &v21;
      v38 = 1LL;
      v33 = &v22;
      v36 = 4LL;
      v34 = 8LL;
      return tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1CF9, 0, 0, 5u, &v32);
    }
  }
  else
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v34 = v14;
      v39 = &v19;
      v19 = a3;
      v37 = &v20;
      v20 = a2;
      v35 = &v21;
      v33 = &v22;
      v21 = v11;
      v40 = 1LL;
      v38 = 1LL;
      v36 = 4LL;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1DE4, 0, 0, 6u, &v32);
      v12 = *(_DWORD *)(a1 + 544);
    }
    v15 = *(_QWORD *)(a1 + 64);
    result = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((_BYTE)a2 << 6)) & 0xC0u;
    *(_DWORD *)(a1 + 544) = result;
    if ( v15 )
    {
      v24[0] = *(_QWORD *)(a1 + 40);
      v28 = a5;
      v16 = (__int64 (__fastcall **)(_QWORD *, _QWORD))(v15 + 104);
      v25 = 1LL;
      v30 = 0LL;
      v31 = 0LL;
      v24[1] = 0LL;
      v26 = a2;
      v27 = a3;
      v29 = a4;
      if ( (*(_BYTE *)(v15 + 128) & 2) != 0 )
      {
        return (*v16)(v24, *(_QWORD *)(v15 + 120));
      }
      else
      {
        result = RmpWnfPublishMessageToClientStateName(v16, v24, 64LL, *(_QWORD *)(v15 + 112));
        if ( (int)result < 0 && (unsigned int)dword_1800B3218 > 4 )
        {
          result = tlgKeywordOn(&dword_1800B3218, 0x400000000008LL);
          if ( (_BYTE)result )
          {
            v21 = v25;
            v23 = v24[0];
            v22 = 0x1000000LL;
            return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     (unsigned int)&dword_1800B3218,
                     (unsigned int)&unk_18009EB8B,
                     v17,
                     v18,
                     (__int64)&v23,
                     (__int64)&v21,
                     (__int64)&v22);
          }
        }
      }
    }
  }
  return result;
}
