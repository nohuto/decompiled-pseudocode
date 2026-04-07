/*
 * XREFs of ??$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x1800141E8
 * Callers:
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18001383C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x1800141B4 (--4-$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSour.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019290 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CBitmapSourceProxy>(__int64 a1, CBaseObject **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  int v7; // edi
  CBaseObject *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 12) = 0;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    *(_DWORD *)(v4 + 8) = 1;
  }
  wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(&v9, (volatile signed __int32 *)v4);
  v5 = v9;
  if ( v9 )
  {
    v6 = CResource::Create(4LL, *(_QWORD *)(a1 + 16), (char *)v9 + 16);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x10u);
    else
      v7 = 0;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x61u);
    }
    else
    {
      *a2 = v5;
      v7 = 0;
    }
    CBaseObject::Release(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Fu);
  }
  return (unsigned int)v7;
}
