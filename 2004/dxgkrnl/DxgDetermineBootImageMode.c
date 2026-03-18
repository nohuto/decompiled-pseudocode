/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C018D0E4
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0176540 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C0168B90 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C018D334 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 */

char __fastcall DxgDetermineBootImageMode(__int64 a1, __int64 *a2, char a3, _BYTE *a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v41; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v42; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v43; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v44; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v45[2]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v46; // [rsp+78h] [rbp-88h]
  _OWORD v47[2]; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+A0h] [rbp-60h]
  _OWORD v49[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v50; // [rsp+130h] [rbp+30h]
  WCHAR v51; // [rsp+134h] [rbp+34h]

  *(_QWORD *)&v42.Length = 8781956LL;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v49[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v49[1] = v4;
  v41 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_QWORD *)&v43.Length = 2228256LL;
  v49[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v49[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v49[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v49[5] = v12;
  v49[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v45[1] = *(_OWORD *)L"mageMode";
  v49[7] = v14;
  v50 = *(_DWORD *)L"rs";
  v51 = aRegistryMachin_8[66];
  v42.Buffer = (wchar_t *)v49;
  v46 = aCddbootimagemo[16];
  v43.Buffer = (wchar_t *)v45;
  v45[0] = *(_OWORD *)L"CddBootImageMode";
  v15 = ReadRegistryDwordKeyValue(&v42, &v43, &v41);
  if ( v15 >= 0 )
  {
    v19 = v41;
  }
  else
  {
    v48 = *(_DWORD *)L"e";
    v44.Buffer = (wchar_t *)v47;
    *(_QWORD *)&v44.Length = 2359330LL;
    v47[0] = *(_OWORD *)L"CddBootScreenMode";
    v47[1] = *(_OWORD *)L"creenMode";
    v15 = ReadRegistryDwordKeyValue(&v42, &v44, &v41);
    v19 = v41;
    if ( v15 < 0 )
      v19 = -1;
  }
  switch ( v19 )
  {
    case 0u:
      return v15;
    case 1u:
LABEL_8:
      if ( a3 )
      {
        *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 346) = 1;
        LOBYTE(v15) = DxgkSetBootAnimationRelayState(3LL, v36);
        if ( (_BYTE)v15 )
          goto LABEL_12;
        v39 = WdLogNewEntry5_WdAssertion(v38, v37);
        *(_QWORD *)(v39 + 24) = 5183LL;
      }
      else
      {
        if ( !a2 )
          return v15;
        if ( ((*(_DWORD *)(a1 + 12) - 20) & 0xFFFFFFFD) != 0 )
        {
          v33 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          v34 = *(int *)(a1 + 12);
          goto LABEL_22;
        }
        Global = DXGGLOBAL::GetGlobal(v17, v16);
        *(_OWORD *)((char *)Global + 1400) = *(_OWORD *)a1;
        *(_OWORD *)((char *)Global + 1416) = *(_OWORD *)(a1 + 16);
        v22 = *a2;
        *((_QWORD *)DXGGLOBAL::GetGlobal(v24, v23) + 174) = v22;
        v25 = a2[2];
        *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 187) = v25;
        *((_DWORD *)DXGGLOBAL::GetGlobal(v29, v28) + 346) = 1;
        LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL, v30);
        if ( (_BYTE)v15 )
        {
LABEL_12:
          *a4 = 1;
          return v15;
        }
        v39 = WdLogNewEntry5_WdAssertion(v32, v31);
        *(_QWORD *)(v39 + 24) = 5216LL;
      }
      LOBYTE(v15) = WdLogEvent5_WdAssertion(v39);
      goto LABEL_12;
    case 0xFFFFFFFF:
    case 2u:
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = 5170LL;
      LOBYTE(v15) = WdLogEvent5_WdWarning(v20);
      goto LABEL_8;
  }
  if ( v19 != 3 )
  {
    v33 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    v34 = v19;
LABEL_22:
    *(_QWORD *)(v33 + 24) = v34;
    LOBYTE(v15) = WdLogEvent5_WdWarning(v33);
    return v15;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 346) = 3;
  LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL, v35);
  return v15;
}
