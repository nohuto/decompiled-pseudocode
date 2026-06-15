/*
 * XREFs of ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x1801420D0
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180141CB4 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 *     ?IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z @ 0x180142FE0 (-IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x1800F583C (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?NewNode@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@AEAAPEAVCNode@12@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAV312@1@Z @ 0x180143138 (-NewNode@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@AEAAPEAVCNode@12@.c)
 */

__int64 __fastcall TelephonyController::GetSupportedCellularRoutingPairs(TelephonyController *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 *v24; // rax
  GUID v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  _BYTE v32[1056]; // [rsp+80h] [rbp-80h] BYREF
  char v33; // [rsp+4C0h] [rbp+3C0h] BYREF

  v28 = 512;
  *(_OWORD *)v29 = 0LL;
  v31 = 0LL;
  v2 = *((_QWORD *)this + 24);
  v30 = 0LL;
  v3 = 0;
  v27 = 0;
  v26 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, unsigned __int64 *, int, char *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &v26,
         24LL,
         v29,
         40,
         &v33);
  if ( v4 >= 0 )
  {
    v5 = operator new(HIDWORD(v29[0]));
    v6 = v5;
    if ( v5 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD *, _DWORD, char *))(**((_QWORD **)this + 24) + 24LL))(
             *((_QWORD *)this + 24),
             &v26,
             24LL,
             v5,
             HIDWORD(v29[0]),
             &v33);
      if ( v7 >= 0 )
      {
        v8 = v6[1] - *(_QWORD *)&GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97.Data1;
        if ( !v8 )
          v8 = v6[2] - *(_QWORD *)GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97.Data4;
        if ( v8
          || *((_DWORD *)v6 + 6)
          || *((_DWORD *)v6 + 7)
          || *((_DWORD *)v6 + 8) != 1
          || *((_DWORD *)v6 + 9)
          || *((_DWORD *)v6 + 10) != 3
          || *((_DWORD *)v6 + 11) != 1048
          || !*((_DWORD *)v6 + 12)
          || *((_DWORD *)v6 + 13) )
        {
          v3 = -2147024809;
        }
        else
        {
          ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)this + 72);
          v9 = 0;
          if ( *((_DWORD *)v6 + 12) )
          {
            v10 = *((_QWORD *)this + 10);
            do
            {
              v11 = 8LL;
              v12 = &v6[131 * v9 + 7];
              v13 = v32;
              do
              {
                v14 = *v12;
                v15 = v12[1];
                v12 += 8;
                *v13 = v14;
                v16 = *(v12 - 6);
                v13[1] = v15;
                v17 = *(v12 - 5);
                v13[2] = v16;
                v18 = *(v12 - 4);
                v13[3] = v17;
                v19 = *(v12 - 3);
                v13[4] = v18;
                v20 = *(v12 - 2);
                v13[5] = v19;
                v21 = *(v12 - 1);
                v13[6] = v20;
                v13 += 8;
                *(v13 - 1) = v21;
                --v11;
              }
              while ( v11 );
              v22 = *v12;
              v23 = *((_QWORD *)v12 + 2);
              *v13 = v22;
              *((_QWORD *)v13 + 2) = v23;
              v10 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::NewNode(
                      (char *)this + 72,
                      v32,
                      v10);
              v24 = (__int64 *)*((_QWORD *)this + 10);
              if ( v24 )
                *v24 = v10;
              else
                *((_QWORD *)this + 9) = v10;
              ++v9;
              *((_QWORD *)this + 10) = v10;
            }
            while ( v9 < *((_DWORD *)v6 + 12) );
          }
        }
      }
      else
      {
        v3 = v7;
      }
      operator delete(v6);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)v4;
  }
  return v3;
}
