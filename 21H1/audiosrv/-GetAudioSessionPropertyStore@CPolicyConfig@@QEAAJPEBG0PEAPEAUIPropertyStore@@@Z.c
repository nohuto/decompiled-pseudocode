/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x18002AC38
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180003444 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180028EA0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEBGAEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEBG1@Z @ 0x18002AB9C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEBGAEAPEBG@Details@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180047B78 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z @ 0x180052A78 (--$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180052CBC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CDF9C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800CEAAC (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IPropertyStore **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 *v10; // r15
  __int64 *j; // rsi
  __int64 *v12; // rsi
  const unsigned __int16 *v13; // r15
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 *i; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int (__fastcall ***v26)(_QWORD, _QWORD, _QWORD); // rcx
  int (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30[2]; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp+8h] BYREF
  const unsigned __int16 *v34; // [rsp+78h] [rbp+10h] BYREF
  const unsigned __int16 *v35; // [rsp+80h] [rbp+18h] BYREF
  __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  v35 = a3;
  v34 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v31 = v6;
  v8 = (__int64 *)*((_QWORD *)this + 8);
  v9 = (__int64 *)*((_QWORD *)this + 9);
  while ( v8 != v9 && !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v7, v8) )
    ++v8;
  if ( v8 != v9 )
  {
    for ( i = v8 + 1; i != v9; ++i )
    {
      if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v7, i) )
      {
        v23 = 0LL;
        if ( &v33 != (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))i )
        {
          v23 = *i;
          *i = 0LL;
        }
        v7 = *v8;
        *v8 = v23;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        ++v8;
      }
    }
  }
  v10 = (__int64 *)*((_QWORD *)this + 9);
  for ( j = v8; j != v10; ++j )
  {
    v24 = *j;
    if ( *j )
    {
      *j = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  *((_QWORD *)this + 9) = v8;
  *a4 = 0LL;
  v12 = (__int64 *)*((_QWORD *)this + 8);
  v13 = v34;
  while ( v12 != *((__int64 **)this + 9) )
  {
    v25 = *v12;
    *(_QWORD *)v30 = v25;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v33 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v30, &v33) >= 0 && v33 )
    {
      v36 = 0LL;
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v36);
      if ( (**v33)(v33, &GUID_e5f61c43_fc50_4785_bbe0_b5ee4f99ee0a, &v36) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v36 + 24LL))(v36, v13) )
      {
        (**(void (__fastcall ***)(__int64, GUID *, struct IPropertyStore **))v36)(
          v36,
          &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
          a4);
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v36);
        v26 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v26)[2])(v26);
        }
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        break;
      }
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v36);
    }
    v27 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v27)[2])(v27);
    }
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    ++v12;
  }
  if ( *a4 )
    goto LABEL_15;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
  v14 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionStore,IAudioSessionStore,unsigned short const * &,unsigned short const * &>(
          &v33,
          &v34,
          &v35);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -2147024891 || v14 == -2147024894 )
    {
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v14,
        v30[0]);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v15;
    }
  }
  else
  {
    v36 = 0LL;
    *(_QWORD *)v30 = &v36;
    v16 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v30);
    v17 = Microsoft::WRL::AsWeak<IAudioSessionStore>(v33, v16);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v19 = (_QWORD *)*((_QWORD *)this + 9);
      if ( *((_QWORD **)this + 10) == v19 )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
          (unsigned __int64 *)this + 8,
          v19,
          &v36);
      }
      else
      {
        v29 = v36;
        *v19 = v36;
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
        *((_QWORD *)this + 9) += 8LL;
      }
      (**v33)(v33, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, a4);
      v20 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
LABEL_15:
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v17,
      v30[0]);
    v28 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v18;
  }
}
