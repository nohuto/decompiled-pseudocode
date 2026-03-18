/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperBinary@@U6@U6@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U6@U2@U3@U3@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U6@U2@U6@U2@U2@U2@U2@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperBinary@@8844444444444444444448455AEBU?$_tlgWrapperByVal@$00@@3444444444484844448@Z @ 0x1C0027740
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A400 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        void **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        unsigned __int16 **a15,
        __int64 *a16,
        __int64 *a17,
        __int64 *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 *a38,
        __int64 a39,
        void **a40,
        void **a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49,
        __int64 a50,
        __int64 a51,
        __int64 a52,
        __int64 a53,
        __int64 *a54,
        __int64 a55,
        __int64 *a56,
        __int64 a57,
        __int64 a58,
        __int64 a59,
        __int64 a60,
        __int64 *a61)
{
  __int64 v63; // rdx
  _WORD *v64; // rcx
  __int64 v65; // rax
  int v66; // r8d
  _WORD *v67; // rcx
  __int64 v68; // rax
  int v69; // r8d
  int v70; // ecx
  _WORD *v71; // rcx
  int v72; // eax
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v75; // [rsp+50h] [rbp-B0h]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  __int64 v80; // [rsp+78h] [rbp-88h]
  __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  _WORD *v87; // [rsp+B0h] [rbp-50h]
  int v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+BCh] [rbp-44h]
  __int64 v90; // [rsp+C0h] [rbp-40h]
  __int64 v91; // [rsp+C8h] [rbp-38h]
  __int64 v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  __int64 v94; // [rsp+E0h] [rbp-20h]
  __int64 v95; // [rsp+E8h] [rbp-18h]
  _DWORD *v96; // [rsp+F0h] [rbp-10h]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  __int64 v98; // [rsp+100h] [rbp+0h]
  _DWORD v99[2]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v100; // [rsp+110h] [rbp+10h]
  __int64 v101; // [rsp+118h] [rbp+18h]
  __int64 v102; // [rsp+120h] [rbp+20h]
  _DWORD v103[2]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD *v104; // [rsp+130h] [rbp+30h]
  __int64 v105; // [rsp+138h] [rbp+38h]
  __int64 v106; // [rsp+140h] [rbp+40h]
  _DWORD v107[2]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD *v108; // [rsp+150h] [rbp+50h]
  __int64 v109; // [rsp+158h] [rbp+58h]
  __int64 v110; // [rsp+160h] [rbp+60h]
  _DWORD v111[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v112; // [rsp+170h] [rbp+70h]
  __int64 v113; // [rsp+178h] [rbp+78h]
  __int64 v114; // [rsp+180h] [rbp+80h]
  __int64 v115; // [rsp+188h] [rbp+88h]
  __int64 v116; // [rsp+190h] [rbp+90h]
  __int64 v117; // [rsp+198h] [rbp+98h]
  __int64 v118; // [rsp+1A0h] [rbp+A0h]
  __int64 v119; // [rsp+1A8h] [rbp+A8h]
  __int64 v120; // [rsp+1B0h] [rbp+B0h]
  __int64 v121; // [rsp+1B8h] [rbp+B8h]
  __int64 v122; // [rsp+1C0h] [rbp+C0h]
  __int64 v123; // [rsp+1C8h] [rbp+C8h]
  __int64 v124; // [rsp+1D0h] [rbp+D0h]
  __int64 v125; // [rsp+1D8h] [rbp+D8h]
  __int64 v126; // [rsp+1E0h] [rbp+E0h]
  __int64 v127; // [rsp+1E8h] [rbp+E8h]
  __int64 v128; // [rsp+1F0h] [rbp+F0h]
  __int64 v129; // [rsp+1F8h] [rbp+F8h]
  __int64 v130; // [rsp+200h] [rbp+100h]
  __int64 v131; // [rsp+208h] [rbp+108h]
  __int64 v132; // [rsp+210h] [rbp+110h]
  __int64 v133; // [rsp+218h] [rbp+118h]
  __int64 v134; // [rsp+220h] [rbp+120h]
  __int64 v135; // [rsp+228h] [rbp+128h]
  __int64 v136; // [rsp+230h] [rbp+130h]
  __int64 v137; // [rsp+238h] [rbp+138h]
  __int64 v138; // [rsp+240h] [rbp+140h]
  __int64 v139; // [rsp+248h] [rbp+148h]
  __int64 v140; // [rsp+250h] [rbp+150h]
  __int64 v141; // [rsp+258h] [rbp+158h]
  __int64 v142; // [rsp+260h] [rbp+160h]
  __int64 v143; // [rsp+268h] [rbp+168h]
  __int64 v144; // [rsp+270h] [rbp+170h]
  __int64 v145; // [rsp+278h] [rbp+178h]
  __int64 v146; // [rsp+280h] [rbp+180h]
  __int64 v147; // [rsp+288h] [rbp+188h]
  __int64 v148; // [rsp+290h] [rbp+190h]
  __int64 v149; // [rsp+298h] [rbp+198h]
  _DWORD *v150; // [rsp+2A0h] [rbp+1A0h]
  __int64 v151; // [rsp+2A8h] [rbp+1A8h]
  __int64 v152; // [rsp+2B0h] [rbp+1B0h]
  _DWORD v153[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v154; // [rsp+2C0h] [rbp+1C0h]
  __int64 v155; // [rsp+2C8h] [rbp+1C8h]
  _WORD *v156; // [rsp+2D0h] [rbp+1D0h]
  int v157; // [rsp+2D8h] [rbp+1D8h]
  int v158; // [rsp+2DCh] [rbp+1DCh]
  _WORD *v159; // [rsp+2E0h] [rbp+1E0h]
  int v160; // [rsp+2E8h] [rbp+1E8h]
  int v161; // [rsp+2ECh] [rbp+1ECh]
  __int64 v162; // [rsp+2F0h] [rbp+1F0h]
  __int64 v163; // [rsp+2F8h] [rbp+1F8h]
  __int64 v164; // [rsp+300h] [rbp+200h]
  __int64 v165; // [rsp+308h] [rbp+208h]
  __int64 v166; // [rsp+310h] [rbp+210h]
  __int64 v167; // [rsp+318h] [rbp+218h]
  __int64 v168; // [rsp+320h] [rbp+220h]
  __int64 v169; // [rsp+328h] [rbp+228h]
  __int64 v170; // [rsp+330h] [rbp+230h]
  __int64 v171; // [rsp+338h] [rbp+238h]
  __int64 v172; // [rsp+340h] [rbp+240h]
  __int64 v173; // [rsp+348h] [rbp+248h]
  __int64 v174; // [rsp+350h] [rbp+250h]
  __int64 v175; // [rsp+358h] [rbp+258h]
  __int64 v176; // [rsp+360h] [rbp+260h]
  __int64 v177; // [rsp+368h] [rbp+268h]
  __int64 v178; // [rsp+370h] [rbp+270h]
  __int64 v179; // [rsp+378h] [rbp+278h]
  __int64 v180; // [rsp+380h] [rbp+280h]
  __int64 v181; // [rsp+388h] [rbp+288h]
  __int64 v182; // [rsp+390h] [rbp+290h]
  __int64 v183; // [rsp+398h] [rbp+298h]
  __int64 v184; // [rsp+3A0h] [rbp+2A0h]
  __int64 v185; // [rsp+3A8h] [rbp+2A8h]
  _DWORD *v186; // [rsp+3B0h] [rbp+2B0h]
  __int64 v187; // [rsp+3B8h] [rbp+2B8h]
  __int64 v188; // [rsp+3C0h] [rbp+2C0h]
  _DWORD v189[2]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v190; // [rsp+3D0h] [rbp+2D0h]
  __int64 v191; // [rsp+3D8h] [rbp+2D8h]
  _DWORD *v192; // [rsp+3E0h] [rbp+2E0h]
  __int64 v193; // [rsp+3E8h] [rbp+2E8h]
  __int64 v194; // [rsp+3F0h] [rbp+2F0h]
  _DWORD v195[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v196; // [rsp+400h] [rbp+300h]
  __int64 v197; // [rsp+408h] [rbp+308h]
  __int64 v198; // [rsp+410h] [rbp+310h]
  __int64 v199; // [rsp+418h] [rbp+318h]
  __int64 v200; // [rsp+420h] [rbp+320h]
  __int64 v201; // [rsp+428h] [rbp+328h]
  __int64 v202; // [rsp+430h] [rbp+330h]
  __int64 v203; // [rsp+438h] [rbp+338h]
  _DWORD *v204; // [rsp+440h] [rbp+340h]
  __int64 v205; // [rsp+448h] [rbp+348h]
  __int64 v206; // [rsp+450h] [rbp+350h]
  _DWORD v207[2]; // [rsp+458h] [rbp+358h] BYREF

  v204 = v207;
  v205 = 2LL;
  v207[1] = 0;
  v206 = *a61;
  v207[0] = *((unsigned __int16 *)a61 + 4);
  v202 = a60;
  v200 = a59;
  v198 = a58;
  v196 = a57;
  v192 = v195;
  v194 = *a56;
  v195[0] = *((unsigned __int16 *)a56 + 4);
  v190 = a55;
  v186 = v189;
  v188 = *a54;
  v189[0] = *((unsigned __int16 *)a54 + 4);
  v184 = a53;
  v182 = a52;
  v180 = a51;
  v178 = a50;
  v176 = a49;
  v174 = a48;
  v172 = a47;
  v170 = a46;
  v168 = a45;
  v166 = a44;
  v164 = a43;
  v162 = a42;
  v203 = 4LL;
  v201 = 4LL;
  v199 = 4LL;
  v197 = 4LL;
  v193 = 2LL;
  v195[1] = 0;
  v191 = 4LL;
  v187 = 2LL;
  v189[1] = 0;
  v185 = 4LL;
  v183 = 4LL;
  v181 = 4LL;
  v179 = 4LL;
  v177 = 4LL;
  v175 = 4LL;
  v173 = 4LL;
  v171 = 4LL;
  v169 = 4LL;
  v167 = 4LL;
  v165 = 2LL;
  v63 = -1LL;
  v163 = 1LL;
  v64 = *a41;
  if ( *a41 )
  {
    v65 = -1LL;
    do
      ++v65;
    while ( v64[v65] );
    v66 = 2 * v65 + 2;
  }
  else
  {
    v64 = &unk_1C008A884;
    v66 = 2;
  }
  v159 = v64;
  v160 = v66;
  v161 = 0;
  v67 = *a40;
  if ( *a40 )
  {
    v68 = -1LL;
    do
      ++v68;
    while ( v67[v68] );
    v69 = 2 * v68 + 2;
  }
  else
  {
    v67 = &unk_1C008A884;
    v69 = 2;
  }
  v154 = a39;
  v150 = v153;
  v156 = v67;
  v157 = v69;
  v158 = 0;
  v155 = 4LL;
  v152 = *a38;
  v153[0] = *((unsigned __int16 *)a38 + 4);
  v148 = a37;
  v146 = a36;
  v144 = a35;
  v142 = a34;
  v140 = a33;
  v138 = a32;
  v136 = a31;
  v134 = a30;
  v132 = a29;
  v130 = a28;
  v128 = a27;
  v126 = a26;
  v124 = a25;
  v122 = a24;
  v120 = a23;
  v118 = a22;
  v116 = a21;
  v114 = a20;
  v112 = a19;
  v108 = v111;
  v110 = *a18;
  v111[0] = *((unsigned __int16 *)a18 + 4);
  v151 = 2LL;
  v153[1] = 0;
  v149 = 4LL;
  v147 = 4LL;
  v145 = 4LL;
  v143 = 4LL;
  v141 = 4LL;
  v139 = 4LL;
  v137 = 4LL;
  v135 = 4LL;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v109 = 2LL;
  v111[1] = 0;
  v104 = v107;
  v105 = 2LL;
  v107[1] = 0;
  v106 = *a17;
  v107[0] = *((unsigned __int16 *)a17 + 4);
  v100 = v103;
  v101 = 2LL;
  v102 = *a16;
  v103[0] = *((unsigned __int16 *)a16 + 4);
  v96 = v99;
  v103[1] = 0;
  v97 = 2LL;
  v70 = **a15;
  v98 = *((_QWORD *)*a15 + 1);
  v94 = a14;
  v92 = a13;
  v90 = a12;
  v99[0] = v70;
  v99[1] = 0;
  v95 = 8LL;
  v71 = *a11;
  v93 = 4LL;
  v91 = 4LL;
  if ( v71 )
  {
    do
      ++v63;
    while ( v71[v63] );
    v72 = 2 * v63 + 2;
  }
  else
  {
    v71 = &unk_1C008A884;
    v72 = 2;
  }
  v88 = v72;
  v85 = a10;
  v83 = a9;
  v81 = a8;
  v79 = a7;
  v77 = a6;
  v75 = a5;
  v87 = v71;
  v89 = 0;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C012F918, a2, a3, 0LL, 0x43u, &v74);
}
