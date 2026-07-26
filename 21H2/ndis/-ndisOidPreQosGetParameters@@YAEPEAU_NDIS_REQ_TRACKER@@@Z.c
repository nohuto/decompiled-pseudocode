/*
 * XREFs of ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D610
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

char __fastcall ndisOidPreQosGetParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  char v4; // bl
  unsigned __int16 *p_Type; // r14
  unsigned int v6; // eax
  KIRQL v7; // dl
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v10[3]; // [rsp+48h] [rbp-70h] BYREF
  int v11; // [rsp+78h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Bu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v3,
      *((_QWORD *)a1 + 4));
  *((_DWORD *)a1 + 10) = 0;
  v11 = 0;
  memset(v10, 0, sizeof(v10));
  NewIrql[0] = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x34u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v3 )
      goto LABEL_19;
    if ( !v3->QosHwCapabilities )
    {
LABEL_6:
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, NewIrql);
      if ( *(_DWORD *)(v1 + 32) == -66781180 )
        p_Type = (unsigned __int16 *)&v3->QosOperationalParameters->Header.Type;
      else
        p_Type = (unsigned __int16 *)&v3->QosRemoteParameters->Header.Type;
      if ( !p_Type )
      {
        LODWORD(v10[0]) = 3408310;
        p_Type = (unsigned __int16 *)v10;
      }
      *((_DWORD *)a1 + 10) = 0;
      v6 = p_Type[1];
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        memmove(*(void **)(v1 + 40), p_Type, p_Type[1]);
        *(_DWORD *)(v1 + 52) = p_Type[1];
      }
      else
      {
        *(_DWORD *)(v1 + 56) = v6;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      v7 = NewIrql[0];
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, v7);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 52;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  v4 = 1;
LABEL_19:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Cu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v3,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
