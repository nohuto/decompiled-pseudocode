/*
 * XREFs of ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x1C0030F48
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C0030238 (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C0030900 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005DC28 (WPP_RECORDER_SF_DD_ea_1C005DC28.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C00A155C (WPP_RECORDER_SF_Ddd_ea_1C00A155C.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        __int64 a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6,
        ULONG Tag,
        void **a8,
        unsigned int *a9,
        unsigned int *a10)
{
  unsigned int v10; // esi
  void *v11; // rdi
  unsigned int i; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ebx
  UINT BytesNeeded; // ecx
  PVOID PoolWithTag; // rax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-28h]

  v10 = 0;
  v11 = 0LL;
  for ( i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL); ; i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL) )
  {
    v18 = i;
    if ( i != -1073676268 && i != -2147483643 && i != -1073676266 )
      break;
    BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    if ( BytesNeeded <= v10 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          v16,
          v17,
          v23,
          a3->DATA.QUERY_INFORMATION.Oid,
          BytesNeeded,
          v10);
      v18 = -1073741823;
      goto LABEL_19;
    }
    v10 = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v10 = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, Tag);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          11,
          11,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
          v10,
          a3->DATA.QUERY_INFORMATION.Oid);
      }
      v18 = -1073741670;
      break;
    }
    a3->DATA.QUERY_INFORMATION.InformationBuffer = PoolWithTag;
    a3->DATA.QUERY_INFORMATION.InformationBufferLength = v10;
  }
  if ( !v18 )
  {
    *a10 = a3->DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_7;
  }
LABEL_19:
  v10 = 0;
  *a10 = 0;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    v11 = 0LL;
  }
LABEL_7:
  *a8 = v11;
  *a9 = v10;
  return v18;
}
