/*
 * XREFs of ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095ABC
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00169B0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C011F0A4 (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C011F188 (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 */

__int64 __fastcall ndisXlateAddWolPatternToPacketPatternOid(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  _DWORD *InformationBuffer; // r15
  unsigned int v3; // esi
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // r8
  _DWORD *v10; // rdi
  char *v11; // rcx
  int v12; // eax
  UINT v14; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  v3 = 0;
  v14 = 0;
  *a2 = 0;
  if ( InformationBuffer[3] == 1 )
  {
    MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(&P);
    v7 = P;
    if ( P )
    {
      *(_DWORD *)P = a1->DATA.QUERY_INFORMATION.Oid;
      v7[1] = a1->DATA.QUERY_INFORMATION.InformationBuffer;
      *((_DWORD *)v7 + 4) = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
      v8 = InformationBuffer[41];
      v9 = v8 + InformationBuffer[43];
      if ( (unsigned int)v9 < v8 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x6Fu,
            (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
            a1);
        v3 = -1073741811;
      }
      else
      {
        MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(&P, v6, v9, &v14);
        v10 = P;
        if ( P )
        {
          v11 = (char *)P + 24;
          *((_DWORD *)P + 1) = InformationBuffer[37];
          *v10 = InformationBuffer[2];
          v12 = InformationBuffer[41];
          v10[2] = v12;
          v10[3] = v12 + 24;
          v10[4] = InformationBuffer[43];
          memmove(v11, (char *)InformationBuffer + (unsigned int)InformationBuffer[40], (unsigned int)v10[2]);
          memmove(
            (char *)v10 + (unsigned int)v10[3],
            (char *)InformationBuffer + (unsigned int)InformationBuffer[42],
            (unsigned int)v10[4]);
          a1->DATA.QUERY_INFORMATION.InformationBufferLength = v14;
          a1->DATA.QUERY_INFORMATION.Oid = -50265853;
          a1->DATA.QUERY_INFORMATION.InformationBuffer = v10;
          v7[3] = v10;
          *(_QWORD *)&a1->NdisReserved[72] = v7;
          return v3;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            (_DWORD)P + 11,
            (_WORD)P + 112,
            (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
            a1);
        v3 = -1073741670;
      }
      *a2 = 1;
      ExFreePoolWithTag(v7, 0);
      return v3;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        (_DWORD)P + 11,
        (_WORD)P + 110,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        a1);
    v3 = -1073741670;
    *a2 = 1;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x6Du,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        (char)a1,
        InformationBuffer[3]);
    *a2 = 1;
    return (unsigned int)-1073741637;
  }
  return v3;
}
