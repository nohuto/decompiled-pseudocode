/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800410E4
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040E34 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18004117C (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperArray@$07@@@Z @ 0x18006BA30 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  unsigned int v1; // ebx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int v11; // eax
  __int16 v12; // dx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD *v17; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-B8h] BYREF
  int *v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+74h] [rbp-8Ch]
  _OWORD SystemInformation[10]; // [rsp+80h] [rbp-80h] BYREF

  if ( *((_DWORD *)a1 + 230) >= *((_DWORD *)a1 + 229) && *((_DWORD *)a1 + 228) == -1 )
  {
    v1 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v22 = 0;
      v20 = (int *)&v16;
      v16 = v1;
      v21 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B31E0,
        (unsigned __int8 *)dword_18009C6B3,
        0LL,
        0LL,
        3u,
        &v19);
    }
  }
  else
  {
    v3 = *(_OWORD *)((char *)a1 + 264);
    SystemInformation[0] = *(_OWORD *)((char *)a1 + 248);
    v4 = *(_OWORD *)((char *)a1 + 280);
    SystemInformation[1] = v3;
    v5 = *(_OWORD *)((char *)a1 + 296);
    SystemInformation[2] = v4;
    v6 = *(_OWORD *)((char *)a1 + 312);
    SystemInformation[3] = v5;
    v7 = *(_OWORD *)((char *)a1 + 328);
    SystemInformation[4] = v6;
    v8 = *(_OWORD *)((char *)a1 + 344);
    SystemInformation[5] = v7;
    v9 = *(_OWORD *)((char *)a1 + 376);
    SystemInformation[6] = v8;
    SystemInformation[7] = *(_OWORD *)((char *)a1 + 360);
    v10 = *(_OWORD *)((char *)a1 + 392);
    v11 = *((_DWORD *)a1 + 228);
    SystemInformation[8] = v9;
    SystemInformation[9] = v10;
    if ( v11 != -1 )
      *((_QWORD *)SystemInformation + ((unsigned __int64)(unsigned int)(v11 - 256) >> 16)) &= ~(1LL << v11);
    v1 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v16 = v1;
      v17 = SystemInformation;
      v18 = v12 + 19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
        v13,
        (unsigned int)&unk_18009C482,
        v14,
        v15,
        (__int64)&v16,
        (__int64)&v17);
    }
  }
  return v1;
}
