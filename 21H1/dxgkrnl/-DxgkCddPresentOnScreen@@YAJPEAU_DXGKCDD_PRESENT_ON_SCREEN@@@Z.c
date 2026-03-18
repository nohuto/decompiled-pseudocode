/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ @ 0x1C00017DC (-AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009A0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0011A58 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0011E48 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0013058 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00199F0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019C7C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0038F54 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D6630 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC6B8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00DEF38 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102370 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0141CE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01487FC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C014B050 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0155240 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C020F8B8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C022A1C0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026890C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FA5F0 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1, __int64 a2)
{
  char v3; // r15
  int PairingAdapters; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  DXGADAPTER *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  SESSION_VIEW *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DISPLAY_SOURCE *v28; // rbx
  ADAPTER_DISPLAY *v29; // rax
  __int64 v30; // r13
  __int64 v31; // rdi
  DXGGLOBAL *Global; // rax
  struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *v33; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DXGDEVICE *v37; // rbx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  D3DKMT_HANDLE v46; // esi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v48; // rdx
  bool v49; // zf
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r15d
  unsigned int v54; // esi
  ADAPTER_DISPLAY *v55; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v56; // r13d
  __int64 v57; // rcx
  struct tagRECT *v58; // rdi
  struct tagRECT *v59; // rbx
  int CddShadowPitch; // eax
  char v61; // bl
  struct tagRECT *v62; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  int v64; // ecx
  D3DKMT_HANDLE v65; // eax
  struct tagRECT v66; // xmm1
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  struct DXGCONTEXT *v73; // rdi
  struct DXGDEVICE *v74; // rcx
  struct DXGGLOBAL *v75; // rax
  char *v76; // rbx
  int CddAllocations; // eax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rbx
  __int64 v87; // rcx
  SIZE_T v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  struct DXGGLOBAL *v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v104; // rcx
  __int64 hAllocation; // rcx
  void *pData; // rax
  ADAPTER_DISPLAY *v107; // rbx
  int v108; // eax
  __int64 v109; // rdx
  __int64 VidPnSourceId; // rcx
  __int64 v111; // rax
  _QWORD *v112; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v113; // r8d
  _QWORD *v114; // rax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rax
  LONG v119; // eax
  unsigned int v120; // r15d
  unsigned int v121; // r12d
  ADAPTER_DISPLAY *v122; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v123; // esi
  struct tagRECT *v124; // rdi
  int v125; // eax
  __int64 v126; // rbx
  int v127; // eax
  int v128; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rbx
  _QWORD *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rdi
  struct DXGDEVICE *v138; // rbx
  __int64 v139; // rax
  __int64 v140; // r9
  char *v141; // rdx
  __int64 v142; // rbx
  __int64 v143; // rax
  __int64 v144; // r9
  char *v145; // rdx
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // r9
  char *v149; // rdx
  char v150; // [rsp+58h] [rbp-B0h]
  char v151; // [rsp+59h] [rbp-AFh]
  char v152; // [rsp+5Ah] [rbp-AEh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v153; // [rsp+5Ch] [rbp-ACh]
  __int64 v154; // [rsp+60h] [rbp-A8h]
  struct tagRECT *v155; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT *v156; // [rsp+70h] [rbp-98h] BYREF
  __int64 v157; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v158; // [rsp+80h] [rbp-88h]
  ADAPTER_DISPLAY *v159; // [rsp+88h] [rbp-80h]
  unsigned int v160; // [rsp+90h] [rbp-78h]
  __int64 v161; // [rsp+98h] [rbp-70h]
  struct DXGDEVICE *v162; // [rsp+A0h] [rbp-68h]
  struct DXGHWQUEUE *v163; // [rsp+A8h] [rbp-60h]
  DXGDEVICE *v164; // [rsp+B0h] [rbp-58h]
  int v165; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGHWQUEUE *v166; // [rsp+C0h] [rbp-48h]
  DXGADAPTER *v167; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v168; // [rsp+D0h] [rbp-38h]
  struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *PresentToHwQueueParams; // [rsp+D8h] [rbp-30h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E0h] [rbp-28h]
  _D3DKMT_UNLOCK v171; // [rsp+E8h] [rbp-20h] BYREF
  _D3DKMT_LOCK v172; // [rsp+F8h] [rbp-10h] BYREF
  ADAPTER_RENDER **v173; // [rsp+128h] [rbp+20h]
  SESSION_VIEW *v174; // [rsp+130h] [rbp+28h]
  struct _LUID v175; // [rsp+138h] [rbp+30h] BYREF
  char v176[8]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v177; // [rsp+148h] [rbp+40h]
  char v178; // [rsp+150h] [rbp+48h]
  _DXGKARG_PRESENT_DISPLAYONLY v179; // [rsp+158h] [rbp+50h] BYREF
  char v180[8]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v181; // [rsp+1A0h] [rbp+98h]
  char v182; // [rsp+1A8h] [rbp+A0h]
  char v183[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v184; // [rsp+1B8h] [rbp+B0h]
  char v185; // [rsp+1C0h] [rbp+B8h]
  char v186[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v187; // [rsp+1D0h] [rbp+C8h]
  char v188; // [rsp+1D8h] [rbp+D0h]
  _QWORD v189[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _QWORD v190[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  _QWORD v191[2]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 v192; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v193[16]; // [rsp+218h] [rbp+110h] BYREF
  _QWORD v194[7]; // [rsp+228h] [rbp+120h] BYREF
  struct tagRECT v195; // [rsp+260h] [rbp+158h] BYREF
  struct tagRECT v196; // [rsp+270h] [rbp+168h] BYREF
  char v197[8]; // [rsp+288h] [rbp+180h] BYREF
  char v198[64]; // [rsp+290h] [rbp+188h] BYREF
  char v199[88]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v200[8]; // [rsp+328h] [rbp+220h] BYREF
  char v201[64]; // [rsp+330h] [rbp+228h] BYREF
  char v202[88]; // [rsp+370h] [rbp+268h] BYREF
  char v203[8]; // [rsp+3C8h] [rbp+2C0h] BYREF
  char v204[64]; // [rsp+3D0h] [rbp+2C8h] BYREF
  char v205[88]; // [rsp+410h] [rbp+308h] BYREF
  char v206[8]; // [rsp+468h] [rbp+360h] BYREF
  char v207[64]; // [rsp+470h] [rbp+368h] BYREF
  char v208[88]; // [rsp+4B0h] [rbp+3A8h] BYREF
  _BYTE v209[64]; // [rsp+508h] [rbp+400h] BYREF

  v167 = 0LL;
  v3 = 0;
  v151 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 > 3u )
    {
      v82 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v82 + 24) = *(int *)a1;
      *(_QWORD *)(v82 + 32) = -1073741811LL;
      WdLogEvent5_WdEvent(v82);
      return 3221225485LL;
    }
    PairingAdapters = DxgkpGetPairingAdapters(
                        *((struct DXGADAPTER **)a1 + 1),
                        *((_DWORD *)a1 + 4),
                        0LL,
                        0LL,
                        &v167,
                        &v192,
                        0);
    v7 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
      v83[3] = *((_QWORD *)a1 + 1);
      v83[4] = *((unsigned int *)a1 + 4);
      v83[5] = v7;
      WdLogEvent5_WdError(v83);
      return (unsigned int)v7;
    }
    v8 = v167;
    if ( !v167 )
    {
      v84 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v84 + 24) = 1006LL;
      WdLogEvent5_WdAssertion(v84);
    }
    v175 = *(struct _LUID *)((char *)v8 + 316);
    DXGADAPTER::ReleaseReferenceNoTracking(v8);
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 88);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v152 = 0;
      v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v152, 0);
      v19 = v16;
      if ( v16 < 0 )
      {
        v85 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v85 + 24) = v19;
        WdLogEvent5_WdError(v85);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionDataForSpecifiedSession,
                                  &v175,
                                  *((_DWORD *)a1 + 4));
        v174 = SessionViewFromSource;
        v23 = SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          v24 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6));
          if ( *((_DWORD *)a1 + 8) == (_DWORD)v24 )
          {
            v24 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7));
            if ( *((_DWORD *)a1 + 9) == (_DWORD)v24 )
            {
              v25 = *((unsigned int *)a1 + 19);
              if ( (unsigned int)v25 > 4 )
              {
                v88 = 16 * v25;
                if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
                  v88 = -1LL;
                v155 = (struct tagRECT *)operator new[](v88, 0x4B677844u, PagedPool);
                if ( !v155 )
                {
                  v93 = WdLogNewEntry5_WdLowResource(v90, v89, v91, v92);
                  LODWORD(v7) = -1073741801;
                  *(_QWORD *)(v93 + 24) = *((unsigned int *)a1 + 19);
                  *(_QWORD *)(v93 + 32) = -1073741801LL;
                  WdLogEvent5_WdLowResource(v93);
LABEL_67:
                  if ( v152 )
                    DxgkReleaseSessionModeChangeLock();
                  return (unsigned int)v7;
                }
              }
              else
              {
                v155 = (struct tagRECT *)v209;
              }
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v23);
              v28 = PrimaryDisplaySource;
              if ( PrimaryDisplaySource )
              {
                while ( 1 )
                {
                  v29 = (ADAPTER_DISPLAY *)*((_QWORD *)v28 + 1);
                  v162 = 0LL;
                  v156 = 0LL;
                  v166 = 0LL;
                  v157 = 0LL;
                  v195 = 0LL;
                  v150 = 0;
                  memset(&v172, 0, sizeof(v172));
                  v159 = v29;
                  v30 = *((_QWORD *)v29 + 2);
                  v168 = v30;
                  v167 = (DXGADAPTER *)v30;
                  v171 = 0LL;
                  if ( !v30 )
                  {
                    v94 = WdLogNewEntry5_WdAssertion(v27, v26);
                    *(_QWORD *)(v94 + 24) = 1105LL;
                    WdLogEvent5_WdAssertion(v94);
                  }
                  if ( !*(_QWORD *)(v30 + 2672) )
                  {
                    v95 = WdLogNewEntry5_WdAssertion(v27, v26);
                    *(_QWORD *)(v95 + 24) = 1106LL;
                    WdLogEvent5_WdAssertion(v95);
                  }
                  v31 = *((unsigned int *)v28 + 4);
                  v158 = *((_DWORD *)v28 + 4);
                  Global = DXGGLOBAL::GetGlobal(v27, v26);
                  PresentToHwQueueParams = DXGGLOBAL::AllocatePresentToHwQueueParams(Global);
                  v33 = PresentToHwQueueParams;
                  if ( !PresentToHwQueueParams )
                  {
                    LODWORD(v7) = -1073741801;
                    goto LABEL_67;
                  }
                  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                           (struct _LUID *)(v30 + 316),
                                                           0);
                  v19 = CddDeviceAndContextForCurrentSession;
                  if ( CddDeviceAndContextForCurrentSession < 0 )
                  {
                    v96 = WdLogNewEntry5_WdError(v36, v35);
                    *(_QWORD *)(v96 + 24) = v30;
                    *(_QWORD *)(v96 + 32) = v19;
                    WdLogEvent5_WdError(v96);
                    v99 = DXGGLOBAL::GetGlobal(v98, v97);
                    v76 = (char *)v99 + 1008;
                    ++*((_DWORD *)v99 + 259);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v99 + 63) >= *((_WORD *)v99 + 512) )
                      goto LABEL_90;
                    goto LABEL_60;
                  }
                  v37 = v162;
                  v164 = v162;
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
                    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v193,
                    v162);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
                    (__int64)v194,
                    &v156,
                    1u);
                  v173 = (ADAPTER_RENDER **)((char *)v37 + 16);
                  v177 = *(_QWORD *)(*((_QWORD *)v37 + 2) + 16LL);
                  v178 = 0;
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v176);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v197, (__int64)v37, 1, v38, 0);
                  v163 = v166;
                  if ( !v194[0] )
                  {
                    LODWORD(v19) = -1073741801;
                    v100 = WdLogNewEntry5_WdLowResource(v40, v39, v41, v42);
                    *(_QWORD *)(v100 + 24) = -1073741801LL;
                    WdLogEvent5_WdLowResource(v100);
                    goto LABEL_51;
                  }
                  v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v197, 0LL);
                  v19 = v43;
                  if ( v43 < 0 )
                  {
                    v101 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
                    v101[3] = v37;
                    v101[4] = v19;
                    goto LABEL_142;
                  }
                  ADAPTER_DISPLAY::GetCddAllocationHandles(v159, v31, (unsigned int *)&v157, (unsigned int *)&v157 + 1);
                  LODWORD(v154) = v157;
                  if ( !(_DWORD)v157 || (v46 = HIDWORD(v157), (HIDWORD(v154) = HIDWORD(v157)) == 0) )
                  {
                    CddAllocations = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                                       v159,
                                       v37,
                                       v31,
                                       (unsigned int *)&v157,
                                       (unsigned int *)&v157 + 1,
                                       (struct COREDEVICEACCESS *)v197);
                    v19 = CddAllocations;
                    if ( CddAllocations == -1073741637 )
                    {
                      LODWORD(v19) = -1071775482;
                      v79 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v79[5] = -1071775482LL;
LABEL_72:
                      v79[4] = v31;
                      v79[3] = v30;
                      WdLogEvent5_WdEvent(v79);
                      goto LABEL_51;
                    }
                    if ( CddAllocations < 0 )
                    {
                      v79 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v79[5] = v19;
                      goto LABEL_72;
                    }
                    v46 = HIDWORD(v157);
                    v154 = v157;
                  }
                  v172.hDevice = *((_DWORD *)v37 + 109);
                  v172.hAllocation = v46;
                  v171.hDevice = *((_DWORD *)v37 + 109);
                  v171.phAllocations = &v172.hAllocation;
                  v171.NumAllocations = 1;
                  ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v159, v31);
                  v161 = v31;
                  v195 = *(struct tagRECT *)(*((_QWORD *)v159 + 14) + 3968 * v31 + 652);
                  if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v159, (unsigned int)v31, 1LL) - 2) & 0xFFFFFFFD) == 0 )
                  {
                    right = v195.right;
                    v195.right = v195.bottom;
                    v195.bottom = right;
                  }
                  CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                                       v159,
                                                       (unsigned int)v31,
                                                       0LL);
                  v49 = *(_DWORD *)a1 == 1;
                  v153 = CurrentOrientation;
                  if ( v49 )
                  {
                    if ( !*(_QWORD *)(v30 + 2680) && ADAPTER_DISPLAY::IsIdenticalMode(v159, (unsigned int)v31) )
                    {
                      v62 = v155;
                      for ( i = 0;
                            i < *((_DWORD *)a1 + 19);
                            v62[v104] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v104) )
                      {
                        v104 = i++;
                      }
                      goto LABEL_75;
                    }
                    v50 = DXGDEVICE::Lock(v37, &v172, (struct COREDEVICEACCESS *)v197);
                    v19 = v50;
                    if ( v50 < 0 )
                    {
                      v101 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
                      v101[3] = v30;
                      v101[4] = v31;
                      hAllocation = v172.hAllocation;
                      v101[6] = v19;
                      goto LABEL_141;
                    }
                    v160 = 0;
                    v150 = 1;
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v53 = v160;
                      v54 = v31;
                      v55 = v159;
                      v56 = v153;
                      do
                      {
                        v57 = v53;
                        v58 = &v155[v57];
                        v59 = (struct tagRECT *)(v57 * 16 + *((_QWORD *)a1 + 10));
                        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v55, v54);
                        DxgkpBlitA8R8R8G8(
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 8),
                          *((_DWORD *)a1 + 9),
                          *((_DWORD *)a1 + 10),
                          v56,
                          (unsigned __int8 *)v172.pData,
                          CddShadowPitch,
                          &v195,
                          v59,
                          v58);
                        ++v53;
                      }
                      while ( v53 < *((_DWORD *)a1 + 19) );
                      v30 = v168;
                      v33 = PresentToHwQueueParams;
                      LODWORD(v31) = v54;
                      v37 = v164;
                    }
                    if ( *(_QWORD *)(v30 + 2680) )
                    {
                      DXGDEVICE::Unlock(v37, &v171, 0);
                      v46 = HIDWORD(v154);
                      v61 = 0;
                      v62 = v155;
                      v150 = 0;
                      goto LABEL_37;
                    }
                    v46 = HIDWORD(v154);
                  }
                  else
                  {
                    if ( !*(_QWORD *)(v30 + 2680) )
                    {
                      LODWORD(v19) = -1073741637;
                      v101 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)CurrentOrientation, v48);
                      v101[3] = v30;
                      v101[4] = *(int *)a1;
                      v101[5] = -1073741637LL;
                      goto LABEL_142;
                    }
                    DxgkpConvertRects(
                      *((_DWORD *)a1 + 8),
                      *((_DWORD *)a1 + 9),
                      CurrentOrientation,
                      &v195,
                      *((_DWORD *)a1 + 19),
                      *((struct tagRECT **)a1 + 10),
                      v155);
                  }
                  v62 = v155;
