/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18002DD08
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEAH@Z @ 0x180024B50 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000D298 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18002E57C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        char a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        int *a7)
{
  __int64 v9; // rsi
  const char *v11; // r9
  int *v12; // r14
  _QWORD *v13; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rsi
  int v17; // r15d
  __int64 v18; // rax
  __int64 result; // rax
  int v20; // r13d
  volatile signed __int32 *v21; // rbx
  _QWORD *v22; // rdx
  volatile signed __int32 *v23; // rbx
  signed __int32 v24; // eax
  float v25; // xmm1_4
  volatile signed __int32 *v26; // rcx
  _QWORD *v27; // rbx
  volatile signed __int32 *v28; // rcx
  volatile signed __int32 *v29; // r8
  bool i; // zf
  signed __int32 v31; // eax
  _QWORD *v32; // rsi
  volatile signed __int32 *v33; // rcx
  _QWORD *v34; // rax
  int v35; // r15d
  __int64 v36; // rcx
  volatile signed __int32 *v37; // rax
  int v38; // esi
  volatile signed __int32 *v39; // rbx
  _QWORD *v40; // r8
  signed __int32 v41; // eax
  _QWORD *v42; // rbx
  _QWORD *v43; // rdx
  void *v44; // rsi
  volatile signed __int32 *v45; // rcx
  char *v46; // [rsp+28h] [rbp-90h]
  volatile signed __int32 *v47; // [rsp+40h] [rbp-78h] BYREF
  volatile signed __int32 *v48; // [rsp+48h] [rbp-70h] BYREF
  void *v49; // [rsp+50h] [rbp-68h] BYREF
  void *v50; // [rsp+58h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+60h] [rbp-58h]
  _DWORD *v52; // [rsp+68h] [rbp-50h] BYREF
  volatile signed __int32 *v53; // [rsp+70h] [rbp-48h]
  __int64 v54; // [rsp+78h] [rbp-40h] BYREF
  volatile signed __int32 *v55; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  volatile signed __int32 *v57; // [rsp+C0h] [rbp+8h]

  v9 = a2;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    lpCriticalSectiona = lpCriticalSection;
    v12 = a7;
    *a7 = 0;
    v13 = (PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo + 8 * v9 + (a3 != 0 ? 208LL : 40LL));
    if ( a6 )
    {
      if ( !a5 )
      {
        ProcessHeap = GetProcessHeap();
        v15 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
        v16 = v15;
        v17 = 1;
        if ( v15 )
        {
          v15[2] = 1;
          v15[3] = 1;
          *(_QWORD *)v15 = &std::_Ref_count_obj<DeactivatableDuckingDescriptor>::`vftable';
          *((_QWORD *)v15 + 2) = &DeactivatableDuckingDescriptor::`vftable';
          *((_QWORD *)v15 + 3) = 0LL;
          *((_QWORD *)v15 + 4) = 0LL;
          v18 = a4[1];
          if ( v18 )
            _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
          *((_QWORD *)v16 + 3) = *a4;
          *((_QWORD *)v16 + 4) = a4[1];
          *((_QWORD *)v16 + 5) = a6;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
        }
        else
        {
          v16 = 0LL;
        }
        if ( v16 == (_DWORD *)-16LL )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5E,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)0x8007000ELL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFFFFFFFFFFFF8LL, 0xFFFFFFFF) == 1 )
          {
            ((void (__fastcall *)(__int64))*MEMORY[0xFFFFFFFFFFFFFFF0])(-16LL);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFFFFFFFFFFFFCLL, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(__int64))(MEMORY[0xFFFFFFFFFFFFFFF0] + 8LL))(-16LL);
          }
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return 2147942414LL;
        }
        v49 = &StreamClassVolumePolicyGuid;
        if ( v16 )
          _InterlockedAdd(v16 + 2, 1u);
        v52 = v16 + 4;
        v53 = v16;
        v47 = 0LL;
        v20 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
                &v47,
                (__int64 *)&v49,
                (__int64 *)&v52);
        if ( v53 )
        {
          if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
          {
            v21 = v53;
            (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          }
        }
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x61,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)(unsigned int)v20);
          if ( v47 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v47);
          if ( v16 )
          {
            if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(_DWORD *))v16)(v16);
              if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
            }
          }
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v20;
        }
        v22 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
        v23 = v47;
        v22[1] = v47;
        if ( v23 )
        {
          do
            v24 = *((_DWORD *)v23 + 13);
          while ( v24 != 0x7FFFFFFF && v24 != _InterlockedCompareExchange(v23 + 13, v24 + 1, v24) );
          v23 = v47;
        }
        *v22 = *v13;
        *v13 = v22;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 5) + 24LL))(*((_QWORD *)v16 + 5)) )
          v25 = *(float *)(*((_QWORD *)v16 + 3) + 8LL);
        else
          v25 = 0.0;
        if ( v25 == 0.0 )
          v17 = 0;
        *a7 = v17;
        if ( v23 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v23);
        if ( v16 )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(_DWORD *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
          }
        }
        goto LABEL_108;
      }
      v26 = 0LL;
      v57 = 0LL;
      v27 = (_QWORD *)*v13;
      while ( v27 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v27[1] + 56LL) + 24LL))(*(_QWORD *)(v27[1] + 56LL)) == a6 )
        {
          v28 = v57;
          v29 = (volatile signed __int32 *)v27[1];
          v57 = v29;
          for ( i = v29 == 0LL; !i; i = v31 == _InterlockedCompareExchange(v29 + 13, v31 + 1, v31) )
          {
            v31 = *((_DWORD *)v29 + 13);
            if ( v31 == 0x7FFFFFFF )
              break;
          }
          if ( v28 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v28);
          v27 = (_QWORD *)*v13;
          if ( *v13 )
          {
            v32 = (_QWORD *)*v13;
            v27 = (_QWORD *)*v27;
            *v13 = v27;
            v33 = (volatile signed __int32 *)v32[1];
            if ( v33 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v33);
            operator delete(v32, (const struct std::nothrow_t *)0x10);
          }
        }
        else
        {
          v13 = (_QWORD *)*v13;
          v27 = (_QWORD *)*v27;
        }
        v26 = v57;
      }
      if ( v26 )
      {
        *a7 = (***((float (__fastcall ****)(_QWORD))v26 + 7))(*((_QWORD *)v26 + 7)) != 0.0;
        v26 = v57;
      }
      goto LABEL_94;
    }
    v34 = (_QWORD *)*v13;
    if ( *v13 )
    {
      do
      {
        if ( *a4 == *(_QWORD *)(v34[1] + 56LL) )
          break;
        v34 = (_QWORD *)*v34;
      }
      while ( v34 );
    }
    if ( a5 )
    {
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34[1] + 36LL), 0xFFFFFFFF) == 1 )
        {
          v42 = (_QWORD *)*v13;
          while ( v42 )
          {
            v43 = (_QWORD *)*v13;
            if ( *a4 == *(_QWORD *)(v42[1] + 56LL) )
            {
              v42 = (_QWORD *)*v13;
              if ( v43 )
              {
                v44 = (void *)*v13;
                v42 = (_QWORD *)*v43;
                *v13 = *v43;
                v45 = (volatile signed __int32 *)v43[1];
                if ( v45 )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v45);
                operator delete(v44, (const struct std::nothrow_t *)0x10);
              }
            }
            else
            {
              v13 = (_QWORD *)*v13;
              v42 = (_QWORD *)*v42;
            }
          }
          *a7 = *(float *)(*a4 + 8) != 0.0;
        }
      }
      else
      {
        LODWORD(v46) = v9;
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0xA9,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
          (const char *)0x8000FFFFLL,
          (int)"Category = %d, DescriptorGain = %f",
          v46,
          *(float *)(*a4 + 8));
      }
      goto LABEL_108;
    }
    v35 = 1;
    if ( v34 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v34[1] + 36LL), 1u);
