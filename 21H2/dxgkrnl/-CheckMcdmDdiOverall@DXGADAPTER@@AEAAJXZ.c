/*
 * XREFs of ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C0021C9C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiOverall(DXGADAPTER *this, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax

  if ( (*((_DWORD *)this + 642) & 8) == 0 )
    return 0LL;
  v4 = *((_DWORD *)this + 87);
  if ( (v4 & 8) != 0 || (v4 & 0x4000) != 0 )
    return 0LL;
  v5 = 0;
  if ( !*((_QWORD *)this + 45) )
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = 74LL;
    WdLogEvent5_WdError(v6);
    v5 = 1;
  }
  if ( !*((_QWORD *)this + 56) )
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v7 + 24) = 76LL;
    WdLogEvent5_WdError(v7);
    ++v5;
  }
  if ( !*((_QWORD *)this + 102) )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = 77LL;
    WdLogEvent5_WdError(v8);
    ++v5;
  }
  if ( !*((_QWORD *)this + 79) )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = 78LL;
    WdLogEvent5_WdError(v9);
    ++v5;
  }
  if ( !*((_QWORD *)this + 63) )
  {
    v10 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v10 + 24) = 79LL;
    WdLogEvent5_WdError(v10);
    ++v5;
  }
  if ( !*((_QWORD *)this + 47) )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 80LL;
    WdLogEvent5_WdError(v11);
    ++v5;
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v12 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v12 + 24) = 81LL;
    WdLogEvent5_WdError(v12);
    ++v5;
  }
  if ( !*((_QWORD *)this + 46) )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 82LL;
    WdLogEvent5_WdError(v13);
    ++v5;
  }
  if ( !*((_QWORD *)this + 49) )
  {
    v14 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v14 + 24) = 83LL;
    WdLogEvent5_WdError(v14);
    ++v5;
  }
  if ( !*((_QWORD *)this + 48) )
  {
    v15 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v15 + 24) = 84LL;
    WdLogEvent5_WdError(v15);
    ++v5;
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = 85LL;
    WdLogEvent5_WdError(v16);
    ++v5;
  }
  if ( !*((_QWORD *)this + 77) )
  {
    v17 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v17 + 24) = 86LL;
    WdLogEvent5_WdError(v17);
    ++v5;
  }
  if ( !*((_QWORD *)this + 103) )
  {
    v18 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v18 + 24) = 88LL;
    WdLogEvent5_WdError(v18);
    ++v5;
  }
  if ( !*((_QWORD *)this + 98) )
  {
    v19 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v19 + 24) = 89LL;
    WdLogEvent5_WdError(v19);
    ++v5;
  }
  if ( !*((_QWORD *)this + 50) )
  {
    v20 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v20 + 24) = 90LL;
    WdLogEvent5_WdError(v20);
    ++v5;
  }
  if ( !*((_QWORD *)this + 78) )
  {
    v21 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v21 + 24) = 92LL;
    WdLogEvent5_WdError(v21);
    ++v5;
  }
  if ( !*((_QWORD *)this + 55) )
  {
    v22 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v22 + 24) = 93LL;
    WdLogEvent5_WdError(v22);
    ++v5;
  }
  if ( !*((_QWORD *)this + 45) )
  {
    v23 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v23 + 24) = 94LL;
    WdLogEvent5_WdError(v23);
    ++v5;
  }
  if ( !*((_QWORD *)this + 89) )
  {
    v24 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v24 + 24) = 95LL;
    WdLogEvent5_WdError(v24);
    ++v5;
  }
  if ( !*((_QWORD *)this + 90) )
  {
    v25 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v25 + 24) = 97LL;
    WdLogEvent5_WdError(v25);
    ++v5;
  }
  if ( !*((_QWORD *)this + 91) )
  {
    v26 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v26 + 24) = 100LL;
    WdLogEvent5_WdError(v26);
    ++v5;
  }
  if ( !*((_QWORD *)this + 60) )
  {
    v27 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v27 + 24) = 101LL;
    WdLogEvent5_WdError(v27);
    ++v5;
  }
  if ( !*((_QWORD *)this + 61) )
  {
    v28 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v28 + 24) = 102LL;
    WdLogEvent5_WdError(v28);
    ++v5;
  }
  if ( !*((_QWORD *)this + 114) )
  {
    v29 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v29 + 24) = 104LL;
    WdLogEvent5_WdError(v29);
    ++v5;
  }
  if ( !*((_QWORD *)this + 155) )
  {
    v30 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v30 + 24) = 105LL;
    WdLogEvent5_WdError(v30);
    ++v5;
  }
  if ( *((_QWORD *)this + 70) )
  {
    v31 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v31 + 24) = 114LL;
    WdLogEvent5_WdError(v31);
    ++v5;
  }
  if ( *((_QWORD *)this + 51) )
  {
    v32 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v32 + 24) = 115LL;
    WdLogEvent5_WdError(v32);
    ++v5;
  }
  if ( *((_QWORD *)this + 101) )
  {
    v33 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v33 + 24) = 116LL;
    WdLogEvent5_WdError(v33);
    ++v5;
  }
  if ( *((_QWORD *)this + 112) )
  {
    v34 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v34 + 24) = 117LL;
    WdLogEvent5_WdError(v34);
    ++v5;
  }
  if ( *((_QWORD *)this + 116) )
  {
    v35 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v35 + 24) = 118LL;
    WdLogEvent5_WdError(v35);
    ++v5;
  }
  if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 159) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v36 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v36 + 24) = 119LL;
    WdLogEvent5_WdError(v36);
    ++v5;
  }
  if ( *((_QWORD *)this + 75) )
  {
    v37 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v37 + 24) = 120LL;
    WdLogEvent5_WdError(v37);
    ++v5;
  }
  if ( *((_QWORD *)this + 100) )
  {
    v38 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v38 + 24) = 121LL;
    WdLogEvent5_WdError(v38);
    ++v5;
  }
  if ( *((_QWORD *)this + 167) )
  {
    v39 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v39 + 24) = 122LL;
    WdLogEvent5_WdError(v39);
    ++v5;
  }
  if ( *((__int64 (__fastcall **)())this + 123) != W32kStub_GreSfmOpenTokenEvent )
  {
    v40 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v40 + 24) = 123LL;
    WdLogEvent5_WdError(v40);
    ++v5;
  }
  if ( *((_QWORD *)this + 76) )
  {
    v41 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v41 + 24) = 125LL;
    WdLogEvent5_WdError(v41);
    ++v5;
  }
  if ( *((_QWORD *)this + 134) )
  {
    v42 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v42 + 24) = 126LL;
    WdLogEvent5_WdError(v42);
    ++v5;
  }
  if ( *((_QWORD *)this + 147) )
  {
    v43 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v43 + 24) = 127LL;
    WdLogEvent5_WdError(v43);
    ++v5;
  }
  if ( *((_QWORD *)this + 84) )
  {
    v44 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v44 + 24) = 128LL;
    WdLogEvent5_WdError(v44);
    ++v5;
  }
  if ( *((_QWORD *)this + 135) )
  {
    v45 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v45 + 24) = 129LL;
    WdLogEvent5_WdError(v45);
    ++v5;
  }
  if ( *((_QWORD *)this + 148) )
  {
    v46 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v46 + 24) = 130LL;
    WdLogEvent5_WdError(v46);
    ++v5;
  }
  if ( *((_QWORD *)this + 141) )
  {
    v47 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v47 + 24) = 131LL;
    WdLogEvent5_WdError(v47);
    ++v5;
  }
  if ( *((_QWORD *)this + 67) )
  {
    v48 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v48 + 24) = 132LL;
    WdLogEvent5_WdError(v48);
    ++v5;
  }
  if ( *((_QWORD *)this + 143) )
  {
    v49 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v49 + 24) = 133LL;
    WdLogEvent5_WdError(v49);
    ++v5;
  }
  if ( *((_QWORD *)this + 83) )
  {
    v50 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v50 + 24) = 134LL;
    WdLogEvent5_WdError(v50);
    ++v5;
  }
  if ( *((_QWORD *)this + 144) )
  {
    v51 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v51 + 24) = 135LL;
    WdLogEvent5_WdError(v51);
    ++v5;
  }
  if ( *((_QWORD *)this + 145) )
  {
    v52 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v52 + 24) = 136LL;
    WdLogEvent5_WdError(v52);
    ++v5;
  }
  if ( *((_QWORD *)this + 73) )
  {
    v53 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v53 + 24) = 137LL;
    WdLogEvent5_WdError(v53);
    ++v5;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v54 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v54 + 24) = 138LL;
    WdLogEvent5_WdError(v54);
    ++v5;
  }
  if ( *((_QWORD *)this + 151) )
  {
    v55 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v55 + 24) = 140LL;
    WdLogEvent5_WdError(v55);
    ++v5;
  }
  if ( *((_QWORD *)this + 118) )
  {
    v56 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v56 + 24) = 141LL;
    WdLogEvent5_WdError(v56);
    ++v5;
  }
  if ( *((_QWORD *)this + 81) )
  {
    v57 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v57 + 24) = 142LL;
    WdLogEvent5_WdError(v57);
    ++v5;
  }
  if ( *((_QWORD *)this + 161) )
  {
    v58 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v58 + 24) = 143LL;
    WdLogEvent5_WdError(v58);
    ++v5;
  }
  if ( *((_QWORD *)this + 142) )
  {
    v59 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v59 + 24) = 144LL;
    WdLogEvent5_WdError(v59);
    ++v5;
  }
  if ( *((_QWORD *)this + 64) )
  {
    v60 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v60 + 24) = 145LL;
    WdLogEvent5_WdError(v60);
    ++v5;
  }
  if ( *((__int64 (__fastcall **)())this + 158) != W32kStub_UserRemoveWindowedSwapChain )
  {
    v61 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v61 + 24) = 146LL;
    WdLogEvent5_WdError(v61);
    ++v5;
  }
  if ( *((_QWORD *)this + 66) )
  {
    v62 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v62 + 24) = 148LL;
    WdLogEvent5_WdError(v62);
    ++v5;
  }
  if ( *((_QWORD *)this + 72) )
  {
    v63 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v63 + 24) = 149LL;
    WdLogEvent5_WdError(v63);
    ++v5;
  }
  if ( *((_QWORD *)this + 52) )
  {
    v64 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v64 + 24) = 151LL;
    WdLogEvent5_WdError(v64);
    ++v5;
  }
  if ( *((_QWORD *)this + 104) )
  {
    v65 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v65 + 24) = 152LL;
    WdLogEvent5_WdError(v65);
    ++v5;
  }
  if ( *((_QWORD *)this + 88) )
  {
    v66 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v66 + 24) = 153LL;
    WdLogEvent5_WdError(v66);
    ++v5;
  }
  if ( *((_QWORD *)this + 87) )
  {
    v67 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v67 + 24) = 154LL;
    WdLogEvent5_WdError(v67);
    ++v5;
  }
  if ( *((_QWORD *)this + 57) )
  {
    v68 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v68 + 24) = 155LL;
    WdLogEvent5_WdError(v68);
    ++v5;
  }
  if ( *((_QWORD *)this + 58) )
  {
    v69 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v69 + 24) = 156LL;
    WdLogEvent5_WdError(v69);
    ++v5;
  }
  if ( *((_QWORD *)this + 59) )
  {
    v70 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v70 + 24) = 157LL;
    WdLogEvent5_WdError(v70);
    ++v5;
  }
  if ( *((_QWORD *)this + 99) )
  {
    v71 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v71 + 24) = 158LL;
    WdLogEvent5_WdError(v71);
    ++v5;
  }
  if ( *((_QWORD *)this + 140) )
  {
    v72 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v72 + 24) = 159LL;
    WdLogEvent5_WdError(v72);
    ++v5;
  }
  if ( *((_QWORD *)this + 139) )
  {
    v73 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v73 + 24) = 161LL;
    WdLogEvent5_WdError(v73);
    ++v5;
  }
  if ( *((_QWORD *)this + 138) )
  {
    v74 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v74 + 24) = 162LL;
    WdLogEvent5_WdError(v74);
    ++v5;
  }
  if ( *((_QWORD *)this + 137) )
  {
    v75 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v75 + 24) = 163LL;
    WdLogEvent5_WdError(v75);
    ++v5;
  }
  if ( *((_QWORD *)this + 136) )
  {
    v76 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v76 + 24) = 164LL;
    WdLogEvent5_WdError(v76);
    ++v5;
  }
  if ( *((_QWORD *)this + 115) )
  {
    v77 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v77 + 24) = 165LL;
    WdLogEvent5_WdError(v77);
    ++v5;
  }
  if ( *((_QWORD *)this + 68) )
  {
    v78 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v78 + 24) = 166LL;
    WdLogEvent5_WdError(v78);
    ++v5;
  }
  if ( *((_QWORD *)this + 97) )
  {
    v79 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v79 + 24) = 167LL;
    WdLogEvent5_WdError(v79);
    ++v5;
  }
  if ( *((_QWORD *)this + 113) )
  {
    v80 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v80 + 24) = 168LL;
    WdLogEvent5_WdError(v80);
    ++v5;
  }
  if ( *((_QWORD *)this + 117) )
  {
    v81 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v81 + 24) = 169LL;
    WdLogEvent5_WdError(v81);
    ++v5;
  }
  if ( *((_QWORD *)this + 69) )
  {
    v82 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v82 + 24) = 170LL;
    WdLogEvent5_WdError(v82);
    ++v5;
  }
  if ( *((_QWORD *)this + 74) )
  {
    v83 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v83 + 24) = 171LL;
    WdLogEvent5_WdError(v83);
    ++v5;
  }
  if ( *((_QWORD *)this + 71) )
  {
    v84 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v84 + 24) = 176LL;
    WdLogEvent5_WdError(v84);
    ++v5;
  }
  if ( *((_QWORD *)this + 124) )
  {
    v85 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v85 + 24) = 177LL;
    WdLogEvent5_WdError(v85);
    ++v5;
  }
  if ( *((_QWORD *)this + 82) )
  {
    v86 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v86 + 24) = 178LL;
    WdLogEvent5_WdError(v86);
    ++v5;
  }
  v87 = *((_QWORD *)this + 96);
  if ( (*((_DWORD *)this + 514) & 0x10) == 0 )
  {
    if ( !v87 )
      goto LABEL_172;
    goto LABEL_171;
  }
  if ( !v87 )
  {
LABEL_171:
    v88 = WdLogNewEntry5_WdError(v87, a2);
    *(_QWORD *)(v88 + 24) = 184LL;
    WdLogEvent5_WdError(v88);
    ++v5;
  }
LABEL_172:
  if ( !v5 )
  {
    *((_QWORD *)this + 81) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !*((_QWORD *)this + 54) )
      *((_QWORD *)this + 54) = DXGADAPTER::DefaultDdiSubmitCommand;
    return 0LL;
  }
  return 3221225561LL;
}
