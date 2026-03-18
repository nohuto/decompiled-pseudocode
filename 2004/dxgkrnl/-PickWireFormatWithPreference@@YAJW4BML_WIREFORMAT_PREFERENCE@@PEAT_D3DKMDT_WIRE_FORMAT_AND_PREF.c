/*
 * XREFs of ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C015F408
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C013A7DC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

__int64 __fastcall PickWireFormatWithPreference(__int64 a1, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // rsi
  int *v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+28h] [rbp-E0h] BYREF
  char v17; // [rsp+2Ch] [rbp-DCh]
  int v18; // [rsp+30h] [rbp-D8h]
  char v19; // [rsp+34h] [rbp-D4h]
  int v20; // [rsp+38h] [rbp-D0h]
  char v21; // [rsp+3Ch] [rbp-CCh]
  int v22; // [rsp+40h] [rbp-C8h]
  char v23; // [rsp+44h] [rbp-C4h]
  int v24; // [rsp+48h] [rbp-C0h]
  char v25; // [rsp+4Ch] [rbp-BCh]
  int v26; // [rsp+50h] [rbp-B8h]
  char v27; // [rsp+54h] [rbp-B4h]
  int v28; // [rsp+58h] [rbp-B0h]
  char v29; // [rsp+5Ch] [rbp-ACh]
  int v30; // [rsp+60h] [rbp-A8h]
  char v31; // [rsp+64h] [rbp-A4h]
  int v32; // [rsp+68h] [rbp-A0h]
  char v33; // [rsp+6Ch] [rbp-9Ch]
  int v34; // [rsp+70h] [rbp-98h]
  char v35; // [rsp+74h] [rbp-94h]
  int v36; // [rsp+78h] [rbp-90h]
  char v37; // [rsp+7Ch] [rbp-8Ch]
  int v38; // [rsp+80h] [rbp-88h]
  char v39; // [rsp+84h] [rbp-84h]
  int v40; // [rsp+88h] [rbp-80h]
  char v41; // [rsp+8Ch] [rbp-7Ch]
  int v42; // [rsp+90h] [rbp-78h]
  char v43; // [rsp+94h] [rbp-74h]
  int v44; // [rsp+98h] [rbp-70h]
  char v45; // [rsp+9Ch] [rbp-6Ch]
  int v46; // [rsp+A0h] [rbp-68h]
  char v47; // [rsp+A4h] [rbp-64h]
  int v48; // [rsp+A8h] [rbp-60h]
  char v49; // [rsp+ACh] [rbp-5Ch]
  int v50; // [rsp+B0h] [rbp-58h]
  char v51; // [rsp+B4h] [rbp-54h]
  int v52; // [rsp+B8h] [rbp-50h] BYREF
  char v53; // [rsp+BCh] [rbp-4Ch]
  int v54; // [rsp+C0h] [rbp-48h]
  char v55; // [rsp+C4h] [rbp-44h]
  int v56; // [rsp+C8h] [rbp-40h]
  char v57; // [rsp+CCh] [rbp-3Ch]
  int v58; // [rsp+D0h] [rbp-38h]
  char v59; // [rsp+D4h] [rbp-34h]
  int v60; // [rsp+D8h] [rbp-30h]
  char v61; // [rsp+DCh] [rbp-2Ch]
  int v62; // [rsp+E0h] [rbp-28h]
  char v63; // [rsp+E4h] [rbp-24h]
  int v64; // [rsp+E8h] [rbp-20h]
  char v65; // [rsp+ECh] [rbp-1Ch]
  int v66; // [rsp+F0h] [rbp-18h]
  char v67; // [rsp+F4h] [rbp-14h]
  int v68; // [rsp+F8h] [rbp-10h]
  char v69; // [rsp+FCh] [rbp-Ch]
  int v70; // [rsp+100h] [rbp-8h]
  char v71; // [rsp+104h] [rbp-4h]
  int v72; // [rsp+108h] [rbp+0h]
  char v73; // [rsp+10Ch] [rbp+4h]
  int v74; // [rsp+110h] [rbp+8h]
  char v75; // [rsp+114h] [rbp+Ch]
  int v76; // [rsp+118h] [rbp+10h]
  char v77; // [rsp+11Ch] [rbp+14h]
  int v78; // [rsp+120h] [rbp+18h]
  char v79; // [rsp+124h] [rbp+1Ch]
  int v80; // [rsp+128h] [rbp+20h]
  char v81; // [rsp+12Ch] [rbp+24h]
  int v82; // [rsp+130h] [rbp+28h]
  char v83; // [rsp+134h] [rbp+2Ch]
  __int64 v84; // [rsp+138h] [rbp+30h]
  __int64 v85; // [rsp+140h] [rbp+38h]
  int v86; // [rsp+148h] [rbp+40h] BYREF
  char v87; // [rsp+14Ch] [rbp+44h]
  int v88; // [rsp+150h] [rbp+48h]
  char v89; // [rsp+154h] [rbp+4Ch]
  int v90; // [rsp+158h] [rbp+50h]
  char v91; // [rsp+15Ch] [rbp+54h]
  int v92; // [rsp+160h] [rbp+58h]
  char v93; // [rsp+164h] [rbp+5Ch]
  int v94; // [rsp+168h] [rbp+60h]
  char v95; // [rsp+16Ch] [rbp+64h]
  int v96; // [rsp+170h] [rbp+68h]
  char v97; // [rsp+174h] [rbp+6Ch]
  int v98; // [rsp+178h] [rbp+70h]
  char v99; // [rsp+17Ch] [rbp+74h]
  int v100; // [rsp+180h] [rbp+78h]
  char v101; // [rsp+184h] [rbp+7Ch]
  int v102; // [rsp+188h] [rbp+80h]
  char v103; // [rsp+18Ch] [rbp+84h]
  int v104; // [rsp+190h] [rbp+88h]
  char v105; // [rsp+194h] [rbp+8Ch]
  int v106; // [rsp+198h] [rbp+90h]
  char v107; // [rsp+19Ch] [rbp+94h]
  int v108; // [rsp+1A0h] [rbp+98h]
  char v109; // [rsp+1A4h] [rbp+9Ch]
  int v110; // [rsp+1A8h] [rbp+A0h]
  char v111; // [rsp+1ACh] [rbp+A4h]
  int v112; // [rsp+1B0h] [rbp+A8h]
  char v113; // [rsp+1B4h] [rbp+ACh]
  int v114; // [rsp+1B8h] [rbp+B0h]
  char v115; // [rsp+1BCh] [rbp+B4h]
  int v116; // [rsp+1C0h] [rbp+B8h]
  char v117; // [rsp+1C4h] [rbp+BCh]
  __int64 v118; // [rsp+1C8h] [rbp+C0h]
  __int64 v119; // [rsp+1D0h] [rbp+C8h]

  v5 = (int)a1;
  if ( *a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = 5088LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v17 = 0;
  v30 = 0x20000;
  v66 = 0x20000;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v87 = 0;
  v16 = 16;
  v18 = 32;
  v20 = 1024;
  v22 = 2048;
  v24 = 8;
  v25 = 1;
  v26 = 512;
  v27 = 1;
  v28 = 0x10000;
  v32 = 0x400000;
  v34 = 0x800000;
  v36 = 8;
  v38 = 512;
  v40 = 0x8000;
  v42 = 0x200000;
  v44 = 4;
  v46 = 256;
  v48 = 0x4000;
  v50 = 0x100000;
  v51 = 0;
  v52 = 16;
  v53 = 0;
  v54 = 32;
  v55 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 1024;
  v59 = 0;
  v60 = 2048;
  v61 = 0;
  v62 = 512;
  v63 = 0;
  v64 = 0x10000;
  v65 = 0;
  v68 = 0x8000;
  v70 = 0x400000;
  v72 = 0x800000;
  v74 = 0x200000;
  v76 = 4;
  v78 = 256;
  v80 = 0x4000;
  v82 = 0x100000;
  v86 = 8;
  v88 = 512;
  v8 = 0LL;
  v92 = 0x200000;
  v89 = 0;
  v90 = 0x8000;
  v91 = 0;
  v93 = 0;
  v94 = 16;
  v95 = 0;
  v96 = 32;
  v97 = 0;
  v98 = 1024;
  v99 = 0;
  v100 = 2048;
  v101 = 0;
  v102 = 0x10000;
  v103 = 0;
  v104 = 0x20000;
  v105 = 0;
  v106 = 0x400000;
  v107 = 0;
  v108 = 0x800000;
  v109 = 0;
  v110 = 4;
  v111 = 0;
  v112 = 256;
  v113 = 0;
  v114 = 0x4000;
  v115 = 0;
  v116 = 0x100000;
  v117 = 0;
  v118 = 0LL;
  v119 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_10:
    v8 = &v16;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 != 1 )
  {
    if ( (_DWORD)v5 != 2 )
    {
      if ( (_DWORD)v5 == 3 )
      {
        v8 = &v52;
        goto LABEL_6;
      }
      if ( (_DWORD)v5 != 4 )
      {
        v14 = WdLogNewEntry5_WdAssertion((unsigned int)(v5 - 3), 0x8000LL);
        *(_QWORD *)(v14 + 24) = v5;
        WdLogEvent5_WdAssertion(v14);
        goto LABEL_6;
      }
    }
    goto LABEL_10;
  }
  v8 = &v86;
LABEL_6:
  v9 = *a2;
  v10 = 0;
  while ( 1 )
  {
    v11 = (unsigned int)*v8;
    if ( ((unsigned int)v11 & (unsigned int)v9) != 0 && (!*((_BYTE *)v8 + 4) || ((unsigned int)v11 & *a3) != 0) )
      break;
    ++v10;
    v8 += 2;
    if ( v10 >= 0x12 )
      return 3221225473LL;
  }
  *a4 = v11;
  if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v9);
    *(_QWORD *)(v15 + 24) = 5210LL;
    WdLogEvent5_WdAssertion(v15);
  }
  return 0LL;
}
