/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400427D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140043448 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::CreateStream(
        CSystemAudioDeviceExclusive *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  HRESULT v12; // eax
  __int64 v13; // rdx
  char *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  char *v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  int v21; // eax
  int v22; // eax
  GUID v23; // xmm0
  int v25; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = *(_OWORD *)((char *)this + 248);
  v29 = v28;
  EtwEventActivityIdControl(4LL, &v29);
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 276LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)v8);
    goto LABEL_54;
  }
  if ( a3 )
  {
    v9 = 277LL;
LABEL_52:
    v8 = -2147024809;
    goto LABEL_53;
  }
  v10 = *((_QWORD *)a2 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v10 )
  {
    v9 = 281LL;
    goto LABEL_52;
  }
  *((_DWORD *)a5 + 238) = 0;
  if ( *(_DWORD *)a2 > 2u )
  {
    v9 = 286LL;
    goto LABEL_52;
  }
  if ( *(_DWORD *)a2 == 2 || *((_DWORD *)a2 + 50) )
  {
    v9 = 291LL;
    goto LABEL_52;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 29);
  v26 = 0LL;
  v12 = (**v11)(v11, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, (__int64 *)&v26);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v12 = CoImpersonateClient();
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 298LL;
      goto LABEL_17;
    }
    v14 = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v15 = *((_QWORD *)a2 + 4);
    if ( (*((_DWORD *)this + 56) & 0x40000) != 0 )
    {
      if ( !v15 )
      {
        v8 = -2005139379;
        v16 = 315LL;
LABEL_45:
        v19 = v8;
        goto LABEL_46;
      }
      if ( v15 >= *((_QWORD *)this + 46) && v15 <= 50000000 )
      {
        if ( v15 != *((_QWORD *)a2 + 3) )
        {
          v8 = -2005139371;
          v16 = 321LL;
          goto LABEL_45;
        }
LABEL_31:
        v17 = v14;
        v14 = 0LL;
        v25 = *((_DWORD *)this + 94);
        v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), char *))(*v26)[6])(v26, v17);
        v8 = v18;
        if ( v18 >= 0 )
        {
          v20 = v26;
          v27 = 0LL;
          *((_DWORD *)a5 + 238) = 2;
          v21 = (**v20)(v20, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63, &v27);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0x4C5,
              (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
              (const char *)(unsigned int)v21,
              v25);
            __debugbreak();
          }
          if ( v27
            && (v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 64LL))(v27, (char *)a5 + 24),
                v8 = v22,
                v22 < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x169,
              (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
              (const char *)(unsigned int)v22);
          }
          else
          {
            if ( *(_DWORD *)a2 )
              v23 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
            else
              v23 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
            *(GUID *)a5 = v23;
            *((_DWORD *)a5 + 236) = 1;
            v8 = 0;
          }
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v27);
          goto LABEL_47;
        }
        v19 = (unsigned int)v18;
        v16 = 352LL;
LABEL_46:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
          (const char *)v19);
LABEL_47:
        if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v14);
        goto LABEL_49;
      }
      v16 = 318LL;
    }
    else
    {
      if ( !v15 || v15 >= *((_QWORD *)this + 46) && v15 <= 50000000 )
      {
        if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
        {
          v8 = -2005139379;
          v16 = 343LL;
          goto LABEL_45;
        }
        goto LABEL_31;
      }
      v16 = 336LL;
    }
    v8 = -2005139386;
    goto LABEL_45;
  }
  v13 = 296LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
    (const char *)(unsigned int)v12);
LABEL_49:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v26);
  if ( this != (CSystemAudioDeviceExclusive *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
LABEL_54:
  EtwEventActivityIdControl(4LL, &v29);
  return v8;
}
