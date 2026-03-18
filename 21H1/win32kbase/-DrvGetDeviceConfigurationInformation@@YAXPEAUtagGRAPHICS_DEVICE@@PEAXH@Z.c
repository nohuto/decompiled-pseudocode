/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00978D8
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0094060 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CAA50 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0051124 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0096544 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00CC494 (_wcsicmp.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(__int64 *Context, WCHAR *Path, int a3)
{
  unsigned int v3; // r12d
  int v4; // esi
  WCHAR *v5; // r14
  NTSTATUS RegistryValues; // edi
  char v8; // r13
  bool v9; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  char *v11; // rsi
  _DWORD *v12; // r14
  __int64 v13; // rdx
  _WORD *v14; // r8
  __int64 v15; // r15
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // r13d
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _RTL_QUERY_REGISTRY_TABLE *v22; // r8
  int v23; // eax
  struct _DEVICE_OBJECT *v24; // rcx
  unsigned int v25; // r9d
  struct _DEVICE_OBJECT *v26; // rcx
  const wchar_t *v27; // rcx
  _WORD *v28; // rax
  __int64 v29; // r14
  WCHAR *v30; // rax
  const WCHAR *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  _WORD *v34; // rsi
  __int64 v35; // rcx
  _WORD *v36; // rax
  unsigned __int16 v37; // dx
  int v38; // r8d
  unsigned int v39; // ecx
  unsigned int v40; // eax
  _WORD *v41; // rdx
  unsigned int v42; // r14d
  void *v43; // rax
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  const void *v49; // rcx
  __int64 v50; // rcx
  void *v51; // rax
  const void *v52; // rcx
  __int64 v53; // rdx
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // [rsp+54h] [rbp-ACh] BYREF
  int v60; // [rsp+58h] [rbp-A8h]
  int v61; // [rsp+5Ch] [rbp-A4h] BYREF
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+64h] [rbp-9Ch] BYREF
  int v64; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v66; // [rsp+78h] [rbp-88h]
  ULONG ResultLength; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 InputBuffer; // [rsp+98h] [rbp-68h] BYREF
  void *Source2[2]; // [rsp+A8h] [rbp-58h]
  SIZE_T Length[2]; // [rsp+B8h] [rbp-48h]
  ULONG v73; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-30h]
  struct _RTL_QUERY_REGISTRY_TABLE v75; // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v76)(unsigned __int16 *, __int64, void *, unsigned int, _QWORD *); // [rsp+128h] [rbp+28h] BYREF
  int v77; // [rsp+130h] [rbp+30h]
  const wchar_t *v78; // [rsp+138h] [rbp+38h]
  void **v79; // [rsp+140h] [rbp+40h]
  int v80; // [rsp+148h] [rbp+48h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  int v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  int v84; // [rsp+168h] [rbp+68h]
  __int128 v85; // [rsp+170h] [rbp+70h]
  __int128 v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+90h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v89; // [rsp+1D8h] [rbp+D8h]
  int v90; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v91; // [rsp+1E8h] [rbp+E8h]
  __int64 v92; // [rsp+1F0h] [rbp+F0h]
  int v93; // [rsp+1F8h] [rbp+F8h]
  __int64 v94; // [rsp+200h] [rbp+100h]
  int v95; // [rsp+208h] [rbp+108h]
  __int64 v96; // [rsp+210h] [rbp+110h] BYREF
  int v97; // [rsp+218h] [rbp+118h]
  const wchar_t *v98; // [rsp+220h] [rbp+120h]
  int *v99; // [rsp+228h] [rbp+128h]
  int v100; // [rsp+230h] [rbp+130h]
  int *v101; // [rsp+238h] [rbp+138h]
  int v102; // [rsp+240h] [rbp+140h]
  __int64 v103; // [rsp+248h] [rbp+148h]
  int v104; // [rsp+250h] [rbp+150h]
  const wchar_t *v105; // [rsp+258h] [rbp+158h]
  int *v106; // [rsp+260h] [rbp+160h]
  int v107; // [rsp+268h] [rbp+168h]
  int *v108; // [rsp+270h] [rbp+170h]
  int v109; // [rsp+278h] [rbp+178h]
  __int64 v110; // [rsp+280h] [rbp+180h]
  int v111; // [rsp+288h] [rbp+188h]
  const wchar_t *v112; // [rsp+290h] [rbp+190h]
  int *v113; // [rsp+298h] [rbp+198h]
  int v114; // [rsp+2A0h] [rbp+1A0h]
  int *v115; // [rsp+2A8h] [rbp+1A8h]
  int v116; // [rsp+2B0h] [rbp+1B0h]
  __int64 (__fastcall *v117)(unsigned __int16 *, int, void *, unsigned int, _QWORD *); // [rsp+2B8h] [rbp+1B8h]
  int v118; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v119; // [rsp+2C8h] [rbp+1C8h]
  __int64 v120; // [rsp+2D0h] [rbp+1D0h]
  int v121; // [rsp+2D8h] [rbp+1D8h]
  __int64 v122; // [rsp+2E0h] [rbp+1E0h]
  int v123; // [rsp+2E8h] [rbp+1E8h]
  __int64 (__fastcall *v124)(unsigned __int16 *, int, void *, unsigned int, _QWORD *); // [rsp+2F0h] [rbp+1F0h]
  int v125; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v126; // [rsp+300h] [rbp+200h]
  __int64 v127; // [rsp+308h] [rbp+208h]
  int v128; // [rsp+310h] [rbp+210h]
  __int64 v129; // [rsp+318h] [rbp+218h]
  int v130; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v131)(unsigned __int16 *, int, void *, unsigned int, _QWORD *); // [rsp+328h] [rbp+228h]
  int v132; // [rsp+330h] [rbp+230h]
  const wchar_t *v133; // [rsp+338h] [rbp+238h]
  __int64 v134; // [rsp+340h] [rbp+240h]
  int v135; // [rsp+348h] [rbp+248h]
  __int64 v136; // [rsp+350h] [rbp+250h]
  int v137; // [rsp+358h] [rbp+258h]
  __int64 v138; // [rsp+360h] [rbp+260h]
  int v139; // [rsp+368h] [rbp+268h]
  const wchar_t *v140; // [rsp+370h] [rbp+270h]
  int *v141; // [rsp+378h] [rbp+278h]
  int v142; // [rsp+380h] [rbp+280h]
  int *v143; // [rsp+388h] [rbp+288h]
  int v144; // [rsp+390h] [rbp+290h]
  __int64 v145; // [rsp+398h] [rbp+298h]
  int v146; // [rsp+3A0h] [rbp+2A0h]
  __int128 v147; // [rsp+3A8h] [rbp+2A8h]
  __int128 v148; // [rsp+3B8h] [rbp+2B8h]
  __int64 v149; // [rsp+3C8h] [rbp+2C8h]
  struct _RTL_QUERY_REGISTRY_TABLE v150; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 (__fastcall *v151)(unsigned __int16 *, __int64, void *, unsigned int, _QWORD *); // [rsp+408h] [rbp+308h]
  int v152; // [rsp+410h] [rbp+310h]
  const wchar_t *v153; // [rsp+418h] [rbp+318h]
  __int64 v154; // [rsp+420h] [rbp+320h]
  int v155; // [rsp+428h] [rbp+328h]
  __int64 v156; // [rsp+430h] [rbp+330h]
  int v157; // [rsp+438h] [rbp+338h]
  __int64 v158; // [rsp+440h] [rbp+340h]
  int v159; // [rsp+448h] [rbp+348h]
  const wchar_t *v160; // [rsp+450h] [rbp+350h]
  int *v161; // [rsp+458h] [rbp+358h]
  int v162; // [rsp+460h] [rbp+360h]
  int *v163; // [rsp+468h] [rbp+368h]
  int v164; // [rsp+470h] [rbp+370h]
  __int64 v165; // [rsp+478h] [rbp+378h]
  int v166; // [rsp+480h] [rbp+380h]
  const wchar_t *v167; // [rsp+488h] [rbp+388h]
  int *v168; // [rsp+490h] [rbp+390h]
  int v169; // [rsp+498h] [rbp+398h]
  int *v170; // [rsp+4A0h] [rbp+3A0h]
  int v171; // [rsp+4A8h] [rbp+3A8h]
  __int64 v172; // [rsp+4B0h] [rbp+3B0h]
  int v173; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v174; // [rsp+4C0h] [rbp+3C0h]
  int *v175; // [rsp+4C8h] [rbp+3C8h]
  int v176; // [rsp+4D0h] [rbp+3D0h]
  int *v177; // [rsp+4D8h] [rbp+3D8h]
  int v178; // [rsp+4E0h] [rbp+3E0h]
  __int64 v179; // [rsp+4E8h] [rbp+3E8h]
  int v180; // [rsp+4F0h] [rbp+3F0h]
  __int128 v181; // [rsp+4F8h] [rbp+3F8h]
  __int128 v182; // [rsp+508h] [rbp+408h]
  __int64 v183; // [rsp+518h] [rbp+418h]

  v3 = 0;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v98 = L"MultiDisplayDriver";
  v5 = Path;
  v60 = a3;
  v99 = &v64;
  KeyHandle = Path;
  v62 = 0;
  v64 = 0;
  v101 = &v62;
  v105 = L"MirrorDriver";
  RegistryValues = 0;
  v59 = 0;
  v106 = &v59;
  v8 = 0;
  v61 = 0;
  v108 = &v62;
  v112 = L"AccDriver";
  v113 = &v61;
  v115 = &v62;
  v119 = L"Device Description";
  v126 = L"HardwareInformation.AdapterString";
  v63 = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)__EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v89 = 0LL;
  v90 = 1;
  v91 = L"Settings";
  v92 = 0LL;
  v93 = 0;
  v94 = 0LL;
  v95 = 0;
  v96 = 0LL;
  v97 = 288;
  v100 = 67108868;
  v102 = 4;
  v103 = 0LL;
  v104 = 288;
  v107 = 67108868;
  v109 = 4;
  v110 = 0LL;
  v111 = 288;
  v114 = 67108868;
  v116 = 4;
  v117 = __EnumDisplayQueryRoutine;
  v118 = 16;
  v120 = 0LL;
  v121 = 0;
  v122 = 0LL;
  v123 = 0;
  v124 = __EnumDisplayQueryRoutine;
  v125 = 16;
  v127 = 0LL;
  v128 = 0;
  v129 = 0LL;
  v130 = 0;
  v131 = __EnumDisplayQueryRoutine;
  v132 = 16;
  v133 = L"HardwareInformation.ChipType";
  v140 = L"TSCompatible";
  v141 = &v63;
  v143 = &v62;
  v142 = 67108868;
  v9 = a3 == 0;
  v149 = 0LL;
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v96;
  v139 = 288;
  v144 = 4;
  if ( !v9 )
    p_QueryTable = &QueryTable;
  v134 = 0LL;
  v135 = 0;
  v136 = 0LL;
  v137 = 0;
  v138 = 0LL;
  v145 = 0LL;
  v146 = 0;
  v147 = 0LL;
  v148 = 0LL;
  RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( !v4 && !*((_DWORD *)Context + 67) )
  {
    ResultLength = 0;
    v11 = 0LL;
    RegistryValues = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( RegistryValues == -1073741789 )
    {
      v12 = PALLOCMEM2(ResultLength, 0x73726447u, 0);
      if ( v12 )
      {
        v73 = 0;
        RegistryValues = ZwQueryKey(KeyHandle, KeyNameInformation, v12, ResultLength, &v73);
        if ( RegistryValues >= 0 )
        {
          LODWORD(v15) = 0;
          v13 = *v12 >> 1;
          v16 = 0;
          if ( *v12 >> 1 )
          {
            v14 = v12 + 1;
            do
            {
              v9 = *v14 == 92;
              v17 = v16;
              ++v14;
              if ( !v9 )
                v17 = v15;
              ++v16;
              v15 = v17;
            }
            while ( v16 < (unsigned int)v13 );
            if ( v17 )
            {
              v18 = 2 * v17;
              v68 = *(_DWORD *)L"eo";
              v66 = aVideo[6];
              v74 = *(_QWORD *)L"\\Video";
              v11 = (char *)PALLOCMEM2(2 * v17 + 14, 0x73726447u, 0);
              if ( v11 )
              {
                memmove(v11, v12 + 1, v18);
                v19 = v68;
                v8 = 0;
                *(_QWORD *)&v11[2 * v15] = v74;
                *(_DWORD *)&v11[2 * v15 + 8] = v19;
                *(_WORD *)&v11[2 * v15 + 12] = v66;
              }
              else
              {
                RegistryValues = -1073741670;
                v8 = 0;
              }
            }
          }
        }
        Win32FreePool((__int64)v12, v13, (__int64)v14);
      }
      else
      {
        RegistryValues = -1073741670;
      }
      if ( v11 )
      {
        v75.Flags = 16;
        v75.EntryContext = 0LL;
        v75.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)__EnumDisplayQueryRoutine;
        v75.DefaultType = 0;
        v75.Name = L"DeviceDesc";
        v75.DefaultData = 0LL;
        v78 = L"Driver";
        v75.DefaultLength = 0;
        v79 = Src;
        v76 = 0LL;
        v87 = 0LL;
        *(_OWORD *)Src = 0LL;
        v77 = 304;
        v80 = 16777217;
        v81 = 0LL;
        v82 = 0;
        v83 = 0LL;
        v84 = 0;
        v85 = 0LL;
        v86 = 0LL;
        RegistryValues = RtlQueryRegistryValues(0, (PCWSTR)v11, &v75, Context, 0LL);
        if ( RegistryValues >= 0 )
        {
          v8 = 1;
          if ( LOWORD(Src[0]) )
          {
            v29 = (unsigned int)LOWORD(Src[0]) + 12;
            v74 = *(_QWORD *)L"Class\\";
            v30 = (WCHAR *)PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 14, 0x73726447u, 0);
            v31 = v30;
            if ( v30 )
            {
              *(_QWORD *)v30 = v74;
              *((_DWORD *)v30 + 2) = *(_DWORD *)L"s\\";
              memmove(v30 + 6, Src[1], LOWORD(Src[0]));
              v3 = 0;
              v150.Flags = 1;
              v150.QueryRoutine = 0LL;
              *(const WCHAR *)((char *)v31 + v29) = 0;
              v162 = 67108868;
              v159 = 288;
              v164 = 4;
              v150.Name = L"Settings";
              v166 = 288;
              v151 = __DisplayDriverQueryRoutine;
              v153 = L"InstalledDisplayDrivers";
              v160 = L"MirrorDriver";
              v161 = &v59;
              v163 = &v62;
              v167 = L"AccDriver";
              v168 = &v61;
              v170 = &v62;
              v174 = L"TSCompatible";
              v175 = &v63;
              v177 = &v62;
              v169 = 67108868;
              v171 = 4;
              v173 = 288;
              v176 = 67108868;
              v178 = 4;
              v150.EntryContext = 0LL;
              v150.DefaultType = 0;
              v150.DefaultData = 0LL;
              v150.DefaultLength = 0;
              v152 = 16;
              v154 = 0LL;
              v155 = 0;
              v156 = 0LL;
              v157 = 0;
              v158 = 0LL;
              v165 = 0LL;
              v172 = 0LL;
              v179 = 0LL;
              v180 = 0;
              v181 = 0LL;
              v183 = 0LL;
              v182 = 0LL;
              RtlQueryRegistryValues(2u, v31, &v150, Context, 0LL);
              Win32FreePool((__int64)v31, v32, v33);
            }
            else
            {
              RegistryValues = -1073741670;
              v3 = 0;
            }
          }
        }
        if ( Src[1] )
        {
          ExFreePoolWithTag(Src[1], 0);
          Src[1] = 0LL;
        }
        Win32FreePool((__int64)v11, v20, v21);
        if ( v8 )
        {
          v34 = (_WORD *)Context[26];
          if ( v34 )
          {
            if ( *((_DWORD *)Context + 67) )
            {
              *(_OWORD *)Src = 0LL;
              v35 = 0x7FFFLL;
              v36 = v34;
              do
              {
                if ( !*v36 )
                  break;
                ++v36;
                --v35;
              }
              while ( v35 );
              RegistryValues = v35 == 0 ? 0xC000000D : 0;
              if ( v35 )
              {
                v37 = 2 * (v35 != 0 ? 0x7FFF - v35 : 0);
              }
              else
              {
                v34 = Src[1];
                v37 = (unsigned __int16)Src[0];
              }
              if ( v35 )
              {
                v38 = v37;
                v39 = 0;
                v40 = (v37 >> 1) - 1;
                if ( v37 >> 1 != 1 )
                {
                  v41 = v34;
                  while ( 1 )
                  {
                    ++v39;
                    if ( *v41 == 59 )
                      break;
                    ++v41;
                    if ( v39 >= v40 )
                      goto LABEL_71;
                  }
                  v3 = v39;
                }
LABEL_71:
                v42 = v38 + 2 * (1 - v3);
                v43 = PALLOCMEM2(v42, 0x73726447u, 0);
                v44 = (__int64)v43;
                if ( v43 )
                {
                  memmove(v43, &v34[v3], v42);
                  Win32FreePool(Context[26], v45, v46);
                  Context[26] = v44;
                  *((_DWORD *)Context + 67) = v42;
                }
                else
                {
                  RegistryValues = -1073741670;
                  *((_DWORD *)Context + 67) = 0;
                }
              }
            }
          }
        }
      }
      v5 = (WCHAR *)KeyHandle;
    }
    v4 = v60;
  }
  if ( (Context[20] & 0x800000) != 0 )
  {
    v28 = PALLOCMEM2(0xAuLL, 0x73726447u, 0);
    Context[25] = (__int64)v28;
    if ( !v28 )
      goto LABEL_96;
    *(_QWORD *)v28 = *(_QWORD *)L"cdd";
    v28[4] = 0;
    *((_DWORD *)Context + 66) = 10;
    RegistryValues = 0;
  }
  else
  {
    if ( !v61 && !v59 )
    {
      v22 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v76;
      v78 = L"InstalledDisplayDrivers";
      v76 = __DisplayDriverQueryRoutine;
      v87 = 0LL;
      v75.QueryRoutine = 0LL;
      if ( v4 )
        v22 = &v75;
      v75.Flags = 1;
      v75.Name = L"Settings";
      v75.EntryContext = 0LL;
      v75.DefaultType = 0;
      v75.DefaultData = 0LL;
      v75.DefaultLength = 0;
      v77 = 16;
      v79 = 0LL;
      v80 = 0;
      v81 = 0LL;
      v82 = 0;
      v83 = 0LL;
      v84 = 0;
      v85 = 0LL;
      v86 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, v5, v22, Context, 0LL);
    }
    if ( RegistryValues < 0 )
      goto LABEL_96;
  }
  v23 = v59;
  v24 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v61 )
    v23 = 1;
  v59 = v23;
  InputBuffer = 0LL;
  *(_OWORD *)Source2 = 0LL;
  *(_OWORD *)Length = 0LL;
  GreDeviceIoControlImpl(v24, 0x23203Bu, 0LL, 0, &InputBuffer, 0x30u, &v68, 1u, 1);
  v25 = (unsigned int)Source2[1];
  if ( !LODWORD(Source2[1]) || !Source2[0] )
  {
    LODWORD(InputBuffer) = v64;
    HIDWORD(InputBuffer) = v63;
    Source2[0] = (void *)Context[25];
    v26 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(Source2[1]) = *((_DWORD *)Context + 66);
    Length[0] = Context[26];
    LODWORD(Length[1]) = *((_DWORD *)Context + 67);
    *(_QWORD *)((char *)&InputBuffer + 4) = (v61 != 0 ? 2 : 0) | (unsigned __int64)(v59 != 0);
    GreDeviceIoControlImpl(v26, 0x23203Fu, &InputBuffer, 0x30u, 0LL, 0, &v68, 1u, 1);
    goto LABEL_35;
  }
  v47 = (unsigned int)InputBuffer;
  v48 = DWORD1(InputBuffer);
  if ( v64 != (_DWORD)InputBuffer
    || (v59 != 0) != (BYTE4(InputBuffer) & 1)
    || (v61 != 0 ? 2 : 0) != (BYTE4(InputBuffer) & 2)
    || v63 != HIDWORD(InputBuffer) )
  {
    v64 = InputBuffer;
    v48 = (DWORD1(InputBuffer) >> 1) & 1;
    v59 = BYTE4(InputBuffer) & 1;
    v61 = (DWORD1(InputBuffer) >> 1) & 1;
    v63 = HIDWORD(InputBuffer);
  }
  v49 = (const void *)Context[25];
  if ( !v49 || LODWORD(Source2[1]) != *((_DWORD *)Context + 66) )
    goto LABEL_84;
  if ( RtlCompareMemory(v49, Source2[0], LODWORD(Source2[1])) != *((_DWORD *)Context + 66) )
  {
    v25 = (unsigned int)Source2[1];
LABEL_84:
    v50 = Context[25];
    if ( v50 )
    {
      Win32FreePool(v50, v47, v48);
      v25 = (unsigned int)Source2[1];
    }
    v51 = PALLOCMEM2(v25, 0x73726447u, 0);
    Context[25] = (__int64)v51;
    if ( v51 )
      memmove(v51, Source2[0], LODWORD(Source2[1]));
    else
      RegistryValues = -1073741670;
  }
  v52 = (const void *)Context[26];
  if ( v52 )
  {
    v53 = Length[0];
    if ( Length[0] )
    {
      if ( LODWORD(Length[1]) != *((_DWORD *)Context + 67)
        || RtlCompareMemory(v52, (const void *)Length[0], LODWORD(Length[1])) != *((_DWORD *)Context + 67) )
      {
        Win32FreePool(Context[26], v53, v48);
        v54 = PALLOCMEM2(LODWORD(Length[1]), 0x73726447u, 0);
        Context[26] = (__int64)v54;
        if ( v54 )
          memmove(v54, (const void *)Length[0], LODWORD(Length[1]));
        else
          RegistryValues = -1073741670;
      }
    }
  }
LABEL_35:
  if ( RegistryValues >= 0 )
  {
    if ( v64 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v59 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v61 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v63 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v27 = (const wchar_t *)Context[26];
    if ( v27 )
    {
      if ( !wcsicmp(v27, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_96:
  DrvLogDisplayDriverEvent(1);
  v57 = Context[25];
  if ( v57 )
  {
    Win32FreePool(v57, v55, v56);
    Context[25] = 0LL;
  }
  v58 = Context[26];
  if ( v58 )
  {
    Win32FreePool(v58, v55, v56);
    Context[26] = 0LL;
  }
}
