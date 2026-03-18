/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C017C2AC
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017BB64 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0059008 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005A534 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdi
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  SIZE_T v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  void **v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-38h]
  void **v28; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  int v31; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v33; // [rsp+94h] [rbp+24h]

  v33 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v30 = 0LL;
    v26 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v28 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v27 = 0LL;
    v31 = 3;
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v26, ResultLength);
    v19 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v20 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v23 = v20;
      if ( v20 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v24 + 24) = v23;
        WdLogEvent5_WdError(v24);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v26);
        return (unsigned int)v23;
      }
      v23 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a4, v23);
      v16 = *(void **)(a4 + 32);
      if ( v16 )
      {
        memmove(v16, v19 + 12, v23);
        LODWORD(v23) = 0;
        goto LABEL_12;
      }
    }
    v25 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    WdLogEvent5_WdLowResource(v25);
    LODWORD(v23) = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v14);
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v12;
  return 3221226021LL;
}
