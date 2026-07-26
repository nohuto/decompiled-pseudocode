/*
 * XREFs of ?ndisOidPreGetPciDeviceCustomProperties@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 */

unsigned __int8 __fastcall ndisOidPreGetPciDeviceCustomProperties(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  char v9[4]; // [rsp+38h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x97u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      0,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    v4 = 52;
    if ( *(_DWORD *)(v1 + 48) >= 0x34u )
    {
      if ( *(_QWORD *)a1 )
      {
        v3 = *(_QWORD *)a1;
      }
      else
      {
        v5 = *((_QWORD *)a1 + 2);
        if ( v5 )
          v3 = *(_QWORD *)(v5 + 32);
      }
      if ( *(_DWORD *)(v3 + 3720) == 5 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v6 = *(_OWORD *)(v3 + 3336);
        *(_OWORD *)(v6 + 16) = *(_OWORD *)(v3 + 3352);
        *(_OWORD *)(v6 + 32) = *(_OWORD *)(v3 + 3368);
        *(_DWORD *)(v6 + 48) = *(_DWORD *)(v3 + 3384);
        v7 = 0;
      }
      else
      {
        v4 = 0;
        v7 = -1073741808;
      }
      *((_DWORD *)a1 + 10) = v7;
      *(_DWORD *)(v1 + 52) = v4;
      *(_DWORD *)(v1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 52;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x98u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v3,
      1,
      *(_DWORD *)v9);
  }
  return 1;
}
