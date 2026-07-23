/*
 * XREFs of PopAccountCbEnergyChange @ 0x1407801E4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

int PopAccountCbEnergyChange()
{
  __int64 *v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  const CHAR *v4; // rdx
  const CHAR *v5; // r11
  char v6; // r8
  const CHAR *v7; // rdx
  const CHAR *v8; // r11
  int v9; // r10d
  int v10; // edi
  unsigned __int8 v11; // r8
  const CHAR *v12; // rdx
  const CHAR *v13; // r11
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r10
  const CHAR *v16; // rdx
  __int64 v17; // r9
  int v18; // r10d
  const CHAR *v19; // rdx
  const CHAR *v20; // r11
  char v21; // r8
  const CHAR *v22; // rdx
  const CHAR *v23; // r11
  unsigned __int8 v24; // r8
  const CHAR *v25; // rdx
  const CHAR *v26; // r11
  unsigned __int8 v27; // r8
  unsigned __int8 v28; // r10
  const CHAR *v29; // rdx
  const CHAR *v30; // r11
  char v31; // r8
  const CHAR *v32; // rdx
  const CHAR *v33; // r11
  char v34; // r8
  const CHAR *v35; // rdx
  const CHAR *v36; // r11
  char v37; // r8
  const CHAR *v38; // rdx
  unsigned int v39; // eax
  unsigned __int64 v40; // rax
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+98h] [rbp-68h]
  int v54; // [rsp+9Ch] [rbp-64h]
  char v55[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v56[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v57[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v58[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  int *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  char v65[16]; // [rsp+100h] [rbp+0h] BYREF
  char v66[16]; // [rsp+110h] [rbp+10h] BYREF
  char v67[16]; // [rsp+120h] [rbp+20h] BYREF
  char v68[16]; // [rsp+130h] [rbp+30h] BYREF
  char v69[16]; // [rsp+140h] [rbp+40h] BYREF
  char v70[16]; // [rsp+150h] [rbp+50h] BYREF
  char v71[16]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int *v72; // [rsp+170h] [rbp+70h]
  int v73; // [rsp+178h] [rbp+78h]
  int v74; // [rsp+17Ch] [rbp+7Ch]
  int *v75; // [rsp+180h] [rbp+80h]
  int v76; // [rsp+188h] [rbp+88h]
  int v77; // [rsp+18Ch] [rbp+8Ch]
  int *v78; // [rsp+190h] [rbp+90h]
  int v79; // [rsp+198h] [rbp+98h]
  int v80; // [rsp+19Ch] [rbp+9Ch]
  int *v81; // [rsp+1A0h] [rbp+A0h]
  int v82; // [rsp+1A8h] [rbp+A8h]
  int v83; // [rsp+1ACh] [rbp+ACh]
  int *v84; // [rsp+1B0h] [rbp+B0h]
  int v85; // [rsp+1B8h] [rbp+B8h]
  int v86; // [rsp+1BCh] [rbp+BCh]
  int *v87; // [rsp+1C0h] [rbp+C0h]
  int v88; // [rsp+1C8h] [rbp+C8h]
  int v89; // [rsp+1CCh] [rbp+CCh]

  v0 = (__int64 *)qword_140C23C60;
  v1 = 0LL;
  v49 = 0uLL;
  if ( (__int64 *)qword_140C23C60 != &qword_140C23C60 )
  {
    do
    {
      v1 += v0[25];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_140C23C60 );
    *((_QWORD *)&v49 + 1) = v1;
  }
  v2 = qword_140C23C70;
  v3 = 0;
  LODWORD(v49) = 0;
  if ( (__int64 *)qword_140C23C70 != &qword_140C23C70 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 128);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_140C23C70 );
    LODWORD(v49) = v3;
  }
  if ( v3 != (_DWORD)xmmword_140C23E40 || v1 != *((_QWORD *)&xmmword_140C23E40 + 1) )
  {
    xmmword_140C23E40 = v49;
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      v54 = 0;
      v50 = v1;
      v4 = "Energy Counter Unavailable";
      v52 = &v50;
      if ( (v3 & 1) == 0 )
        v4 = "-";
      v53 = 8;
      tlgCreate1Sz_char((__int64)v55, v4);
      v7 = "Relative Capacity Unit";
      if ( (v6 & 2) == 0 )
        v7 = v5;
      tlgCreate1Sz_char((__int64)v56, v7);
      v10 = v9 - 4;
      v12 = "FCC Unavailable";
      if ( (v11 & (unsigned __int8)(v9 - 4)) == 0 )
        v12 = v8;
      tlgCreate1Sz_char((__int64)v57, v12);
      v16 = "Capacity Unavailable";
      if ( (v14 & v15) == 0 )
        v16 = v13;
      tlgCreate1Sz_char((__int64)v58, v16);
      v61 = 0;
      v64 = 0;
      v19 = "AC Power";
      v59 = &v49;
      v42 = dword_140C23C54;
      v62 = &v42;
      if ( (unk_140C23C80 & 1) == 0 )
        v19 = "DC Power";
      *(_QWORD *)&v49 = v17;
      v60 = v18;
      v63 = v10;
      tlgCreate1Sz_char((__int64)v65, v19);
      v22 = "Battery Discharging";
      if ( (v21 & 2) == 0 )
        v22 = v20;
      tlgCreate1Sz_char((__int64)v66, v22);
      v25 = "Battery Charging";
      if ( (v24 & (unsigned __int8)v10) == 0 )
        v25 = v23;
      tlgCreate1Sz_char((__int64)v67, v25);
      v29 = "Battery Critical";
      if ( (v27 & v28) == 0 )
        v29 = v26;
      tlgCreate1Sz_char((__int64)v68, v29);
      v32 = "Battery charge limiting mode";
      if ( (v31 & 0x10) == 0 )
        v32 = v30;
      tlgCreate1Sz_char((__int64)v69, v32);
      v35 = "Battery charging state power supply present";
      if ( (v34 & 0x20) == 0 )
        v35 = v33;
      tlgCreate1Sz_char((__int64)v70, v35);
      v38 = "Battery charging state adequate";
      if ( (v37 & 0x40) == 0 )
        v38 = v36;
      tlgCreate1Sz_char((__int64)v71, v38);
      if ( HIDWORD(qword_140C23CA0) )
        v39 = (100 * dword_140C23C84 + (HIDWORD(qword_140C23CA0) >> 1)) / HIDWORD(qword_140C23CA0);
      else
        v39 = 0;
      v74 = 0;
      v43 = v39;
      v72 = &v43;
      v73 = v10;
      if ( HIDWORD(qword_140C23CA0) )
        v40 = 100000 * (unsigned __int64)dword_140C23C84 / HIDWORD(qword_140C23CA0);
      else
        LODWORD(v40) = 0;
      v77 = 0;
      v80 = 0;
      v83 = 0;
      v86 = 0;
      v89 = 0;
      v44 = v40;
      v75 = &v44;
      v45 = dword_140C23C84;
      v78 = (int *)&v45;
      v81 = &v46;
      v47 = unk_140C23C88;
      v84 = &v47;
      v48 = qword_140C23C8C;
      v87 = &v48;
      v46 = HIDWORD(qword_140C23CA0);
      v76 = v10;
      v79 = v10;
      v82 = v10;
      v85 = v10;
      v88 = v10;
      LODWORD(v1) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C02228,
                      (unsigned __int8 *)byte_140029281,
                      0LL,
                      0LL,
                      0x16u,
                      &v51);
    }
  }
  return v1;
}
