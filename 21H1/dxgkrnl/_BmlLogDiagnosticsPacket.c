/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1C014EBF0
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00E02B8 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02E7DA8 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00175D0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0018EC0 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C014EF78 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(DXGFASTMUTEX ***a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  char *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  DMMVIDPNTOPOLOGY *v17; // r12
  __int64 v18; // r13
  unsigned int v19; // r15d
  __int64 v20; // rdx
  __int64 *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rcx
  DMMVIDPNTOPOLOGY *v24; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char *v33; // [rsp+78h] [rbp+20h]

  v7 = 376 * *a4 + 64;
  v8 = (char *)operator new[](v7, 0x63644356u, PagedPool);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *(_DWORD *)v14 = 32;
    *((_DWORD *)v14 + 1) = v7;
    *((_DWORD *)v14 + 10) = 0;
    *((_QWORD *)v14 + 4) = 0LL;
    *(_OWORD *)(v14 + 8) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_DWORD *)v14 + 12) = *a4;
    v16 = *((_DWORD *)a4 + 1);
    *((_DWORD *)v14 + 14) = a2;
    v17 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    *((_DWORD *)v14 + 13) = v16;
    v18 = *(_QWORD *)(a3 + 48);
    v19 = 0;
    if ( *a4 )
    {
      do
      {
        v20 = 104LL * v19;
        v21 = *(__int64 **)&a4[v20 + 16];
        v22 = *v21;
        if ( (*v21 & 0x700000000000LL) == 0x700000000000LL )
        {
          v23 = 376LL * v19;
          *(_QWORD *)&v14[v23 + 64] = v22;
          *(_QWORD *)&v14[v23 + 72] = v21[1];
          *(_QWORD *)&v14[v23 + 80] = v21[2];
          *(_DWORD *)&v14[v23 + 88] = *((_DWORD *)v21 + 6);
          *(_DWORD *)&v14[v23 + 92] = *((_DWORD *)v21 + 7);
          *(_DWORD *)&v14[v23 + 136] = *((_DWORD *)v21 + 8);
          *(_QWORD *)&v14[v23 + 104] = *(__int64 *)((char *)v21 + 36);
          *(_QWORD *)&v14[v23 + 112] = *(__int64 *)((char *)v21 + 44);
          *(_QWORD *)&v14[v23 + 120] = *(__int64 *)((char *)v21 + 52);
          *(_QWORD *)&v14[v23 + 128] = *(__int64 *)((char *)v21 + 60);
          *(_QWORD *)&v14[v23 + 96] = *((unsigned int *)v21 + 18);
          *(_DWORD *)&v14[v23 + 140] = (int)(*((_DWORD *)v21 + 20) << 29) >> 29;
          *(_DWORD *)&v14[v23 + 144] = *((_DWORD *)v21 + 22);
          *(_DWORD *)&v14[v23 + 148] = *((_DWORD *)v21 + 23);
          *(_OWORD *)&v14[v23 + 152] = *((_OWORD *)v21 + 6);
          *(_OWORD *)&v14[v23 + 168] = *((_OWORD *)v21 + 7);
          *(_DWORD *)&v14[v23 + 184] = *((_DWORD *)v21 + 33);
          *(_DWORD *)&v14[v23 + 188] = *((_DWORD *)v21 + 34);
          *(_DWORD *)&v14[v23 + 192] = *((_DWORD *)v21 + 35);
          *(_QWORD *)&v14[v23 + 196] = v21[18];
          *(_DWORD *)&v14[v23 + 352] = *(_DWORD *)&a4[v20 + 24];
          *(_DWORD *)&v14[v23 + 356] = *(_DWORD *)&a4[v20 + 28];
          *(_WORD *)&v14[v23 + 360] = *(_WORD *)&a4[v20 + 32];
          *(_QWORD *)&v14[v23 + 364] = *(_QWORD *)&a4[v20 + 36];
          *(_QWORD *)&v14[v23 + 372] = *(_QWORD *)&a4[v20 + 44];
          *(_QWORD *)&v14[v23 + 380] = *(_QWORD *)&a4[v20 + 52];
          *(_DWORD *)&v14[v23 + 388] = *(_DWORD *)&a4[v20 + 60];
          *(_WORD *)&v14[v23 + 392] = *(_WORD *)&a4[v20 + 64];
          *(_WORD *)&v14[v23 + 394] = *(_WORD *)&a4[v20 + 66];
          *(_WORD *)&v14[v23 + 396] = *(_WORD *)&a4[v20 + 68];
          *(_WORD *)&v14[v23 + 398] = *(_WORD *)&a4[v20 + 70];
          *(_DWORD *)&v14[v23 + 400] = *(_DWORD *)&a4[v20 + 72];
          *(_DWORD *)&v14[v23 + 404] = *(_DWORD *)&a4[v20 + 76];
          *(_DWORD *)&v14[v23 + 408] = *(_DWORD *)&a4[v20 + 80];
          *(_DWORD *)&v14[v23 + 412] = *(_DWORD *)&a4[v20 + 84];
          *(_DWORD *)&v14[v23 + 416] = *(_DWORD *)&a4[v20 + 88];
          *(_DWORD *)&v14[v23 + 424] = *(_DWORD *)&a4[v20 + 96];
          *(_DWORD *)&v14[v23 + 420] = *(_DWORD *)&a4[v20 + 92];
          *(_DWORD *)&v14[v23 + 432] = *(_DWORD *)&a4[v20 + 104];
          *(_DWORD *)&v14[v23 + 428] = *(_DWORD *)&a4[v20 + 100];
          *(_QWORD *)&v14[v23 + 224] = v21[2];
          *(_DWORD *)&v14[v23 + 232] = *((_DWORD *)v21 + 6);
          *(_DWORD *)&v14[v23 + 236] = *((_DWORD *)v21 + 7);
          v33 = &v14[v23 + 208];
          *(_QWORD *)v33 = 0x700000000000LL;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v17);
          if ( FirstPath )
          {
            v26 = *(_QWORD *)(v18 + 8);
            while ( 1 )
            {
              if ( !v26 )
              {
                v30 = WdLogNewEntry5_WdAssertion(v24, 0LL);
                WdLogEvent5_WdAssertion(v30);
                v26 = *(_QWORD *)(v18 + 8);
              }
              v27 = *(_QWORD *)(v26 + 16);
              if ( *((_DWORD *)v21 + 4) == *(_DWORD *)(v27 + 316)
                && *((_DWORD *)v21 + 5) == *(_DWORD *)(v27 + 320)
                && *((_DWORD *)v21 + 6) == *(_DWORD *)(*((_QWORD *)FirstPath + 11) + 24LL)
                && *((_DWORD *)v21 + 7) == *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL) )
              {
                break;
              }
              v24 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
              FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v24 - 8);
              if ( v24 == (DMMVIDPNTOPOLOGY *)((char *)v17 + 24) )
                FirstPath = 0LL;
              if ( !FirstPath )
                goto LABEL_13;
            }
            _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(FirstPath, v33);
          }
        }
        else
        {
          v31 = WdLogNewEntry5_WdWarning(v15, v20, v22);
          *(_QWORD *)(v31 + 24) = v19;
          *(_QWORD *)(v31 + 32) = v21;
          WdLogEvent5_WdWarning(v31);
        }
LABEL_13:
        v15 = *a4;
        ++v19;
      }
      while ( v19 < (unsigned int)v15 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v14);
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v29 + 24) = a4;
    *(_QWORD *)(v29 + 32) = *a4;
    WdLogEvent5_WdLowResource(v29);
    v13 = -1073741670;
  }
  operator delete[](v14);
  return v13;
}
