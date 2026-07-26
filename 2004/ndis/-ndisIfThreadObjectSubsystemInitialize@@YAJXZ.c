/*
 * XREFs of ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x1C0145430
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145064 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 */

__int64 ndisIfThreadObjectSubsystemInitialize(void)
{
  __int64 result; // rax
  _QWORD v1[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v2; // [rsp+30h] [rbp-D0h]
  __int64 v3; // [rsp+34h] [rbp-CCh]
  int v4; // [rsp+3Ch] [rbp-C4h]
  int *v5; // [rsp+40h] [rbp-C0h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  int v7; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+54h] [rbp-ACh]
  int v9; // [rsp+5Ch] [rbp-A4h]
  int v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+64h] [rbp-9Ch]
  int v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+6Ch] [rbp-94h]
  unsigned int v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+74h] [rbp-8Ch]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  int v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+84h] [rbp-7Ch]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  int v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+94h] [rbp-6Ch]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A4h] [rbp-5Ch]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  int v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B4h] [rbp-4Ch]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  int v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D4h] [rbp-2Ch]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  int v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E4h] [rbp-1Ch]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  int v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F4h] [rbp-Ch]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  int v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+104h] [rbp+4h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  int v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+114h] [rbp+14h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  int v58; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+124h] [rbp+24h]
  int v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+134h] [rbp+34h]
  int v64; // [rsp+138h] [rbp+38h]
  int v65; // [rsp+13Ch] [rbp+3Ch]
  int v66; // [rsp+140h] [rbp+40h]
  int v67; // [rsp+144h] [rbp+44h]
  unsigned int v68; // [rsp+148h] [rbp+48h]
  int v69; // [rsp+14Ch] [rbp+4Ch]
  int v70; // [rsp+150h] [rbp+50h]
  int v71; // [rsp+154h] [rbp+54h]
  int v72; // [rsp+158h] [rbp+58h]
  int v73; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v74; // [rsp+160h] [rbp+60h]
  int v75; // [rsp+164h] [rbp+64h]
  int v76; // [rsp+168h] [rbp+68h]
  int v77; // [rsp+16Ch] [rbp+6Ch]
  int v78; // [rsp+170h] [rbp+70h]
  int v79; // [rsp+174h] [rbp+74h]
  unsigned int v80; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+17Ch] [rbp+7Ch]
  int v82; // [rsp+180h] [rbp+80h]
  int v83; // [rsp+184h] [rbp+84h]
  int v84; // [rsp+188h] [rbp+88h]
  int v85; // [rsp+18Ch] [rbp+8Ch]
  unsigned int v86; // [rsp+190h] [rbp+90h]
  int v87; // [rsp+194h] [rbp+94h]
  int v88; // [rsp+198h] [rbp+98h]
  int v89; // [rsp+19Ch] [rbp+9Ch]
  int v90; // [rsp+1A0h] [rbp+A0h]
  int v91; // [rsp+1A4h] [rbp+A4h]
  int v92; // [rsp+1A8h] [rbp+A8h]
  int v93; // [rsp+1ACh] [rbp+ACh]

  v7 = -1878786047;
  v8 = 0LL;
  v9 = 0;
  v10 = 20;
  v11 = 21757954;
  v12 = 13;
  v13 = 1573376;
  v14 = 0x80000000;
  v15 = 513;
  v16 = 83886080;
  v17 = 32;
  v18 = 545;
  v19 = 1573376;
  v20 = 0x10000000;
  v21 = 513;
  v22 = 83886080;
  v23 = 32;
  v24 = 544;
  v25 = 1311232;
  v26 = 0x10000000;
  v27 = 257;
  v28 = 83886080;
  v29 = 18;
  v30 = 1311232;
  v31 = 196671;
  v32 = 257;
  v33 = 83886080;
  v34 = 20;
  v35 = 1311232;
  v36 = 196671;
  v37 = 257;
  v38 = 83886080;
  v39 = 19;
  v40 = 1573376;
  v41 = 196639;
  v42 = 513;
  v43 = 83886080;
  v44 = 32;
  v45 = 556;
  v46 = 2621952;
  v47 = 196671;
  v48 = 1537;
  v49 = 83886080;
  v50 = 80;
  v51 = -1206894095;
  v52 = 1464728630;
  v53 = 1879813800;
  v54 = 1107566885;
  v55 = 823218052;
  v56 = 1313280;
  v57 = 0x20000;
  v58 = 257;
  v59 = 50331648;
  v60 = 4;
  v61 = 1573376;
  v62 = 0x80000000;
  v63 = 513;
  v64 = 251658240;
  v65 = 2;
  v66 = 1;
  v67 = 1573376;
  v68 = 0x80000000;
  v69 = 513;
  v70 = 251658240;
  v71 = 3;
  v72 = 1;
  v73 = 1573376;
  v74 = 0x80000000;
  v75 = 513;
  v76 = 251658240;
  v77 = 3;
  v78 = 2;
  v79 = 1573376;
  v80 = 0x80000000;
  v81 = 513;
  v82 = 251658240;
  v83 = 3;
  v84 = 3;
  v85 = 2359808;
  v86 = 0x80000000;
  v87 = 1281;
  v1[1] = &NPI_MS_NDIS_MODULEID;
  v88 = 251658240;
  v5 = &v7;
  v89 = 3;
  v90 = -80198963;
  v91 = 1334025770;
  v92 = 122408079;
  v93 = -375778463;
  v1[0] = 0LL;
  v3 = 0LL;
  v4 = 0;
  v6 = 0LL;
  v2 = 8;
  result = NsiSetObjectSecurity(v1);
  if ( (int)result >= 0 )
  {
    v2 = 16;
    return NsiSetObjectSecurity(v1);
  }
  return result;
}