LABEL_75:
                  v61 = v150;
LABEL_37:
                  if ( *(_QWORD *)(v30 + 2680) )
                  {
                    v165 = 0;
                    if ( v163 )
                    {
                      v165 = *((_DWORD *)v163 + 6);
                      v33->hHwQueues = (D3DKMT_HANDLE *)&v165;
                    }
                    v33->PrivatePresentData.hDevice = *((_DWORD *)v156 + 6);
                    v33->PrivatePresentData.hWindow = 0LL;
                    v33->PrivatePresentData.SubRectCnt = *((_DWORD *)a1 + 19);
                    Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v33->PrivatePresentData.Flags.Value;
                    v33->PrivatePresentData.pSrcSubRects = v62;
                    v33->PrivatePresentData.BroadcastContextCount = 0;
                    v64 = *(_DWORD *)a1;
                    if ( *(_DWORD *)a1 )
                    {
                      v33->PrivatePresentData.Flags.Value = *(_DWORD *)&Value | 1;
                      v65 = v154;
                      if ( v64 == 1 )
                      {
                        v33->PrivatePresentData.hSource = v46;
                        v33->PrivatePresentData.hDestination = v65;
                        goto LABEL_43;
                      }
                      v33->PrivatePresentData.hSource = v154;
                      if ( v64 == 2 )
                      {
                        v33->PrivatePresentData.hDestination = v46;
LABEL_43:
                        v33->PrivatePresentData.SrcRect = v195;
                        v66 = v195;
                      }
                      else
                      {
                        v113 = v153;
                        v33->PrivatePresentData.hDestination = v65;
                        DxgkpConvertRects(
                          *((_DWORD *)a1 + 8),
                          *((_DWORD *)a1 + 9),
                          v113,
                          &v195,
                          2u,
                          (struct tagRECT *)((char *)a1 + 44),
                          (struct tagRECT *)((char *)a1 + 44));
                        v33->PrivatePresentData.SrcRect = *(RECT *)((char *)a1 + 44);
                        v66 = *(struct tagRECT *)((char *)a1 + 60);
                      }
                      v33->PrivatePresentData.DstRect = v66;
                    }
                    else
                    {
                      v33->PrivatePresentData.Flags.Value = *(_DWORD *)&Value | 2;
                      v33->PrivatePresentData.Color = *((_DWORD *)a1 + 5);
                      v33->PrivatePresentData.hDestination = v154;
                      v33->PrivatePresentData.hSource = 0;
                      v33->PrivatePresentData.DstRect = v195;
                    }
                    v67 = DXGCONTEXT::PresentFromCdd(
                            v156,
                            v33,
                            v31,
                            (struct COREDEVICEACCESS *)v197,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v176,
                            &v156);
                    v19 = v67;
                    if ( v67 < 0 )
                    {
                      if ( v67 == -1071775482 )
                      {
                        v114 = (_QWORD *)WdLogNewEntry5_WdEvent();
                        v114[3] = v156;
                        v114[4] = -1071775482LL;
                        v114[5] = 1487LL;
                        WdLogEvent5_WdEvent(v114);
                        goto LABEL_49;
                      }
                      if ( v67 == -1071774910 )
                        goto LABEL_49;
                      v112 = (_QWORD *)WdLogNewEntry5_WdError(v69, v68);
                      v112[3] = v156;
                      v112[4] = v19;
                      v112[5] = 1494LL;
                      goto LABEL_114;
                    }
                    goto LABEL_46;
                  }
                  memset(&v179, 0, sizeof(v179));
                  pData = v172.pData;
                  v179.VidPnSourceId = v31;
                  if ( !v61 )
                    pData = (void *)*((_QWORD *)a1 + 3);
                  v107 = v159;
                  v179.pSource = pData;
                  v179.BytesPerPixel = 4;
                  v179.Pitch = ADAPTER_DISPLAY::GetCddShadowPitch(v159, (unsigned int)v31);
                  v179.Flags.Value = 0;
                  v108 = ADAPTER_DISPLAY::GetCurrentOrientation(v107, (unsigned int)v31, 1LL);
                  v179.NumMoves = 0;
                  VidPnSourceId = v108 != 1;
                  v179.pMoves = 0LL;
                  v179.Flags.Value = VidPnSourceId | v179.Flags.Value & 0xFFFFFFFE;
                  v179.NumDirtyRects = *((_DWORD *)a1 + 19);
                  v179.pDirtyRect = v155;
                  v111 = *((_QWORD *)v107 + 48);
                  if ( v111
                    && (VidPnSourceId = v179.VidPnSourceId, v179.VidPnSourceId < *(_DWORD *)v111)
                    && (v109 = *(_QWORD *)(v111 + 8)) != 0 )
                  {
                    LODWORD(v19) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v109 + 2904LL * v179.VidPnSourceId), &v179);
                  }
                  else
                  {
                    LODWORD(v19) = -1073741811;
                  }
                  if ( (int)v19 < 0 )
                  {
                    v112 = (_QWORD *)WdLogNewEntry5_WdError(VidPnSourceId, v109);
                    v112[3] = v30;
                    v112[4] = (int)v19;
                    v112[5] = 1394LL;
LABEL_114:
                    WdLogEvent5_WdError(v112);
                    goto LABEL_49;
                  }
