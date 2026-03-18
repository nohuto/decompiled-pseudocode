/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0212330
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067A6C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, _QWORD *a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char *v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  unsigned __int64 v19; // rbx
  void *v20; // rcx
  void **v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-38h]
  void **v23; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v28; // [rsp+94h] [rbp+24h]

  v28 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v25 = 0LL;
    v21 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v23 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v22 = 0LL;
    v26 = 256LL;
    DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v21, ResultLength, v10, v11);
    v14 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v15 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v18 = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v21);
        return v18;
      }
      v19 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a4, v19, v16, v17);
      v20 = (void *)a4[4];
      if ( v20 )
      {
        memmove(v20, v14 + 12, v19);
        v18 = 0;
        goto LABEL_12;
      }
    }
    WdLogSingleEntry0(6LL);
    v18 = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = v12;
  return 3221226021LL;
}
