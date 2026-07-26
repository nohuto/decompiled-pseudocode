/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B2F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C0035EA4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035EE4 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  const struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // r11
  KIRQL v4; // r13
  unsigned int v5; // ebx
  bool IsCompartmentAccessibleByClient; // al
  const struct _NDIS_IF_COMPARTMENT_BLOCK **v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  bool v10; // cf
  __int64 v11; // r12
  char *v12; // r15
  unsigned int v13; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v14; // r14
  unsigned int v15; // esi
  KIRQL v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+48h] [rbp-50h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h]

  v18 = 0LL;
  v19 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v18);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v3 = qword_1C00E4B00;
  v4 = v2;
  v17 = v2;
  v5 = 0;
  if ( qword_1C00E4B00 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B00 )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(
                                          v3,
                                          (const struct _NDIS_NSI_CLIENT_INFO *)&v18,
                                          1);
      v3 = *v7;
      v8 = v5 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v5;
      v5 = v8;
    }
    while ( v3 != (const struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B00 );
    v4 = v17;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v9 )
  {
    v11 = *((_QWORD *)a1 + 2);
    v12 = (char *)*((_QWORD *)a1 + 5);
    if ( v11 && *((_DWORD *)a1 + 6) != 4 || v12 && *((_DWORD *)a1 + 12) < 0x668u )
    {
      v13 = -1073741306;
      goto LABEL_26;
    }
    v14 = qword_1C00E4B00;
    v15 = 0;
    do
    {
      if ( v14 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E4B00 )
        break;
      if ( ndisIsCompartmentAccessibleByClient(v14, (const struct _NDIS_NSI_CLIENT_INFO *)&v18, 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_DWORD *)(v11 + 4LL * v15) = *((_DWORD *)v14 + 4);
        if ( *((_QWORD *)a1 + 5) )
        {
          memmove(v12, (char *)v14 + 64, 0x668uLL);
          v12 += *((unsigned int *)a1 + 12);
        }
        ++v15;
      }
      v14 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v14;
    }
    while ( v15 < v9 );
    v4 = v17;
    v10 = v15 < v5;
  }
  else
  {
    v10 = v5 != 0;
  }
  v13 = v10 ? 0x105 : 0;
LABEL_26:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x18u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      (char)a1,
      v13);
  return v13;
}
