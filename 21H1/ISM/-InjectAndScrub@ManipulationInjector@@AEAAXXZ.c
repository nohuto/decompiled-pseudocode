/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C2CB4
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C25FC (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800C2680 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C34B8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C355C (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C35F4 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C39C8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C3D94 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008CFA4 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800C2584 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  unsigned int v7; // r11d
  __int64 v8; // rdx
  int v9; // r14d
  int v10; // esi
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rax
  __int128 v14; // xmm1
  unsigned __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // ecx
  void (__fastcall ***v25)(_QWORD, __int64, _DWORD *); // rcx
  unsigned int j; // r8d
  __int64 v27; // r10
  char *v28; // rcx
  __int64 v29; // rcx
  _OWORD *v30; // r8
  __int64 v31; // r10
  _OWORD *v32; // r9
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  DWORD v41; // eax
  const char *v42; // r9
  unsigned int v43; // r12d
  __int16 v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int16 v47; // r11
  int v48; // r10d
  char v49; // al
  int v50; // r13d
  int v51; // esi
  int v52; // r14d
  struct tagPOINT v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  DWORD v56; // eax
  DWORD LastError; // eax
  __int64 v58; // [rsp+38h] [rbp-D0h]
  __int64 v59; // [rsp+38h] [rbp-D0h]
  int v60; // [rsp+40h] [rbp-C8h]
  int v61; // [rsp+48h] [rbp-C0h]
  __int64 v62; // [rsp+50h] [rbp-B8h]
  int v63; // [rsp+58h] [rbp-B0h]
  __int64 v64; // [rsp+60h] [rbp-A8h]
  int v65; // [rsp+68h] [rbp-A0h]
  __int64 v66; // [rsp+70h] [rbp-98h]
  int v67; // [rsp+78h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-88h]
  int v69; // [rsp+88h] [rbp-80h]
  __int64 v70; // [rsp+90h] [rbp-78h]
  int v71; // [rsp+98h] [rbp-70h]
  int v72; // [rsp+A8h] [rbp-60h]
  __int64 v73; // [rsp+B0h] [rbp-58h]
  int v74; // [rsp+B8h] [rbp-50h]
  __int64 v75; // [rsp+C0h] [rbp-48h]
  int v76; // [rsp+C8h] [rbp-40h]
  int v77; // [rsp+D8h] [rbp-30h]
  struct tagPOINT v78; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v79[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v80[70]; // [rsp+F4h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v4 = 0LL;
  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  if ( *(_DWORD *)this == 1 )
  {
    if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
    {
      LastError = GetLastError();
      if ( LastError )
      {
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          900LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)LastError);
        __debugbreak();
      }
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
    {
      if ( *(_DWORD *)this == 3 )
      {
        v29 = *((unsigned int *)this + 12);
        if ( (_DWORD)v29 )
        {
          v30 = v79;
          v31 = (unsigned int)v29;
          v32 = (_OWORD *)((char *)this + 112);
          do
          {
            v33 = v32[1];
            *v30 = *v32;
            v34 = v32[2];
            v30[1] = v33;
            v35 = v32[3];
            v30[2] = v34;
            v36 = v32[4];
            v30[3] = v35;
            v37 = v32[5];
            v30[4] = v36;
            v38 = v32[6];
            v30[5] = v37;
            v39 = v32[7];
            v30[6] = v38;
            v40 = v32[8];
            v32 = (_OWORD *)((char *)v32 + 152);
            v30[7] = v39;
            v30[8] = v40;
            v30 += 9;
            --v31;
          }
          while ( v31 );
        }
        if ( !(unsigned int)InjectTouchInput(v29, v79) )
        {
          v41 = GetLastError();
          if ( v41 )
          {
            wil::details::in1diag3::_FailFast_Win32(
              retaddr,
              971LL,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              (const char *)v41);
            __debugbreak();
          }
        }
      }
      else
      {
        if ( *(_DWORD *)this != 4 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            1020LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            a4);
          __debugbreak();
        }
        ++*((_DWORD *)this + 200);
        v7 = 0;
        v8 = *((unsigned int *)this + 12);
        v9 = *((_DWORD *)this + 200);
        v10 = *((_DWORD *)this + 201);
        if ( (_DWORD)v8 )
        {
          do
          {
            v11 = v7;
            v12 = 152LL * v7;
            v13 = *(_QWORD *)((char *)this + v12 + 144);
            if ( v10 )
            {
              *(_DWORD *)((char *)this + v12 + 216) = v13 - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 224) = v13 + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 220) = HIDWORD(v13) - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 228) = HIDWORD(v13) + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 232) = v13 - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 240) = v13 + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 236) = HIDWORD(v13) - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 244) = HIDWORD(v13) + *((_DWORD *)this + 201);
              LODWORD(v80[18 * v7 + 11]) |= 1u;
            }
            v14 = *(_OWORD *)((char *)this + v12 + 128);
            v15 = 144LL * v7;
            v16 = &v79[v15 / 4];
            *v16 = *(_OWORD *)((char *)this + v12 + 112);
            v17 = *(_OWORD *)((char *)this + v12 + 144);
            v16[1] = v14;
            v18 = *(_OWORD *)((char *)this + v12 + 160);
            v16[2] = v17;
            v19 = *(_OWORD *)((char *)this + v12 + 176);
            v16[3] = v18;
            v20 = *(_OWORD *)((char *)this + v12 + 192);
            v16[4] = v19;
            v21 = *(_OWORD *)((char *)this + v12 + 208);
            v16[5] = v20;
            v22 = *(_OWORD *)((char *)this + v12 + 224);
            v16[6] = v21;
            v23 = *(_OWORD *)((char *)this + v12 + 240);
            v16[7] = v22;
            v16[8] = v23;
            v24 = v80[v15 / 8];
            v79[v15 / 4 + 2] = v9;
            LODWORD(v80[v15 / 8]) = v24 | 0x4000;
            if ( (v24 & 4) != 0 )
              LODWORD(v80[18 * v7]) = v24 | 0x4010;
            ++v7;
            *(_QWORD *)((char *)&v80[18 * v11 + 4] + 4) = *(_QWORD *)((char *)&v80[18 * v11 + 2] + 4);
            v8 = *((unsigned int *)this + 12);
          }
          while ( v7 < (unsigned int)v8 );
        }
        v25 = (void (__fastcall ***)(_QWORD, __int64, _DWORD *))*((_QWORD *)this + 99);
        LODWORD(v80[0]) |= 0x2000u;
        (**v25)(v25, v8, v79);
      }
      goto LABEL_15;
    }
    v42 = (const char *)*((unsigned int *)this + 12);
    v43 = 10 * (_DWORD)v42 + 1;
    if ( (unsigned int)((_DWORD)v42 - 1) > 3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        909LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v42);
      __debugbreak();
    }
    if ( (_DWORD)v42 )
    {
      v44 = 1;
      while ( 1 )
      {
        v45 = (unsigned __int16)(v44 - 1);
        v46 = 152 * v45;
        v47 = 10 * v45;
        if ( (*((_BYTE *)this + 152 * v45 + 124) & 4) != 0 )
          break;
        v48 = 0;
        v49 = 0;
        if ( (*((_BYTE *)this + v46 + 124) & 2) == 0 )
          goto LABEL_34;
LABEL_35:
        if ( !v49 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            917LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v42);
          JUMPOUT(0x1800C34AFLL);
        }
        v50 = 100 * v48;
        v61 = *(_DWORD *)((char *)this + v46 + 116);
        v51 = v48 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
        v52 = v48 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
        if ( *((_DWORD *)this + 22) == 1 )
          v53 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                         this,
                                         (struct tagPOINT)&v78,
                                         *(_QWORD *)((char *)this + v46 + 144));
        else
          v53 = *(struct tagPOINT *)((char *)this + v46 + 152);
        HIDWORD(v62) = v53.x;
        HIDWORD(v64) = v53.y;
        HIDWORD(v70) = v50;
        LODWORD(v62) = 3145729;
        v54 = 3LL * v47;
        *(_QWORD *)&v79[v54] = v62;
        LOWORD(v63) = v44;
        v79[v54 + 2] = v63;
        LODWORD(v64) = 3211265;
        *(_QWORD *)((char *)v80 + 4 * v54) = v64;
        LOWORD(v65) = v44;
        *((_DWORD *)&v80[1] + v54) = v65;
        LODWORD(v66) = 4325389;
        HIDWORD(v66) = v48;
        *(_QWORD *)((char *)&v80[1] + 4 * v54 + 4) = v66;
        LOWORD(v67) = v44;
        *((_DWORD *)&v80[2] + v54 + 1) = v67;
        LODWORD(v68) = 3276813;
        HIDWORD(v68) = v48;
        *(_QWORD *)((char *)&v80[3] + 4 * v54) = v68;
        LOWORD(v69) = v44;
        *((_DWORD *)&v80[4] + v54) = v69;
        LODWORD(v70) = 3145741;
        *(_QWORD *)((char *)&v80[4] + 4 * v54 + 4) = v70;
        LOWORD(v71) = v44;
        *((_DWORD *)&v80[5] + v54 + 1) = v71;
        *(_QWORD *)((char *)&v80[6] + 4 * v54) = 0x10047000DLL;
        LOWORD(v72) = v44;
        *((_DWORD *)&v80[7] + v54) = v72;
        LODWORD(v73) = 4718605;
        HIDWORD(v73) = v51;
        *(_QWORD *)((char *)&v80[7] + 4 * v54 + 4) = v73;
        LOWORD(v74) = v44;
        *((_DWORD *)&v80[8] + v54 + 1) = v74;
        LODWORD(v75) = 4784141;
        HIDWORD(v75) = v52;
        *(_QWORD *)((char *)&v80[9] + 4 * v54) = v75;
        LOWORD(v76) = v44;
        *((_DWORD *)&v80[10] + v54) = v76;
        *(_QWORD *)((char *)&v80[10] + 4 * v54 + 4) = 4128781LL;
        LOWORD(v77) = v44;
        *((_DWORD *)&v80[11] + v54 + 1) = v77;
        HIDWORD(v58) = v61;
        LODWORD(v58) = 5308429;
        LOWORD(v60) = v44++;
        *(_QWORD *)((char *)&v80[12] + 4 * v54) = v58;
        *((_DWORD *)&v80[13] + v54) = v60;
        if ( (unsigned __int16)(v44 - 1) >= (unsigned int)v42 )
          goto LABEL_40;
      }
      v48 = 1;
