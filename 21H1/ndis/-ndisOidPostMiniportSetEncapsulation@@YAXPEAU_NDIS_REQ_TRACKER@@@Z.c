/*
 * XREFs of ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0036D60
 * Callers:
 *     ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0036B00 (-ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOidPostMiniportSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  __int64 v6; // xmm1_8

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 4096LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1328);
    if ( v4 )
    {
      *(_DWORD *)(v2 + 32) = v4;
      *(_DWORD *)(v3 + 1328) = 0;
      *(_QWORD *)(v2 + 40) = *(_QWORD *)(*(_QWORD *)(v1 + 4096) + 1320LL);
      *(_QWORD *)(v3 + 1320) = 0LL;
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v2 + 52) == *(_DWORD *)(v2 + 48) )
        *(_DWORD *)(v2 + 52) = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1332LL);
      *(_DWORD *)(v2 + 48) = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 1332LL);
      *(_DWORD *)(v3 + 1332) = 0;
      if ( !*((_DWORD *)a1 + 10) )
      {
        v5 = *(_DWORD *)(v3 + 980);
        v6 = *(_QWORD *)(v3 + 972);
        *(_OWORD *)(v3 + 872) = *(_OWORD *)(v3 + 956);
        *(_QWORD *)(v3 + 888) = v6;
        *(_DWORD *)(v3 + 896) = v5;
      }
    }
  }
}
