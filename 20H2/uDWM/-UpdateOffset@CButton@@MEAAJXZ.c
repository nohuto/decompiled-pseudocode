/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180019F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013300 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18003D28C (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                 + 344LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x280u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xCBu);
  }
  else
  {
    v4 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v4 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v4 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1, 0x2000u);
      v4 = *((_QWORD *)this + 36);
    }
    if ( *(CButton **)(v4 + 80) == this )
    {
      v6 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v4, &v6);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v4 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v4 + 20) )
    {
      *(_QWORD *)(v4 + 16) = *((_QWORD *)this + 14);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1, 0x2000u);
    }
  }
  return v3;
}
