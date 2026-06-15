/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18006181C
 * Callers:
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18004C9C0 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800127C0 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005F388 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060C14 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060CD0 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060DBC (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060E78 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180061A90 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1801275E4 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v3; // edi
  CSpatialAudioMSHRTF *v4; // rax
  CSpatialAudioMSHRTF *v5; // rcx
  CSpatialAudioDolbyHeadphones *v6; // rax
  CSpatialAudioDolbyHeadphones *v7; // rcx
  CSpatialAudioDolbyStereo *v8; // rax
  CSpatialAudioDolbyStereo *v9; // rcx
  CSpatialAudioDolbyAtmosMAT *v10; // rax
  CSpatialAudioDolbyAtmosMAT *v11; // rcx
  CSpatialAudioDtsxHeadphones *v12; // rax
  CSpatialAudioDtsxHeadphones *v13; // rcx
  CSpatialAudioDtsxStereo *v14; // rax
  CSpatialAudioDtsxStereo *v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx

  v3 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates();
  EnterCriticalSection(&stru_1801A07E8);
  if ( ++dword_1801A0810 == 1 )
  {
    v4 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v4, a2);
    else
      v5 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v5;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v6 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v6, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v7;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v8 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v8, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v9;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v10 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10 ? CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v10, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v11;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v12 = (CSpatialAudioDtsxHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12 ? CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(v12, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v13;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2]
      || ((++g_ListOfSpatialTech[0],
           (v14 = (CSpatialAudioDtsxStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow)) == 0LL)
        ? (v15 = 0LL)
        : (v15 = CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(v14, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v15) == 0LL) )
    {
LABEL_28:
      LeaveCriticalSection(&stru_1801A07E8);
LABEL_26:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v17);
      return v3;
    }
    v16 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v16 = g_ListOfSpatialTech[0];
  }
  LeaveCriticalSection(&stru_1801A07E8);
  v17 = 0LL;
  if ( !v16 )
    v17 = 2147942414LL;
  v3 = v17;
  if ( !v16 )
    goto LABEL_26;
  return v3;
}