LABEL_108:
      if ( lpCriticalSectiona )
        LeaveCriticalSection(lpCriticalSectiona);
      return 0LL;
    }
    v50 = &StreamClassVolumePolicyGuid;
    v36 = *a4;
    v37 = (volatile signed __int32 *)a4[1];
    if ( v37 )
    {
      _InterlockedAdd(v37 + 2, 1u);
      v37 = (volatile signed __int32 *)a4[1];
    }
    v54 = v36;
    v55 = v37;
    v48 = 0LL;
    v38 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
            &v48,
            (__int64 *)&v50,
            &v54);
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        v39 = v55;
        (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
      }
      v12 = a7;
    }
    if ( v38 >= 0 )
    {
      v40 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v26 = v48;
      v40[1] = v48;
      if ( v26 )
      {
        do
          v41 = *((_DWORD *)v26 + 13);
        while ( v41 != 0x7FFFFFFF && v41 != _InterlockedCompareExchange(v26 + 13, v41 + 1, v41) );
        v26 = v48;
      }
      *v40 = *v13;
      *v13 = v40;
      if ( *(float *)(*a4 + 8) == 0.0 )
        v35 = 0;
      *v12 = v35;
LABEL_94:
      if ( v26 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v26);
      goto LABEL_108;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)(unsigned int)v38);
    if ( v48 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v48);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v38;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB0,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                           v11);
  }
  return result;
}
