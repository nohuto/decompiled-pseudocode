/*
 * XREFs of ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C02168C4
 * Callers:
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C021683C (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5555555544455AEBU?$_tlgWrapperByRef@$0BA@@@44455@Z @ 0x1C0069D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C01BAD80 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

void __fastcall VIDPN_MGR::UpdateHPDFilteringTelemetry(
        VIDPN_MGR *this,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v10; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v12; // r11
  char *v13; // rbx
  int v14; // eax
  char TargetLinkTrainingStatus; // al
  int v16; // r9d
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // r11
  unsigned int v20; // ecx
  bool v21; // al
  __int64 v22; // rcx
  bool v23; // [rsp+D8h] [rbp-80h] BYREF
  bool v24; // [rsp+D9h] [rbp-7Fh] BYREF
  bool v25; // [rsp+DAh] [rbp-7Eh] BYREF
  char v26; // [rsp+DBh] [rbp-7Dh] BYREF
  unsigned __int8 v27; // [rsp+DCh] [rbp-7Ch] BYREF
  bool v28; // [rsp+DDh] [rbp-7Bh] BYREF
  char v29; // [rsp+DEh] [rbp-7Ah] BYREF
  char v30; // [rsp+DFh] [rbp-79h] BYREF
  bool v31; // [rsp+E0h] [rbp-78h] BYREF
  bool v32; // [rsp+E1h] [rbp-77h] BYREF
  bool v33; // [rsp+E2h] [rbp-76h] BYREF
  char v34; // [rsp+E3h] [rbp-75h] BYREF
  int v35; // [rsp+E4h] [rbp-74h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-60h] BYREF
  struct _DMM_HPD_FILTER_INFO *v39; // [rsp+100h] [rbp-58h] BYREF
  __int64 v40; // [rsp+108h] [rbp-50h] BYREF
  __int64 v41; // [rsp+110h] [rbp-48h] BYREF
  __int64 v42; // [rsp+118h] [rbp-40h] BYREF
  __int64 v43; // [rsp+120h] [rbp-38h] BYREF
  bool v44; // [rsp+148h] [rbp-10h] BYREF

  v5 = *((_QWORD *)this + 1);
  v7 = a4;
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *((_QWORD *)this + 1);
  }
  v10 = *(_QWORD *)(v5 + 16);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 15), v7);
  v12 = (__int64)TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL, v7);
    return;
  }
  v13 = (char *)TargetById + 568;
  v14 = *((_DWORD *)a2 + 10);
  if ( (v14 & 0xC0000) == 0 )
    goto LABEL_5;
  *(struct _GUID *)a2 = *a3;
  if ( (_BYTE)v14 == 8 )
    TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v12, 0LL);
  else
    TargetLinkTrainingStatus = 0;
  *((_BYTE *)a2 + 41) = TargetLinkTrainingStatus;
  v16 = *((_DWORD *)a2 + 10);
  if ( (v16 & 0x10000) != 0 )
  {
LABEL_23:
    *(_OWORD *)v13 = *(_OWORD *)a2;
    *((_OWORD *)v13 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v13 + 2) = *((_OWORD *)a2 + 2);
    return;
  }
  if ( (v16 & 0x20000) != 0 )
    goto LABEL_19;
  if ( (*((_DWORD *)v13 + 10) & 0x40000) != 0 )
  {
    if ( (__int64)(*((_QWORD *)a2 + 2) - *((_QWORD *)v13 + 2)) > 100000000 )
    {
      if ( (v16 & 0x40000) != 0 )
        goto LABEL_23;
LABEL_5:
      *(_OWORD *)v13 = 0LL;
      *((_OWORD *)v13 + 1) = 0LL;
      *((_OWORD *)v13 + 2) = 0LL;
      return;
    }
LABEL_19:
    v17 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)dword_1C012F918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000080LL) )
      {
        v20 = *((_DWORD *)v13 + 10);
        v39 = a2;
        v44 = (v18 & 0x80000) != 0;
        v23 = (v18 & 0x40000) != 0;
        v36 = *((_QWORD *)a2 + 4);
        v37 = *((_QWORD *)a2 + 3);
        v38 = *((_QWORD *)a2 + 2);
        v24 = (v20 & 0x80000) != 0;
        v25 = (v20 & 0x40000) != 0;
        v40 = *((_QWORD *)v13 + 4);
        v41 = *((_QWORD *)v13 + 3);
        v42 = *((_QWORD *)v13 + 2);
        v26 = BYTE2(v20) & 1;
        v27 = a5;
        v28 = (_BYTE)v18 == 10;
        v29 = v13[41];
        v30 = HIBYTE(v20) & 1;
        v31 = (v20 & 0x800000) != 0;
        v32 = (v20 & 0x400000) != 0;
        v21 = (v20 & 0x200000) != 0;
        v22 = v20 >> 20;
        v33 = v21;
        LOBYTE(v22) = v22 & 1;
        v43 = *(_QWORD *)(v10 + 404);
        v35 = *(_DWORD *)(v19 + 24);
        v34 = v22;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v22,
          byte_1C009A50A,
          (const GUID *)v13,
          v18,
          (__int64)&v35,
          (__int64)&v43,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v25,
          (__int64)&v24,
          (__int64 *)&v39,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v23,
          (__int64)&v44);
        v17 = *((_DWORD *)a2 + 10);
      }
    }
    if ( (v17 & 0x60000) == 0x40000 )
      goto LABEL_23;
    goto LABEL_5;
  }
  if ( (v16 & 0x40000) != 0 )
    goto LABEL_23;
}
