/*
 * XREFs of ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800406E8
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800404EC (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180040788 (-HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HampPdcStart(struct _HAM_PDC_CONTEXT *a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  _DWORD v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall *v8)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 (__fastcall *v10)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+48h] [rbp-8h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  HampSlsStart((struct _HAM_PDC_CONTEXT *)((char *)a1 + 24));
  v12 = 0LL;
  v7[1] = 0;
  v9 = 0LL;
  v8 = HampPdcEnterExitPlmPhase;
  v7[0] = 1;
  v10 = HampPdcControlCallback;
  v2 = PdcNotificationClientRegister(1LL, v7, a1, &v12);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v13 = v12;
    v11 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_18009ECC4,
      v4,
      v5,
      (__int64)&v11,
      (__int64)&v13);
  }
  if ( v2 >= 0 )
  {
    v2 = 0;
    *((_QWORD *)a1 + 1) = v12;
  }
  return (unsigned int)v2;
}
