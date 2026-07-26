/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005C9C0
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005A8E0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005ADC8 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C005C1F0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C005CDE0 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D00C (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01148E8 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0qxzzxxxxxx_EtwWriteTransfer @ 0x1C005D518 (McTemplateK0qxzzxxxxxx_EtwWriteTransfer.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KSPIN_LOCK *AoAc; // rbx
  __int128 v4; // rdi
  KSPIN_LOCK v5; // r14
  KSPIN_LOCK v6; // r15
  KSPIN_LOCK v7; // r12
  KSPIN_LOCK v8; // r13
  char *v9; // rcx
  unsigned __int64 v10; // r11
  KSPIN_LOCK v11; // r10
  KSPIN_LOCK v12; // r9
  KSPIN_LOCK v13; // r8
  KSPIN_LOCK v14; // rdx
  KSPIN_LOCK v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+78h] [rbp-88h] BYREF
  __int128 v25; // [rsp+88h] [rbp-78h]
  __int128 v26; // [rsp+98h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __int128 v30; // [rsp+D0h] [rbp-30h]
  struct _NDIS_OID_REQUEST v31; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v32[20]; // [rsp+1E0h] [rbp+E0h] BYREF

  v27 = a1;
  memset((char *)v32 + 1, 0, 0x97uLL);
  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v32[0] = 9961856LL;
  memset(&v31, 0, 0xF8uLL);
  *(_DWORD *)&v31.NdisReserved[16] |= 8u;
  *(_QWORD *)&v31.NdisReserved[32] = &ndisIntReqGeneric;
  v31.DATA.QUERY_INFORMATION.InformationBuffer = v32;
  v31.Header = (NDIS_OBJECT_HEADER)15466902;
  v31.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&v31.RequestType = 2LL;
  v31.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      (char)&v31,
      a1);
  if ( !(unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v31, 0, 0LL, 0LL) )
  {
    *(_QWORD *)&v4 = v32[4];
    *((_QWORD *)&v4 + 1) = v32[8];
    v5 = v32[5];
    v6 = v32[9];
    v7 = v32[6];
    v8 = v32[10];
    v24 = 0LL;
    *(_QWORD *)&v28 = v32[4];
    v25 = 0LL;
    *((_QWORD *)&v28 + 1) = v32[8];
    v26 = 0LL;
    *(_QWORD *)&v29 = v32[5];
    *((_QWORD *)&v29 + 1) = v32[9];
    *(_QWORD *)&v30 = v32[6];
    *((_QWORD *)&v30 + 1) = v32[10];
    NewIrql = KeAcquireSpinLockRaiseToDpc(AoAc);
    v9 = (char *)&AoAc[6 * a2 + 111];
    if ( a2 )
    {
      v10 = AoAc[111];
      if ( (unsigned __int64)v4 >= v10 )
      {
        v11 = AoAc[112];
        if ( *((_QWORD *)&v4 + 1) >= v11 )
        {
          v12 = AoAc[113];
          if ( v5 >= v12 )
          {
            v13 = AoAc[114];
            if ( v6 >= v13 )
            {
              v14 = AoAc[115];
              if ( v7 >= v14 )
              {
                v15 = AoAc[116];
                if ( v8 >= v15 )
                {
                  *(_QWORD *)&v4 = v4 - v10;
                  *((_QWORD *)&v4 + 1) -= v11;
                  v5 -= v12;
                  v6 -= v13;
                  v7 -= v14;
                  v8 -= v15;
                }
              }
            }
          }
        }
      }
      *((_QWORD *)&v26 + 1) = v8;
      v16 = (char *)&v24 - v9;
      *(_QWORD *)&v26 = v7;
      *((_QWORD *)&v25 + 1) = v6;
      v17 = 6LL;
      *(_QWORD *)&v25 = v5;
      v24 = v4;
      do
      {
        *(_QWORD *)v9 += *(_QWORD *)&v9[v16];
        v9 += 8;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      LOBYTE(v8) = BYTE8(v26);
      LOBYTE(v7) = v26;
      LOBYTE(v6) = BYTE8(v25);
      LOBYTE(v5) = v25;
      v4 = v24;
    }
    v18 = v29;
    *(_OWORD *)(AoAc + 111) = v28;
    v19 = v30;
    *(_OWORD *)(AoAc + 113) = v18;
    *(_OWORD *)(AoAc + 115) = v19;
    KeReleaseSpinLock(AoAc, NewIrql);
    if ( a2 && (byte_1C00E6083 & 4) != 0 )
    {
      v20 = L"D0";
      v21 = L"DX";
      if ( a2 != 1 )
      {
        v21 = L"D0";
        v20 = L"DX";
      }
      McTemplateK0qxzzxxxxxx_EtwWriteTransfer(
        (_DWORD)v20,
        (_DWORD)v27,
        (_DWORD)v27 + 4008,
        v27->IfIndex,
        v27->NetLuid.Value,
        (__int64)v20,
        (__int64)v21,
        v4,
        SBYTE8(v4),
        v5,
        v6,
        v7,
        v8);
    }
  }
}