LABEL_34:
      v49 = 1;
      goto LABEL_35;
    }
LABEL_40:
    HIDWORD(v59) = (unsigned __int16)v42;
    LODWORD(v59) = 5505037;
    LOWORD(v60) = 0;
    v55 = 3LL * (unsigned __int16)(10 * (_WORD)v42);
    *(_QWORD *)&v79[v55] = v59;
    v79[v55 + 2] = v60;
    if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v79, v43) )
    {
      v56 = GetLastError();
      if ( v56 )
      {
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          955LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)v56);
        __debugbreak();
      }
    }
  }
LABEL_15:
  for ( j = 0; j < *((_DWORD *)this + 12); ++j )
  {
    v27 = 152LL * j;
    if ( (*(_DWORD *)((_BYTE *)this + v27 + 124) & 0xFFFBFFFF) != 0 )
    {
      if ( j != (_DWORD)v4 )
      {
        v28 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v28 + 104) = *(_OWORD *)((char *)this + v27 + 104);
        *(_OWORD *)(v28 + 120) = *(_OWORD *)((char *)this + v27 + 120);
        *(_OWORD *)(v28 + 136) = *(_OWORD *)((char *)this + v27 + 136);
        *(_OWORD *)(v28 + 152) = *(_OWORD *)((char *)this + v27 + 152);
        *(_OWORD *)(v28 + 168) = *(_OWORD *)((char *)this + v27 + 168);
        *(_OWORD *)(v28 + 184) = *(_OWORD *)((char *)this + v27 + 184);
        *(_OWORD *)(v28 + 200) = *(_OWORD *)((char *)this + v27 + 200);
        *(_OWORD *)(v28 + 216) = *(_OWORD *)((char *)this + v27 + 216);
        *(_OWORD *)(v28 + 232) = *(_OWORD *)((char *)this + v27 + 232);
        *((_QWORD *)v28 + 31) = *(_QWORD *)((char *)this + v27 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + j + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  *((_DWORD *)this + 12) = v4;
}
