/*
 * XREFs of ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x1C00913D4
 * Callers:
 *     ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00915B0 (-ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091650 (-ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001853C (WPP_RECORDER_SF_qDD_ea_1C001853C.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCapabilities(struct _NDIS_REQ_TRACKER *a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 v6; // si
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  v2 = *(_QWORD *)a1;
  v4 = *((_QWORD *)a1 + 4);
  v6 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v2,
      v4);
  v7 = *((_QWORD *)a1 + 3);
  if ( v7
    && (v8 = *(_QWORD *)(v7 + 24), *(_BYTE *)(v8 + 56) <= 6u)
    && (*(_BYTE *)(v8 + 56) != 6 || *(_BYTE *)(v8 + 57) < 0x14u)
    || (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    LOBYTE(v9) = -69;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v10 = 52;
    *((_DWORD *)a1 + 10) = 0;
    v9 = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x34u )
    {
      v9 = -1073676268;
      *(_DWORD *)(v4 + 56) = 52;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !v9 )
    {
      if ( *(_QWORD *)a1 )
      {
        v11 = *(_QWORD *)(v4 + 40);
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          v10 = 60;
          v13 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
          *(_OWORD *)v11 = *(_OWORD *)(v13 + v2 + 1060);
          *(_OWORD *)(v11 + 16) = *(_OWORD *)(v13 + v2 + 1076);
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v13 + v2 + 1092);
          *(_QWORD *)(v11 + 48) = *(_QWORD *)(v13 + v2 + 1108);
          *(_DWORD *)(v11 + 56) = *(_DWORD *)(v13 + v2 + 1116);
        }
        else
        {
          v12 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
          *(_OWORD *)v11 = *(_OWORD *)(v12 + v2 + 1060);
          *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + v2 + 1076);
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + v2 + 1092);
          *(_DWORD *)(v11 + 48) = *(_DWORD *)(v12 + v2 + 1108);
          *(_WORD *)(v11 + 2) = 52;
          *(_BYTE *)(v11 + 1) = 1;
        }
        *(_DWORD *)(v4 + 52) = v10;
        *(_DWORD *)(v4 + 56) = 0;
        *((_DWORD *)a1 + 10) = 0;
      }
      else
      {
        v6 = 0;
      }
      LOBYTE(v9) = 0;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v2,
      v9,
      v6);
  return v6;
}
