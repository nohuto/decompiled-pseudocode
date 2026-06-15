/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x18002A760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002B930 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::IsStreamCategoryDucked(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int a6)
{
  __int64 v6; // rbp
  unsigned int v9; // edi
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  _QWORD *i; // rdi
  __int64 v13; // rbp
  TSSession *v15; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[4]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a4;
  v9 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  lpCriticalSection[1] = v10;
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v15)
    && (int)TSSession::GetStreamClassPolicyGainsForEndpoint(
              v15,
              a3,
              (struct CStreamClassPolicyGainsWrapper **)lpCriticalSection) >= 0 )
  {
    v11 = lpCriticalSection[0];
    EnterCriticalSection(lpCriticalSection[0]);
    lpCriticalSection[0] = v11;
    if ( (unsigned int)v6 < 0x15 )
    {
      for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v11->DebugInfo + 8 * v6 + (a6 != 0 ? 208LL : 40LL));
            i;
            i = (_QWORD *)*i )
      {
        v13 = i[1];
        if ( (***(float (__fastcall ****)(_QWORD))(v13 + 56))(*(_QWORD *)(v13 + 56)) != 0.0
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 56) + 8LL))(*(_QWORD *)(v13 + 56)) )
        {
          if ( v11 )
            LeaveCriticalSection(v11);
          v9 = 1;
          goto LABEL_15;
        }
      }
    }
    if ( v11 )
      LeaveCriticalSection(v11);
    v9 = 0;
  }
LABEL_15:
  if ( v10 )
    LeaveCriticalSection(v10);
  return v9;
}
