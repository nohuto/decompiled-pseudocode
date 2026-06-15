/*
 * XREFs of _lambda_4b369aa96bdcdce7616c4f02413351c1_::operator() @ 0x18011A14C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059D28 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119D24 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CE4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B954 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_J@Z @ 0x1800558E0 (--A-$span@H$0-0@gsl@@QEBAAEAH_J@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18011AA58 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18011F578 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall lambda_4b369aa96bdcdce7616c4f02413351c1_::operator()(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 64LL), *a1) )
  {
    if ( *a1
      && (v8 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                            (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
                            *a1),
          (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                          v8,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1) )
    {
      if ( *a1 != 3 )
      {
        v6 = -2147418113;
        v5 = 1999LL;
        goto LABEL_5;
      }
      v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
             (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
             3uLL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v9, a1 + 1) )
      {
        v6 = -2147418113;
        v5 = 1992LL;
        goto LABEL_5;
      }
      v10 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1720LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(v10, v11, a1 + 1) )
      {
        v5 = 1994LL;
        goto LABEL_4;
      }
    }
    else
    {
      v12 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v12,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v6 = -2147418113;
        v5 = 1984LL;
        goto LABEL_5;
      }
      v13 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1720LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v13,
                            v14,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v5 = 1986LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 64LL), *a1) = 1;
    v2 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
           *a1);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v2);
    v3 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1720LL),
           *a1);
    if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                          v3,
                          v4,
                          &GUID_00000000_0000_0000_0000_000000000000) )
    {
      v5 = 1977LL;
LABEL_4:
      v6 = -2147024882;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v6);
      return v6;
    }
  }
  v15 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
          *a1);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v15,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v5 = 2003LL;
    goto LABEL_4;
  }
  *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1704LL), *a1) = 1;
  return 0LL;
}