LABEL_46:
                  if ( *(_DWORD *)a1 == 2 )
                  {
                    v115 = DXGDEVICE::Lock(v164, &v172, (struct COREDEVICEACCESS *)v197);
                    v19 = v115;
                    HIDWORD(v154) = v115;
                    if ( v115 < 0 )
                    {
                      v118 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
                      v70 = v161;
                      v118[3] = v30;
                      v118[4] = v70;
                      v118[5] = v172.hAllocation;
                      v118[6] = v19;
                      WdLogEvent5_WdError(v118);
                      goto LABEL_50;
                    }
                    v119 = *((_DWORD *)a1 + 8);
                    *(_QWORD *)&v196.left = 0LL;
                    v196.right = v119;
                    v196.bottom = *((_DWORD *)a1 + 9);
                    v150 = 1;
                    if ( v153 != D3DKMDT_VPPR_IDENTITY )
                    {
                      if ( v153 == D3DKMDT_VPPR_ROTATE90 )
                      {
                        v153 = D3DKMDT_VPPR_ROTATE270;
                      }
                      else if ( v153 == D3DKMDT_VPPR_ROTATE270 )
                      {
                        v153 = D3DKMDT_VPPR_ROTATE90;
                      }
                    }
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v120 = v158;
                      v121 = 0;
                      v122 = v159;
                      v123 = v153;
                      do
                      {
                        v124 = &v155[v121];
                        v125 = ADAPTER_DISPLAY::GetCddShadowPitch(v122, v120);
                        v126 = (unsigned int)(v195.top * v125);
                        v127 = ADAPTER_DISPLAY::GetCddShadowPitch(v122, v120);
                        DxgkpBlitA8R8R8G8(
                          (unsigned __int8 *)v172.pData + 4 * v195.left + v126,
                          v195.right - v195.left,
                          v195.bottom - v195.top,
                          v127,
                          v123,
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 10),
                          &v196,
                          v124,
                          v124);
                        ++v121;
                      }
                      while ( v121 < *((_DWORD *)a1 + 19) );
                      LODWORD(v19) = HIDWORD(v154);
                      v30 = v168;
                      v33 = PresentToHwQueueParams;
                      LODWORD(v31) = v158;
                    }
                  }
                  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v30) )
                  {
                    if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                          *(ADAPTER_DISPLAY **)(v30 + 2672),
                                          (unsigned int)v31) )
                    {
                      if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v30 + 2672), (unsigned int)v31) )
                      {
                        if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                *(ADAPTER_DISPLAY **)(v30 + 2672),
                                (unsigned int)v31) )
                        {
                          v128 = ADAPTER_DISPLAY::PresentCddPrimary(
                                   *(ADAPTER_DISPLAY **)(v30 + 2672),
                                   v156,
                                   v31,
                                   (struct COREDEVICEACCESS *)v197);
                          v131 = v128;
                          if ( v128 < 0 )
                          {
                            v132 = (_QWORD *)WdLogNewEntry5_WdError(v130, v129);
                            v132[3] = v156;
                            v132[4] = v131;
                            v132[5] = 1586LL;
                            WdLogEvent5_WdError(v132);
                          }
                        }
                      }
                    }
                  }
                  v151 = 1;
