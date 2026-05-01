/*
 * XREFs of ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x1800254CC
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180021C20 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x1800219A4 (RmpWnfPublishMessageToClientStateName.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180068944 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall RmpActivityHostNotifySubscribers(_QWORD *a1, __int64 a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rsi
  int v9; // r14d
  _QWORD *v10; // r15
  _QWORD *i; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  _DWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+C0h] [rbp+40h] BYREF
  int v25; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        v8 = a1[168];
        v9 = 5;
      }
      else
      {
        v8 = a1[167];
        v9 = 4;
      }
    }
    else
    {
      v8 = a1[166];
      v9 = 3;
    }
  }
  else
  {
    v8 = 0LL;
    v9 = 2;
  }
  v10 = a1 + 176;
  for ( i = (_QWORD *)a1[176]; i != v10; i = (_QWORD *)*i )
  {
    v12 = i[6];
    v21 = 0;
    v16[1] = 0;
    v13 = a1[4];
    v16[0] = 1;
    v18 = *(i - 1);
    v21 = 0;
    v19 = 0LL;
    v17 = v13;
    v20 = v9;
    v22 = v8;
    v23 = a2;
    if ( (int)RmpWnfPublishMessageToClientStateName((_QWORD *)(v12 + 24), v16, 0x38u, *(_QWORD *)(v12 + 32)) < 0
      && (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v26 = v17;
        v25 = v20;
        v24 = v15;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800B31E0,
          (unsigned int)&unk_18009BD45,
          v14,
          v15,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v26);
      }
    }
  }
}
