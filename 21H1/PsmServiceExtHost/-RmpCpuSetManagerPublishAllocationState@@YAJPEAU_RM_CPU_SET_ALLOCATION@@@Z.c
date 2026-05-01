/*
 * XREFs of ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006D05C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006BAD0 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006CAD0 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x18006CC50 (-RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerPublishAllocationState(struct _RM_CPU_SET_ALLOCATION *a1)
{
  unsigned int v2; // r9d
  int v3; // ebx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v8; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v9[514]; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+850h] [rbp+750h] BYREF
  int *v11; // [rsp+870h] [rbp+770h]
  int v12; // [rsp+878h] [rbp+778h]
  int v13; // [rsp+87Ch] [rbp+77Ch]

  if ( *((_DWORD *)a1 + 66) )
  {
    v7 = 0;
    RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(a1, &v8, v9);
    v2 = v8;
  }
  else
  {
    v2 = 0;
    v7 = -1073741393;
    v8 = 0;
  }
  v3 = RtlPublishWnfStateData(*((_QWORD *)a1 + 12), 0LL, &v7, 4 * v2 + 8, 0LL);
  if ( v3 < 0 && (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v13 = 0;
    v11 = &v6;
    v6 = v3;
    v12 = 4;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18009C71B, 0LL, 0LL, 3u, &v10);
  }
  return (unsigned int)v3;
}