LABEL_49:
                  v70 = v161;
LABEL_50:
                  if ( v150 )
                  {
                    DXGDEVICE::Unlock(v164, &v171, 0);
                    if ( (int)v19 < 0 )
                    {
                      v101 = (_QWORD *)WdLogNewEntry5_WdError(v134, v133);
                      hAllocation = (int)v19;
                      v101[3] = v30;
                      v101[4] = v70;
LABEL_141:
                      v101[5] = hAllocation;
LABEL_142:
                      WdLogEvent5_WdError(v101);
                    }
                  }
LABEL_51:
                  COREACCESS::~COREACCESS((COREACCESS *)v199);
                  COREACCESS::~COREACCESS((COREACCESS *)v198);
                  if ( v178 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v176);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v193);
                  if ( v163 )
                  {
                    v135 = _InterlockedDecrement64((volatile signed __int64 *)v163 + 11);
                    if ( v135 < 0 )
                    {
                      v136 = WdLogNewEntry5_WdAssertion(v72, v71);
                      *(_QWORD *)(v136 + 24) = 111LL;
                      WdLogEvent5_WdAssertion(v136);
                    }
                    if ( !v135 )
                    {
                      v137 = *((_QWORD *)v166 + 2);
                      v138 = *(struct DXGDEVICE **)(v137 + 16);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v189,
                        v138);
                      v139 = *((_QWORD *)v138 + 2);
                      v188 = 0;
                      v187 = *(_QWORD *)(v139 + 16);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v186);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v200, (__int64)v138, 2, v140, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v200, v141);
                      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v138 + 2) + 16LL) + 200LL) != 4 )
                        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v137, v166, (struct COREDEVICEACCESS *)v200);
                      COREACCESS::~COREACCESS((COREACCESS *)v202);
                      COREACCESS::~COREACCESS((COREACCESS *)v201);
                      if ( v188 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v186);
                      if ( v189[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v189);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v137 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      {
                        v142 = *(_QWORD *)(v137 + 16);
                        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v190,
                          (struct DXGDEVICE *)v142);
                        v143 = *(_QWORD *)(v137 + 16);
                        v182 = 0;
                        v181 = *(_QWORD *)(*(_QWORD *)(v143 + 16) + 16LL);
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v180);
                        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v203, v142, 2, v144, 0);
                        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v203, v145);
                        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v142 + 16) + 16LL) + 200LL) != 4 )
                          DXGDEVICE::DestroyContext(
                            (DXGDEVICE *)v142,
                            (struct DXGCONTEXT *)v137,
                            (struct COREDEVICEACCESS *)v203);
                        COREACCESS::~COREACCESS((COREACCESS *)v205);
                        COREACCESS::~COREACCESS((COREACCESS *)v204);
                        if ( v182 )
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v180);
                        if ( v190[0] )
                          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v190);
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v142 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          ADAPTER_RENDER::DestroyDeviceNoLocks(
                            *(ADAPTER_RENDER **)(v142 + 16),
                            (struct DXGDEVICE *)v142);
                      }
                    }
                    v164 = v162;
                  }
                  v73 = v156;
                  if ( v156 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      v146 = *((_QWORD *)v73 + 2);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v191,
                        (struct DXGDEVICE *)v146);
                      v147 = *((_QWORD *)v73 + 2);
                      v185 = 0;
                      v184 = *(_QWORD *)(*(_QWORD *)(v147 + 16) + 16LL);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v183);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v206, v146, 2, v148, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v206, v149);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 16) + 16LL) + 200LL) != 4 )
                        DXGDEVICE::DestroyContext((DXGDEVICE *)v146, v73, (struct COREDEVICEACCESS *)v206);
                      COREACCESS::~COREACCESS((COREACCESS *)v208);
                      COREACCESS::~COREACCESS((COREACCESS *)v207);
                      if ( v185 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v183);
                      if ( v191[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v191);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v146 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v146 + 16), (struct DXGDEVICE *)v146);
                    }
                    v74 = v162;
                  }
                  else
                  {
                    v74 = v164;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*v173, v162);
                  v75 = DXGGLOBAL::GetGlobal((__int64)v74, v71);
                  v76 = (char *)v75 + 1008;
                  ++*((_DWORD *)v75 + 259);
                  if ( ExQueryDepthSList((PSLIST_HEADER)v75 + 63) >= *((_WORD *)v75 + 512) )
                  {
LABEL_90:
                    ++*((_DWORD *)v76 + 8);
                    (*((void (__fastcall **)(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *, char *))v76 + 7))(v33, v76);
                    goto LABEL_61;
                  }
