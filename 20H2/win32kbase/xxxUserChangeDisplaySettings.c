/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0069850
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C00B33E0 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0069EE4 (_xxxUserChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C012263C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333@Z @ 0x1C0122840 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        _WORD *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  _OWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _devicemodeW *v12; // r9
  __int64 v13; // rdi
  size_t v14; // rbx
  PCUNICODE_STRING v15; // rcx
  const void *v16; // rdx
  size_t v17; // rdi
  ULONG64 v18; // rcx
  void *v19; // rdi
  unsigned int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  BOOL v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rdx
  _WORD *v31; // rcx
  char *v32; // r8
  __int16 v33; // ax
  _WORD *v34; // rax
  __int64 v35; // rsi
  unsigned int v36; // r8d
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // r9d
  unsigned int v41; // ebx
  unsigned __int16 v42; // [rsp+74h] [rbp-134h]
  PCUNICODE_STRING String1[2]; // [rsp+80h] [rbp-128h] BYREF
  __int128 v45; // [rsp+90h] [rbp-118h]
  struct _devicemodeW *v46; // [rsp+A0h] [rbp-108h]
  __int128 v47; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-F0h]
  struct tagTHREADINFO *v49; // [rsp+C0h] [rbp-E8h]
  unsigned int v50; // [rsp+D0h] [rbp-D8h]
  unsigned int v51; // [rsp+D4h] [rbp-D4h]
  BOOL v52; // [rsp+D8h] [rbp-D0h]
  int v53; // [rsp+DCh] [rbp-CCh] BYREF
  int v54; // [rsp+E0h] [rbp-C8h] BYREF
  int v55; // [rsp+E4h] [rbp-C4h] BYREF
  int v56; // [rsp+E8h] [rbp-C0h] BYREF
  int v57; // [rsp+ECh] [rbp-BCh] BYREF
  int v58; // [rsp+F0h] [rbp-B8h] BYREF
  int v59; // [rsp+F4h] [rbp-B4h] BYREF
  int v60; // [rsp+F8h] [rbp-B0h] BYREF
  int v61; // [rsp+FCh] [rbp-ACh] BYREF
  int v62; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+108h] [rbp-A0h]
  __int64 v64; // [rsp+110h] [rbp-98h]
  _OWORD *v65; // [rsp+118h] [rbp-90h]
  void *v66; // [rsp+120h] [rbp-88h]
  __int64 v67; // [rsp+128h] [rbp-80h]
  __int64 v68; // [rsp+130h] [rbp-78h]
  __int64 v69; // [rsp+138h] [rbp-70h]
  __int64 v70; // [rsp+140h] [rbp-68h]
  void *Src[2]; // [rsp+148h] [rbp-60h]
  GUID ActivityId; // [rsp+158h] [rbp-50h] BYREF

  v9 = a1;
  v65 = a1;
  v66 = a5;
  ActivityId = 0LL;
  v64 = MEMORY[0xFFFFF78000000320];
  v63 = v64 * KeQueryTimeIncrement();
  *(_OWORD *)String1 = 0LL;
  v45 = 0LL;
  v12 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = gptiCurrent;
  if ( v9 )
  {
    *(_OWORD *)Src = *v9;
    v13 = LOWORD(Src[0]);
    v14 = LOWORD(Src[0]);
    v15 = (PCUNICODE_STRING)Win32AllocPoolWithQuota(LOWORD(Src[0]) + 18LL, 0x73726447u);
    String1[0] = v15;
    v12 = 0LL;
    if ( !v15 )
      goto LABEL_54;
    if ( qword_1C024FEC0 )
    {
      qword_1C024FEC0(v15, &String1[1], Win32FreePool);
      v15 = String1[0];
      v12 = 0LL;
    }
    v15->Buffer = &v15[1].Length;
    String1[0]->Length = v13;
    String1[0]->MaximumLength = v13 + 2;
    if ( (_WORD)v13 )
    {
      v16 = Src[1];
      if ( (char *)Src[1] + v13 > (void *)MmUserProbeAddress || (char *)Src[1] + v13 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(String1[0]->Buffer, v16, v14);
      v12 = 0LL;
    }
    String1[0]->Buffer[v14 >> 1] = 0;
  }
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v42 = a2[34];
    v17 = (unsigned __int16)a2[35];
    if ( (unsigned __int16)(v42 - 188) > 0x20u )
    {
      v41 = -2;
LABEL_55:
      xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1, v10, v11, v12);
      return v41;
    }
    v12 = (struct _devicemodeW *)Win32AllocPoolWithQuota(v17 + 220, 0x73726447u);
    v46 = v12;
    v11 = 0LL;
    if ( v12 )
    {
      if ( qword_1C024FEC0 )
      {
        qword_1C024FEC0(v12, &v47, Win32FreePool);
        v12 = v46;
      }
      if ( v42 + (_DWORD)v17 )
      {
        v18 = (ULONG64)a2 + v42 + (unsigned int)v17;
        if ( v18 > MmUserProbeAddress || v18 < (unsigned __int64)a2 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v12 = v46;
        }
      }
      memmove(v12, a2, v42);
      memmove(&v46[1], (char *)a2 + v42, v17);
      v46->dmSize = 220;
      v46->dmDriverExtra = v17;
      v9 = v65;
      goto LABEL_23;
    }
