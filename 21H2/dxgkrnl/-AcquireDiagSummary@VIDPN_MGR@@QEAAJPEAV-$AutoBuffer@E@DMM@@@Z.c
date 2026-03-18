/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067A6C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069178 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039E9C8 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039EC94 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A02FC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A0444 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7788 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7C10 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A8CE8 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C03B0CE0 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, _QWORD *a2)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  DMMVIDEOPRESENTTARGETSET *v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  void *v33; // r14
  __int64 v34; // rcx
  int v35; // eax
  size_t v36; // r12
  size_t v37; // r15
  int v38; // eax
  char *v39; // rbx
  char *v40; // rcx
  char *v41; // rbx
  char *v42; // rbx
  char *v43; // rbx
  char *v44; // rbx
  char *v45; // rbx
  char *v46; // rbx
  char *v47; // rbx
  _QWORD v48[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v49; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h]
  _QWORD v52[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v53; // [rsp+80h] [rbp-88h]
  size_t v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+90h] [rbp-78h]
  void **v56; // [rsp+98h] [rbp-70h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-68h]
  void **v58; // [rsp+B0h] [rbp-58h]
  void *v59; // [rsp+B8h] [rbp-50h]
  size_t v60; // [rsp+C0h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-40h]
  void **v62; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-30h]
  void **v64; // [rsp+E8h] [rbp-20h]
  void *v65; // [rsp+F0h] [rbp-18h]
  size_t v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  void **v68; // [rsp+108h] [rbp+0h] BYREF
  __int128 v69; // [rsp+110h] [rbp+8h]
  void **v70; // [rsp+120h] [rbp+18h]
  void *v71; // [rsp+128h] [rbp+20h]
  size_t v72; // [rsp+130h] [rbp+28h]
  __int64 v73; // [rsp+138h] [rbp+30h]
  void **v74; // [rsp+140h] [rbp+38h] BYREF
  __int128 v75; // [rsp+148h] [rbp+40h]
  void **v76; // [rsp+158h] [rbp+50h]
  void *v77; // [rsp+160h] [rbp+58h]
  size_t v78; // [rsp+168h] [rbp+60h]
  __int64 v79; // [rsp+170h] [rbp+68h]
  void **v80; // [rsp+178h] [rbp+70h] BYREF
  __int128 v81; // [rsp+180h] [rbp+78h]
  void **v82; // [rsp+190h] [rbp+88h]
  void *v83; // [rsp+198h] [rbp+90h]
  size_t v84; // [rsp+1A0h] [rbp+98h]
  __int64 v85; // [rsp+1A8h] [rbp+A0h]
  void **v86; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v87; // [rsp+1B8h] [rbp+B0h]
  void **v88; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  __int64 v91; // [rsp+1E0h] [rbp+D8h]
  void **v92; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v93; // [rsp+1F0h] [rbp+E8h]
  void **v94; // [rsp+200h] [rbp+F8h]
  void *v95; // [rsp+208h] [rbp+100h]
  size_t v96; // [rsp+210h] [rbp+108h]
  __int64 v97; // [rsp+218h] [rbp+110h]
  unsigned __int64 v98; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( a2[4] )
    WdLogSingleEntry0(1LL);
  v5 = a1[14];
  v86 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v88 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v87 = 0LL;
  v91 = 256LL;
  v6 = DMMVIDEOPRESENTSOURCESET::Serialize(v5, &v86);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = a1[1];
    if ( !v8 )
    {
      WdLogSingleEntry0(1LL);
      v8 = a1[1];
    }
    WdLogSingleEntry3(2LL, a1[14], *(_QWORD *)(v8 + 16), v7);
    goto LABEL_68;
  }
  v9 = (DMMVIDEOPRESENTTARGETSET *)a1[15];
  v80 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v83 = 0LL;
  v82 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v81 = 0LL;
  v84 = 0LL;
  v85 = 256LL;
  v10 = DMMVIDEOPRESENTTARGETSET::Serialize(v9);
  v7 = v10;
  if ( v10 < 0 )
  {
    v13 = a1[1];
    if ( !v13 )
    {
      WdLogSingleEntry0(1LL);
      v13 = a1[1];
    }
    WdLogSingleEntry3(2LL, a1[15], *(_QWORD *)(v13 + 16), v7);
    goto LABEL_67;
  }
  v14 = a1[16];
  v52[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v52[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v53 = 0LL;
  v54 = 0LL;
  v55 = 256LL;
  *(_OWORD *)&v52[1] = 0LL;
  if ( v14 )
  {
    v15 = DMMVIDPN::Serialize(v14, v52);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = a1[1];
      if ( !v16 )
      {
        WdLogSingleEntry0(1LL);
        v16 = a1[1];
      }
      WdLogSingleEntry3(2LL, a1[16], *(_QWORD *)(v16 + 16), v7);
      goto LABEL_66;
    }
LABEL_21:
    v77 = 0LL;
    v74 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v78 = 0LL;
    v76 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v79 = 256LL;
    v75 = 0LL;
    v19 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 24, &v74);
    v7 = v19;
    if ( v19 < 0 )
    {
      v20 = a1[1];
      if ( !v20 )
      {
        WdLogSingleEntry0(1LL);
        v20 = a1[1];
      }
      WdLogSingleEntry3(2LL, a1 + 24, *(_QWORD *)(v20 + 16), v7);
      goto LABEL_65;
    }
    v21 = a1[15];
    v68 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v71 = 0LL;
    v70 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v69 = 0LL;
    v72 = 0LL;
    v73 = 256LL;
    v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v68);
    v7 = v22;
    if ( v22 < 0 )
    {
      v23 = a1[1];
      if ( !v23 )
      {
        WdLogSingleEntry0(1LL);
        v23 = a1[1];
      }
      WdLogSingleEntry3(2LL, a1[15], *(_QWORD *)(v23 + 16), v7);
      goto LABEL_64;
    }
    v65 = 0LL;
    v62 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v66 = 0LL;
    v64 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v67 = 256LL;
    v63 = 0LL;
    v24 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 41, &v62);
    v7 = v24;
    if ( v24 < 0 )
    {
      v25 = a1[1];
      if ( !v25 )
      {
        WdLogSingleEntry0(1LL);
        v25 = a1[1];
      }
      WdLogSingleEntry3(2LL, a1 + 41, *(_QWORD *)(v25 + 16), v7);
      goto LABEL_63;
    }
    v59 = 0LL;
    v56 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v60 = 0LL;
    v58 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v61 = 256LL;
    v57 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v98, (__int64)a1);
    v26 = DMMVIDPN::SerializeVidPns(a1 + 32, &v56);
    v7 = v26;
    if ( v26 < 0 )
    {
      v27 = a1[1];
      if ( !v27 )
      {
        WdLogSingleEntry0(1LL);
        v27 = a1[1];
      }
      WdLogSingleEntry3(2LL, a1 + 32, *(_QWORD *)(v27 + 16), v7);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v98 + 40));
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v98 + 40));
    v28 = a1[1];
    v92 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v94 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v95 = 0LL;
    v96 = 0LL;
    v97 = 256LL;
    v98 = 0LL;
    v93 = 0LL;
    if ( !v28 )
    {
      WdLogSingleEntry0(1LL);
      v28 = a1[1];
    }
    v29 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v28 + 16), &v98, 0LL);
    v7 = v29;
    if ( (int)(v29 + 0x80000000) < 0 || v29 == -1073741789 )
    {
      v7 = v98;
      if ( !v98 )
        WdLogSingleEntry0(1LL);
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v92, v7, v30, v31);
      v33 = v95;
      v34 = a1[1];
      if ( !v95 )
      {
        if ( !v34 )
        {
          WdLogSingleEntry0(1LL);
          v34 = a1[1];
        }
        WdLogSingleEntry2(2LL, v7, *(_QWORD *)(v34 + 16));
        LODWORD(v7) = -1073741801;
        goto LABEL_61;
      }
      if ( !v34 )
      {
        WdLogSingleEntry0(1LL);
        v34 = a1[1];
      }
      v35 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v34 + 16), &v98, v33);
      v7 = v35;
      if ( v35 >= 0 )
      {
        v51 = 256LL;
        v36 = v96;
        v48[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v37 = Size + v84 + v54 + v78 + v72 + v66 + v96 + v60;
        *(_OWORD *)&v48[1] = 0LL;
        v48[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v49 = 0LL;
        v50 = 0LL;
        v38 = DMM::AutoBuffer<unsigned char>::Initialize(v48, v37 + 40, 0LL, 256LL);
        LODWORD(v7) = v38;
        if ( v38 >= 0 )
        {
          v7 = (unsigned __int64)v49;
          *((_DWORD *)v49 + 1) = v50;
          *(_WORD *)v7 = 24577;
          v39 = v49 + 40;
          v40 = v49 + 40;
          *(_DWORD *)(v7 + 8) = 40;
          memmove(v40, Src, Size);
          v41 = &v39[Size];
          *(_DWORD *)(v7 + 12) = (_DWORD)v41 - (_DWORD)v49;
          memmove(v41, v83, v84);
          v42 = &v41[v84];
          *(_DWORD *)(v7 + 16) = (_DWORD)v42 - (_DWORD)v49;
          memmove(v42, v53, v54);
          v43 = &v42[v54];
          *(_DWORD *)(v7 + 20) = (_DWORD)v43 - (_DWORD)v49;
          memmove(v43, v77, v78);
          v44 = &v43[v78];
          *(_DWORD *)(v7 + 24) = (_DWORD)v44 - (_DWORD)v49;
          memmove(v44, v71, v72);
          v45 = &v44[v72];
          *(_DWORD *)(v7 + 28) = (_DWORD)v45 - (_DWORD)v49;
          memmove(v45, v65, v66);
          v46 = &v45[v66];
          *(_DWORD *)(v7 + 32) = (_DWORD)v46 - (_DWORD)v49;
          memmove(v46, v59, v60);
          v47 = &v46[v60];
          *(_DWORD *)(v7 + 36) = (_DWORD)v47 - (_DWORD)v49;
          memmove(v47, v33, v36);
          LODWORD(v7) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v50, v49, v51);
          if ( (v7 & 0x80000000) == 0LL )
            LODWORD(v7) = 0;
          else
            WdLogSingleEntry2(2LL, a2, v48);
        }
        else
        {
          WdLogSingleEntry3(2LL, v37 + 40, a1, v38);
        }
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v48);
        goto LABEL_61;
      }
      v32 = a1[1];
      if ( !v32 )
        goto LABEL_53;
    }
    else
    {
      v32 = a1[1];
      if ( !v32 )
      {
LABEL_53:
        WdLogSingleEntry0(1LL);
        v32 = a1[1];
      }
    }
    WdLogSingleEntry2(2LL, *(_QWORD *)(v32 + 16), v7);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v92);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v56);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v62);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v68);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v74);
    goto LABEL_66;
  }
  v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(v52, 0xCuLL, v11, v12);
  LODWORD(v7) = v17;
  if ( v17 >= 0 )
  {
    v18 = v53;
    *(_QWORD *)v53 = qword_1C01302F0;
    v18[2] = dword_1C01302F8;
    goto LABEL_21;
  }
  WdLogSingleEntry2(2LL, 12LL, v17);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v52);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v80);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v86);
  return (unsigned int)v7;
}
