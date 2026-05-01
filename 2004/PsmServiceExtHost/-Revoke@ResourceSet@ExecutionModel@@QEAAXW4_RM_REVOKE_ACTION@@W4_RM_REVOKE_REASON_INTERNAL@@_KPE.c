/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180072790
 * Callers:
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006B6B4 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180071DF0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FE60 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007216C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByV.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U1@U?$_tlgWrapperByVal@$01@@U3@U?$_tlgWrapperByVal@$03@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@443AEBU?$_tlgWrapperByVal@$01@@5AEBU?$_tlgWrapperByVal@$03@@433@Z @ 0x180072248 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@U1@U-$_tlgWrapperByVal@$01@@U3@.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r10
  char v17; // r11
  __int64 v18; // rbx
  char v20; // [rsp+88h] [rbp-80h] BYREF
  char v21; // [rsp+89h] [rbp-7Fh] BYREF
  char v22; // [rsp+8Ah] [rbp-7Eh] BYREF
  char v23; // [rsp+8Bh] [rbp-7Dh] BYREF
  unsigned int v24; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int16 v25; // [rsp+90h] [rbp-78h] BYREF
  __int16 v26; // [rsp+92h] [rbp-76h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  void *v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v32[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-28h]
  void *v34; // [rsp+F8h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 1284);
  if ( (v5 & 1) != 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      LOBYTE(v5) = tlgKeywordOn((__int64)&dword_1800B31E0, 9LL);
      if ( (_BYTE)v5 )
      {
        v11 = *(_QWORD *)(a1 + 1320);
        v27 = *(_QWORD *)(v11 + 32);
        v28 = (void *)(v11 + 88);
        v29 = *(_QWORD *)(a1 + 1752);
        v20 = a2;
        v24 = a3;
        LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                       v11,
                       byte_18009D1BD,
                       v9,
                       v10,
                       (__int64)&v29,
                       &v28,
                       (__int64)&v27,
                       (__int64)&v24,
                       (__int64)&v20);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1284) = v5 | 1;
    v24 = 16776960;
    *(_DWORD *)(a1 + 1772) = GetTickCount();
    LOBYTE(v24) = a2;
    if ( dword_1800B31E0 )
    {
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1312) + 64LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v32);
      v12 = a5 ? *(_QWORD *)(a5 + 1752) : -1LL;
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 0x400000000009LL) )
      {
        v29 = v33;
        v28 = v34;
        v26 = *(_WORD *)(a1 + 1336);
        v23 = *(_BYTE *)(a1 + 1288);
        v31 = *(_QWORD *)(a1 + 1752);
        v20 = a2;
        LODWORD(v27) = a3;
        v25 = v15;
        v30 = v12;
        v21 = v17;
        v22 = v16;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v13,
          byte_18009D2BD,
          v14,
          v15,
          (__int64)&v31,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v30,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v27,
          (__int64)&v20,
          (__int64)&v28,
          (__int64)&v29);
      }
    }
    v18 = *(_QWORD *)(a1 + 1712);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, *(_QWORD *)(a1 + 1720), v24);
    LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v5;
}
