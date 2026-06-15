/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18003101C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x18002A294 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x180040068 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        int a3,
        bool *a4,
        float *a5,
        __int64 *a6)
{
  __int64 v8; // rbp
  unsigned int v10; // ebx
  _QWORD *i; // rbx
  __int64 v12; // rdi
  float v13; // xmm0_4
  float v14; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  *a4 = 0;
  *a5 = 1.0;
  *a6 = 0LL;
  if ( (unsigned int)v8 < 0x15 )
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo + 8 * v8 + (a3 != 0 ? 208LL : 40LL));
          i;
          i = (_QWORD *)*i )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      v13 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
      v14 = 0.0;
      if ( v13 != -INFINITY )
        v14 = pow(10.0, v13 / 20.0);
      if ( *a5 > v14 )
        *a5 = v14;
      if ( v12 > *a6 )
        *a6 = v12;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  else
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v10;
}
