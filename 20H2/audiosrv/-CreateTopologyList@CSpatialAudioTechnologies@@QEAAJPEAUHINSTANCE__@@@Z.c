/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180061084
 * Callers:
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18004C220 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18004BB20 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005EF44 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060D3C (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060DF8 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060EE4 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180060FA0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800612F8 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180126954 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(
        CSpatialAudioTechnologies *this,
        HINSTANCE a2,
        __int64 a3)
{
  unsigned int v4; // edi
  CSpatialAudioMSHRTF *v5; // rax
  CSpatialAudioMSHRTF *v6; // rcx
  CSpatialAudioDolbyHeadphones *v7; // rax
  CSpatialAudioDolbyHeadphones *v8; // rcx
  CSpatialAudioDolbyStereo *v9; // rax
  CSpatialAudioDolbyStereo *v10; // rcx
  CSpatialAudioDolbyAtmosMAT *v11; // rax
  CSpatialAudioDolbyAtmosMAT *v12; // rcx
  CSpatialAudioDtsxHeadphones *v13; // rax
  CSpatialAudioDtsxHeadphones *v14; // rcx
  CSpatialAudioDtsxStereo *v15; // rax
  CSpatialAudioDtsxStereo *v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx

  v4 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates((__int64)this, (__int64)a2, a3);
  EnterCriticalSection(&stru_18019F778);
  if ( ++dword_18019F7A0 == 1 )
  {
    v5 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
      v6 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v5, a2);
    else
      v6 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v6;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v7 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v7, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v8;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v9 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v9, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v10;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v11 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11 ? CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v11, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v12;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v13 = (CSpatialAudioDtsxHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13 ? CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(v13, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v14;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2]
      || ((++g_ListOfSpatialTech[0],
           (v15 = (CSpatialAudioDtsxStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow)) == 0LL)
        ? (v16 = 0LL)
        : (v16 = CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(v15, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v16) == 0LL) )
    {
LABEL_28:
      LeaveCriticalSection(&stru_18019F778);
LABEL_26:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v18);
      return v4;
    }
    v17 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v17 = g_ListOfSpatialTech[0];
  }
  LeaveCriticalSection(&stru_18019F778);
  v18 = 0LL;
  if ( !v17 )
    v18 = 2147942414LL;
  v4 = v18;
  if ( !v17 )
    goto LABEL_26;
  return v4;
}