LABEL_60:
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v76, (PSLIST_ENTRY)v33);
LABEL_61:
                  PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v174, PrimaryDisplaySource);
                  v28 = PrimaryDisplaySource;
                  if ( !PrimaryDisplaySource )
                  {
                    v3 = v151;
                    break;
                  }
                }
              }
              if ( v155 != (struct tagRECT *)v209 )
                operator delete[](v155);
              LODWORD(v7) = 0;
              if ( !v3 )
                LODWORD(v7) = v19;
              goto LABEL_67;
            }
          }
          v87 = WdLogNewEntry5_WdError(v24, v21);
          *(_QWORD *)(v87 + 24) = -1073741811LL;
        }
        else
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v86[3] = *((unsigned int *)a1 + 4);
          v86[4] = v8;
          v86[5] = (unsigned int)PsGetCurrentProcessSessionId();
          v87 = (__int64)v86;
          v86[6] = -1073741811LL;
        }
        WdLogEvent5_WdError(v87);
        LODWORD(v19) = -1073741811;
      }
      LODWORD(v7) = v19;
      goto LABEL_67;
    }
    v81 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v81 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v80 = v81;
    *(_QWORD *)(v81 + 32) = -1073741811LL;
  }
  else
  {
    v80 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v80 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v80);
  return 3221225485LL;
}
