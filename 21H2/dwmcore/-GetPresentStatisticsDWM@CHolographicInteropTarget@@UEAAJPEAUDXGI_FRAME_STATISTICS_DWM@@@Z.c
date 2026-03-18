/*
 * XREFs of ?GetPresentStatisticsDWM@CHolographicInteropTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180299BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicInteropTarget::GetPresentStatisticsDWM(
        CHolographicInteropTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  int v4; // ebx
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 40);
    v4 = -2147467259;
    if ( v3 )
    {
      v3 = (_QWORD *)v3[4];
      if ( v3 )
        v4 = (*(__int64 (__fastcall **)(_QWORD *, struct DXGI_FRAME_STATISTICS_DWM *, char *))(*v3 + 24LL))(v3, a2, &v6);
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, &dword_180377E10, 2LL, v4, 0x126u);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180377E10, 2LL, -2003304307, 0x12Au);
  }
  return (unsigned int)v4;
}
