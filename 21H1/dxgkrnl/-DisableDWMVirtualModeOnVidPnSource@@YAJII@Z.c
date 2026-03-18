/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C015FDEC
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0130440 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0011A10 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00E8F0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00E8F7C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EB9E8 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C012F300 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0130398 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01318E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C013304C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C015A070 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0160100 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C029B764 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int16 v16; // bx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int Active; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // edi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // r9d
  unsigned int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v42; // [rsp+40h] [rbp-C8h] BYREF
  struct DXGDEVICE *v43; // [rsp+48h] [rbp-C0h] BYREF
  struct _LUID v44; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v45[2]; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v46[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v47; // [rsp+78h] [rbp-90h]
  _BYTE v48[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-40h]
  _BYTE v50[432]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v51[10]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v52[8]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v53[64]; // [rsp+2F0h] [rbp+1E8h] BYREF
  _BYTE v54[88]; // [rsp+330h] [rbp+228h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v7 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v42 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, (unsigned int)v3, Current, &v42);
    v10 = (__int64)v42;
    if ( v42 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v42);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46, (struct _KTHREAD **)(v10 + 144), 0);
      DXGPUSHLOCK::AcquireExclusive(v46[1]);
      v47 = 2;
      v13 = *(_QWORD *)(v10 + 1848);
      if ( v13 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v50,
          *(struct ADAPTER_DISPLAY **)(v13 + 2672),
          v7);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v50, v14);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v10, 1, v15, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireExclusive((__int64)v52, 2LL);
        if ( (int)v10 >= 0 )
        {
          v44 = *(struct _LUID *)(v13 + 316);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v52);
          v16 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v48, 8u, 0);
          for ( v41[0] = 8; ; v16 = v41[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v48, v16, v17, v18) < v16 )
            {
              v40 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
              *(_QWORD *)(v40 + 24) = v16;
              WdLogEvent5_WdLowResource(v40);
              LODWORD(v10) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v48, 0LL, 0, 0, v41);
            v10 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v26 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v48, &v44, v2);
          v10 = v26;
          if ( v26 < 0 )
            goto LABEL_32;
          v27 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v25, v24) )
            v27 = 0x20000;
          v28 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v48, v27, 0);
          v10 = v28;
          if ( v28 < 0
            || (memset(v51, 0, 0x48uLL),
                EtwActivityIdControl(3u, (LPGUID)&v51[1]),
                v51[8] = MEMORY[0xFFFFF78000000014],
                LODWORD(v51[3]) = 57,
                LOBYTE(v51[6]) = -1,
                v29 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v48,
                        v27,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v51),
                v10 = v29,
                v29 < 0) )
          {
LABEL_32:
            v39 = WdLogNewEntry5_WdError(v25, v24);
            *(_QWORD *)(v39 + 24) = v10;
            WdLogEvent5_WdError(v39);
          }
          else
          {
            v30 = *(_QWORD *)(v49 + 40);
            if ( v30 )
            {
              v31 = *(_DWORD *)(v49 + 36);
              v32 = 0;
              if ( v31 )
              {
                while ( 1 )
                {
                  v33 = 336LL * v32;
                  if ( *(_DWORD *)(v33 + v30 + 88) || *(_DWORD *)(v33 + v30 + 92) || *(_DWORD *)(v33 + v30 + 124) )
                    break;
                  if ( ++v32 >= v31 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v48);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v54);
        COREACCESS::~COREACCESS((COREACCESS *)v53);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v50, v34);
      }
      else
      {
        v38 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v38 + 24) = v3;
        WdLogEvent5_WdError(v38);
        LODWORD(v10) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
      if ( v45[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v37 + 24) = v3;
      WdLogEvent5_WdError(v37);
      LODWORD(v10) = -1073741811;
    }
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    }
    return (unsigned int)v10;
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v36 + 24) = 3310LL;
    WdLogEvent5_WdError(v36);
    return 3221225485LL;
  }
}
