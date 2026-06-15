/*
 * XREFs of ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800E6E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ResetEndpoint(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v3; // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = *((_QWORD *)this + 11);
  if ( !v3 )
  {
    v4 = -2005139437;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::ResetEndpoint", 768, v4);
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v6);
  if ( v4 < 0 )
    goto LABEL_7;
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
  if ( v4 < 0 )
    goto LABEL_7;
LABEL_8:
  if ( v1 )
    LeaveCriticalSection(v1);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  return (unsigned int)v4;
}
