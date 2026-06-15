/*
 * XREFs of ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180018A94
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180016160 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x18001DD20 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::NotifyVolumePolicyChange(CApplication *this)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  const char *v6; // r9
  _QWORD *v7; // r14
  char *v8; // rdi
  _QWORD *v9; // r8
  char *v10; // rbx
  char *i; // r14
  const struct std::nothrow_t *v12; // rdx
  char *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  char *v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v2 = 0LL;
  v16 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v7 = (_QWORD *)*((_QWORD *)this + 15);
  try
  {
LABEL_2:
    v8 = (char *)*((_QWORD *)&v15 + 1);
    while ( v7 )
    {
      v9 = v7;
      v7 = (_QWORD *)*v7;
      v5 = v9 + 2;
      if ( v2 == v8 )
      {
        std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
          &v15,
          v8,
          v5);
        v2 = v16;
        goto LABEL_2;
      }
      *(_QWORD *)v8 = *v5;
      v8 += 8;
      *((_QWORD *)&v15 + 1) = v8;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    v10 = (char *)v15;
    for ( i = (char *)v15; i != v8; i += 8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)i + 24LL))(
        *(_QWORD *)i,
        *((unsigned int *)this + 4),
        *((_QWORD *)this + 3));
    if ( v10 )
    {
      v12 = (const struct std::nothrow_t *)(8 * ((v2 - v10) >> 3));
      v13 = v10;
      if ( (unsigned __int64)v12 >= 0x1000 )
      {
        v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
        v10 = (char *)*((_QWORD *)v10 - 1);
        if ( (unsigned __int64)(v13 - v10 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v4, v12);
          __debugbreak();
        }
      }
      operator delete(v10, v12);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, &v14, (unsigned int)v5, v6);
  }
}