LABEL_54:
    v41 = -1;
    goto LABEL_55;
  }
LABEL_23:
  v19 = v66;
  v20 = xxxUserChangeDisplaySettingsInternal(String1[0], v46, a3, a4, v66, a6, a7);
  v21 = Win32AllocPoolZInit(0x90uLL);
  v25 = v21;
  if ( v21 )
  {
    *(_DWORD *)v21 = 4;
    *(_DWORD *)(v21 + 4) = 144;
    *(_DWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 32) = 0LL;
    v26 = 0;
    *(_OWORD *)(v25 + 8) = 0LL;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 56) = v63;
    if ( a2 )
      v26 = v46 != 0LL;
    v27 = v26 | *(_DWORD *)(v25 + 140) & 0xFFFFFFFE;
    *(_DWORD *)(v25 + 140) = v27;
    if ( !v9 || !String1[0] || !String1[0]->Length || (v28 = 2, !String1[0]->Buffer) )
      v28 = 0;
    v29 = (v19 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v28 & 0xFFFFFFF3 | v27 & 0xFFFFFFF1;
    *(_DWORD *)(v25 + 140) = v29;
    *(_DWORD *)(v25 + 48) = a4;
    *(_DWORD *)(v25 + 52) = v20;
    if ( (v29 & 2) != 0 )
    {
      v30 = 16LL;
      v31 = (_WORD *)(v25 + 108);
      v32 = (char *)String1[0]->Buffer - v25 - 108;
      do
      {
        if ( v30 == -2147483630 )
          break;
        v33 = *(_WORD *)&v32[(_QWORD)v31];
        if ( !v33 )
          break;
        *v31++ = v33;
        --v30;
      }
      while ( v30 );
      v34 = v31 - 1;
      if ( v30 )
        v34 = v31;
      *v34 = 0;
      if ( !v30 )
        *(_WORD *)(v25 + 108) = 0;
    }
    if ( (*(_DWORD *)(v25 + 140) & 1) != 0 && v46->dmSize >= 0xB4u )
    {
      *(_DWORD *)(v25 + 64) = v46->dmFields;
      *(_QWORD *)(v25 + 68) = *(_QWORD *)&v46->dmOrientation;
      *(_DWORD *)(v25 + 76) = v46->dmBitsPerPel;
      *(_DWORD *)(v25 + 80) = v46->dmPelsWidth;
      *(_DWORD *)(v25 + 84) = v46->dmPelsHeight;
      *(_DWORD *)(v25 + 88) = v46->dmDisplayFrequency;
      *(_DWORD *)(v25 + 92) = v46->dmDriverExtra;
      *(_DWORD *)(v25 + 96) = v46->dmDisplayOrientation;
      *(_DWORD *)(v25 + 100) = v46->dmDisplayFixedOutput;
      *(_DWORD *)(v25 + 104) = v46->dmDisplayFlags;
    }
    ((void (__fastcall *)(__int64))qword_1C024A950)(v25);
    v67 = MEMORY[0xFFFFF78000000320];
    v35 = v67 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v36 = dword_1C023F378;
    if ( (unsigned int)dword_1C023F378 > 5 && tlgKeywordOn((__int64)&dword_1C023F378, 0x200000000004LL) )
    {
      v68 = v35;
      v69 = v63;
      v50 = v20;
      v51 = a4;
      v52 = a2 == 0LL;
      v70 = v25 + 108;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v37,
        &unk_1C02125C2,
        &ActivityId);
      v36 = dword_1C023F378;
    }
    if ( (*(_DWORD *)(v25 + 140) & 1) != 0 && v36 > 5 && tlgKeywordOn((__int64)&dword_1C023F378, 0x200000000004LL) )
    {
      v53 = *(_DWORD *)(v25 + 104);
      v54 = *(_DWORD *)(v25 + 100);
      v55 = *(_DWORD *)(v25 + 96);
      v56 = *(_DWORD *)(v25 + 92);
      v57 = *(_DWORD *)(v25 + 88);
      v58 = *(_DWORD *)(v25 + 84);
      v59 = *(_DWORD *)(v25 + 80);
      v60 = *(_DWORD *)(v25 + 72);
      v61 = *(_DWORD *)(v25 + 68);
      v62 = *(_DWORD *)(v25 + 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v38,
        (unsigned int)&unk_1C0212535,
        (unsigned int)&ActivityId,
        v39,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53);
    }
    Win32FreePool(v25);
  }
  xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1, v22, v23, v24);
  return v20;
}
