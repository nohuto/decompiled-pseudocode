/*
 * XREFs of NdisFSynchronousOidRequest @ 0x1C00B0730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017200 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0308 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 */

__int64 __fastcall NdisFSynchronousOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  __int64 v9; // [rsp+40h] [rbp-18h]
  char v10[4]; // [rsp+40h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_0a532a69b4f93cf89502f53ea8ed50ba_Traceguids,
      (char)a1->Miniport,
      (char)a1,
      (char)a2,
      *(_DWORD *)v10);
  }
  FilterDriver = a1->FilterDriver;
  if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
    && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
     || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x50u) )
  {
    ndisBugCheckEx(0x28uLL, 2uLL, 0LL, 0LL);
  }
  v5 = ndisSynchronousOidRequestInternal((ULONG_PTR)a1, a1->Miniport, a1, a2);
  v7 = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v5;
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_0a532a69b4f93cf89502f53ea8ed50ba_Traceguids,
      (char)a1->Miniport,
      (char)a1,
      (char)a2,
      v9);
  }
  return v7;
}
