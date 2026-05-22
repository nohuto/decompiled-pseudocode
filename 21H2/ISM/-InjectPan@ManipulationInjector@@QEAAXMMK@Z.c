/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C3504
 * Callers:
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040D64 (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007BEAC (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C3504 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x1801201D0 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C1EF4 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C2208 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C2260 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800C230C (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C2BC4 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C3504 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C3B20 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z @ 0x1800C3B6C (-RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800C4120 (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800C4180 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, unsigned int a4)
{
  ManipulationInjector *v6; // rcx
  char v7; // r14
  int v8; // eax
  float v9; // xmm3_4
  float v10; // xmm4_4
  ManipulationInjector *v11; // rcx
  LONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  bool v16; // zf
  struct tagRECT *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r9
  int v22; // ecx
  int v23; // ecx
  struct tagRECT *v24; // r9
  struct tagPOINT v25; // rbx
  const char *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  const char *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  const char *v32; // r9
  struct tagRECT v33; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v34; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( ManipulationInjector::IsInContactForDeviceId(this, a4) )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 22) != 1 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        536LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    if ( !*((_BYTE *)this + 740) )
    {
      v6 = (ManipulationInjector *)*((unsigned int *)this + 184);
      if ( (int)v6 > 0 )
      {
        *((_BYTE *)this + 740) = 1;
        v8 = -(int)v6;
        v9 = 0.0;
        v10 = 0.0;
        if ( COERCE_FLOAT(LODWORD(a2) & _xmm) <= COERCE_FLOAT(LODWORD(a3) & _xmm) )
        {
          if ( a3 >= 0.0 )
            v8 = (int)v6;
          v10 = (float)v8;
        }
        else
        {
          if ( a2 >= 0.0 )
            v8 = (int)v6;
          v9 = (float)v8;
        }
        ManipulationInjector::InjectPan(this, v9, v10, a4);
      }
    }
    if ( *((_BYTE *)this + 13) )
      DbgPrint(
        "Pan Delta: (%d.%03d, %d.%03d)\n",
        (int)a2,
        (int)(float)(a2 * 1000.0) - 1000 * (int)a2,
        (int)a3,
        (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
    v33.left = ManipulationInjector::RoundSubPixelToPixel(v6, a2);
    v12 = ManipulationInjector::RoundSubPixelToPixel(v11, a3);
    v16 = *((_DWORD *)this + 1) == 2;
    v33.top = v12;
    v17 = *(struct tagRECT **)&v33.left;
    if ( !v16 || (v18 = 2, !*((_DWORD *)this + 10)) )
    {
      if ( *((_DWORD *)this + 12) != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          570LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v15);
        __debugbreak();
      }
      ManipulationInjector::UpdatePanContact(this, 0, *(struct tagPOINT *)&v33.left);
      v33 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v33, 0);
      v7 = ManipulationInjector::CheckOverlapAndEvent(this, v19, v20, v21);
      v18 = *((_DWORD *)this + 1);
      if ( v18 != 2 )
        goto LABEL_36;
    }
    if ( !*((_BYTE *)this + 12) )
    {
LABEL_36:
      if ( v7 )
      {
        if ( v18 == 1 && *((_BYTE *)this + 12) )
        {
          ManipulationInjector::AddContact(
            (struct tagPOINT *)this,
            *(struct tagPOINT *)((char *)this + 80),
            0,
            (const char *)a4);
          ManipulationInjector::InjectAndScrub(this, v27, v28, v29);
          *((_DWORD *)this + 31) = 0x40000;
          *((_DWORD *)this + 69) = 131078;
        }
        else
        {
          ManipulationInjector::InjectAndScrub(this, v13, v14, v15);
          *((_DWORD *)this + 31) = 0x40000;
          ManipulationInjector::InjectAndScrub(this, v30, v31, v32);
          ManipulationInjector::AddContact(
            (struct tagPOINT *)this,
            *(struct tagPOINT *)((char *)this + 80),
            0,
            (const char *)a4);
        }
      }
      goto LABEL_41;
    }
    v22 = *((_DWORD *)this + 10);
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        if ( *((_DWORD *)this + 12) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            589LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v15);
          __debugbreak();
        }
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        v24 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (struct tagRECT **)&v33,
                                       0LL,
                                       v17,
                                       &v34.left);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        v25 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (struct tagRECT **)&v33,
                                       (struct tagPOINT)1LL,
                                       v24,
                                       &v34.left);
        ManipulationInjector::UpdatePanContact(this, 0, v25);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v34, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            596LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v26);
          __debugbreak();
        }
        ManipulationInjector::UpdatePanContact(this, 1u, v25);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v34, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            600LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v15);
          __debugbreak();
        }
        *((_DWORD *)this + 10) = 2;
        goto LABEL_41;
      }
      if ( v23 != 1 )
        return;
      if ( *((_DWORD *)this + 12) != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          609LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v15);
        __debugbreak();
      }
      *((_DWORD *)this + 31) = 0x40000;
      ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v17);
      v33 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v33, 0);
    }
    ManipulationInjector::UpdatePanOverlapState(this);
LABEL_41:
    ManipulationInjector::InjectAndScrub(this, v13, v14, v15);
  }
}
