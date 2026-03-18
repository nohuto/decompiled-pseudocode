/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001E994
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001E8E0 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C000BCF4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C001E5A0 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C001ED68 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001EEC4 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001F4F0 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001F758 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C001F784 (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0060518 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00605E8 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C0060648 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0060C20 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 */

signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  signed int result; // eax
  unsigned __int16 v7; // si
  int v8; // r13d
  int v9; // r12d
  unsigned __int16 v10; // r15
  __int64 v11; // rbx
  unsigned __int16 v12; // di
  char v13; // r13
  char *v14; // r11
  struct _VideoModeDescriptor *v15; // rdx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // si
  bool i; // cf
  bool DetTimParser; // al
  __int64 v20; // rax
  struct _VideoModeDescriptor *v21; // r8
  _WORD *v22; // r10
  unsigned __int16 v23; // si
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r10d
  struct _EDID_V1_CEA_861_DATA_HEADER *v27; // rax
  struct _VideoModeDescriptor *v28; // r8
  unsigned __int16 v29; // r15
  MonDescParser::EDID_MODES *v30; // r12
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // r10
  __int64 v34; // r11
  int v35; // ecx
  __int64 v36; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v37; // r11
  unsigned __int16 v38; // si
  struct _VideoModeDescriptor *v39; // r15
  unsigned int v40; // esi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v42; // r12
  struct _EDID_V1_CEA_861_DATA_HEADER *v43; // rcx
  unsigned int j; // r15d
  char v45; // [rsp+48h] [rbp-29h]
  unsigned __int16 v46; // [rsp+48h] [rbp-29h]
  struct _VideoModeDescriptor *v47; // [rsp+50h] [rbp-21h]
  unsigned __int16 v48[2]; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int16 v49[2]; // [rsp+5Ch] [rbp-15h] BYREF
  unsigned __int16 v50[2]; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int16 v51; // [rsp+64h] [rbp-Dh] BYREF
  unsigned __int16 v52; // [rsp+68h] [rbp-9h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v53; // [rsp+70h] [rbp-1h] BYREF
  char *v54; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v55; // [rsp+80h] [rbp+Fh]
  int v56; // [rsp+84h] [rbp+13h]

  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v53 = 0LL;
  v50[0] = 0;
  v51 = 0;
  v52 = 0;
  v49[0] = 0;
  v48[0] = 0;
  v45 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, v50, &v51, &v52, &v53, v49, v48);
  if ( result >= 0 )
  {
    v7 = v50[0];
    if ( v50[0] > 0x11u )
      return -1071841278;
    v8 = v51;
    if ( v51 > 8u )
      return -1071841278;
    v9 = v52;
    if ( v52 > 6u )
      return -1071841278;
    v10 = v49[0];
    if ( v49[0] > 4u )
      return -1071841278;
    v11 = *a2;
    v12 = v50[0] + v51 + v52 + v49[0] + v48[0];
    if ( !(_WORD)v11 )
    {
      v13 = 1;
LABEL_11:
      *a2 = v12;
      return v13 != 0 ? 0xC0000023 : 0;
    }
    memset(a4, 0, 56 * v11);
    v14 = 0LL;
    v47 = a4;
    *a3 = -1;
    v12 = 0;
    v15 = a4;
    if ( (unsigned __int16)v11 < v7 )
    {
      v45 = 1;
      v7 = v11;
    }
    if ( !v7 )
    {
LABEL_18:
      if ( (unsigned __int16)v11 < v10 )
      {
        v45 = 1;
        v10 = v11;
      }
      v16 = 0;
      v17 = 0;
      for ( i = v10 != 0; ; i = v17 < v10 )
      {
        v49[0] = v16;
        if ( !i || v16 >= 4u )
          break;
        v54 = v14;
        DetTimParser = MonDescParser::EDID_PARSER::GetDetTimParser(
                         *(MonDescParser::EDID_PARSER **)this,
                         v16,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v54);
        v14 = 0LL;
        if ( !DetTimParser
          || (result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                         this,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v54,
                         v47),
              v14 = 0LL,
              result == -1071841271) )
        {
          v15 = v47;
        }
        else
        {
          if ( result < 0 )
            return result;
          if ( !v17 )
            *a3 = v12;
          if ( v12
            && (v20 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v47), v20 != -1) )
          {
            v15 = v21;
            if ( (_WORD)v14 == v17 )
              *v22 = v20;
          }
          else
          {
            LOWORD(v11) = v11 - 1;
            ++v17;
            ++v12;
            v15 = ++v47;
          }
        }
        v16 = v49[0] + 1;
      }
      if ( (unsigned __int16)v11 < (unsigned __int16)v8 )
      {
        LOWORD(v8) = v11;
        LOWORD(v9) = (_WORD)v14;
      }
      else
      {
        if ( (unsigned __int16)v11 >= (unsigned int)(v9 + v8) )
        {
LABEL_34:
          v23 = (unsigned __int16)v14;
          if ( (unsigned __int16)v8 + (unsigned __int16)v9 )
          {
            do
            {
              v24 = v23;
              v25 = **(_QWORD **)this;
              v26 = *(unsigned __int8 *)(v25 + 19);
              v55 = *(unsigned __int8 *)(v25 + 18);
              v56 = v26;
              if ( v23 >= (unsigned __int16)v8 )
              {
                v27 = v53;
                v24 = v23 - (unsigned __int64)(unsigned __int16)v8;
              }
              else
              {
                v27 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(v25 + 38);
              }
              v54 = (char *)v27 + 2 * v24;
              result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                         this,
                         (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v54,
                         v23 >= (unsigned __int16)v8,
                         v15);
              v14 = 0LL;
              if ( result == -1071841276 )
              {
                v15 = v47;
              }
              else
              {
                if ( result < 0 )
                  return result;
                if ( v12 && MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v47) != -1 )
                {
                  v15 = v28;
                }
                else
                {
                  LOWORD(v11) = v11 - 1;
                  ++v12;
                  v15 = ++v47;
                }
              }
              ++v23;
            }
            while ( v23 < (unsigned __int16)v8 + (unsigned int)(unsigned __int16)v9 );
          }
          v29 = (unsigned __int16)v14;
          v13 = v45;
          v30 = this;
          if ( (unsigned __int16)v11 < v48[0] )
            v13 = 1;
          v54 = v14;
          v55 = (unsigned int)v14;
          v46 = (unsigned __int16)v14;
          *(_DWORD *)v49 = *(_DWORD *)(*(_QWORD *)this + 80LL);
          if ( *(_DWORD *)v49 )
          {
            v31 = (unsigned int)v14;
            do
            {
              if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v30, v31) == 2 )
              {
                v35 = v34;
                v36 = v33 + 8LL * *(_QWORD *)(v33 + 80);
                while ( v33 != v36 )
                {
                  if ( v35 == v32 )
                    goto LABEL_66;
                  ++v35;
                  v33 += 8LL;
                }
                v33 = v34;
LABEL_66:
                MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v54,
                  *(union _EDID_V1_BLOCK **)v33);
                v37 = 0LL;
                v53 = 0LL;
                v38 = 0;
                if ( (_WORD)v11 )
                {
                  v39 = v47;
                  do
                  {
                    if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                            (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v54,
                            v38,
                            (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v53) )
                      break;
                    result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                               v30,
                               (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v53,
                               v39);
                    v37 = 0LL;
                    if ( result != -1071841271 )
                    {
                      if ( result < 0 )
                        return result;
                      if ( !v12
                        || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v39) == -1 )
                      {
                        ++v12;
                        LOWORD(v11) = v11 - 1;
                        v47 = ++v39;
                      }
                    }
                    ++v38;
                  }
                  while ( (_WORD)v11 );
                  v29 = v46;
                }
                v40 = (unsigned int)v37;
                if ( (_WORD)v11 )
                {
                  do
                  {
                    if ( v40 >= v55 )
                      break;
                    v53 = v37;
                    DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v54,
                                  v40,
                                  &v53);
                    v37 = 0LL;
                    if ( DataBlock )
                    {
                      v42 = v53;
                      if ( (*(_BYTE *)v53 & 0xE0) == 0x40 )
                      {
                        v43 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v53 + 1);
                        for ( j = 0; ; ++j )
                        {
                          v53 = v43;
                          if ( !(_WORD)v11 || j >= (*(_BYTE *)v42 & 0x1Fu) )
                            break;
                          result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v43, v47);
                          v37 = 0LL;
                          if ( result != -1071841278 )
                          {
                            if ( result < 0 )
                              return result;
                            ++v12;
                            LOWORD(v11) = v11 - 1;
                            ++v47;
                          }
                          v43 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v53 + 1);
                        }
                      }
                    }
                    ++v40;
                  }
                  while ( (_WORD)v11 );
                  v30 = this;
                  v29 = v46;
                }
              }
              v31 = ++v29;
              v46 = v29;
            }
            while ( (unsigned int)v29 < *(_DWORD *)v49 );
          }
          goto LABEL_11;
        }
        LOWORD(v9) = v11 - v8;
      }
      v45 = 1;
      goto LABEL_34;
    }
    result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v7, a4);
    v14 = 0LL;
    if ( result >= 0 )
    {
      LOWORD(v11) = v11 - v7;
      v12 = v7;
      v15 = &a4[v7];
      v47 = v15;
      goto LABEL_18;
    }
  }
  return result;
}
