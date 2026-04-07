/*
 * XREFs of ??$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x1800520CC
 * Callers:
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x18004A4FC (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019290 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CDoubleResourceProxy>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // edi

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 12) = 0;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v6 = CResource::Create(9u, *(_QWORD *)(a1 + 16), (__int64 *)(v5 + 16));
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
    CBaseObject::Release((CBaseObject *)v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Fu);
  }
  return (unsigned int)v7;
}
