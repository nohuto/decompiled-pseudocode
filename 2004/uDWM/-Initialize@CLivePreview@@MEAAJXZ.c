/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A480
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18004A3E8 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x18004A4FC (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18004A5B8 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLivePreview::Initialize(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CLivePreviewTimeline *v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 71;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v6);
    return v3;
  }
  v4 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 96LL);
  if ( v4 )
    v4 = CLivePreviewTimeline::CLivePreviewTimeline(v4);
  *((_QWORD *)this + 58) = v4;
  if ( !v4 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x4Au);
    return v3;
  }
  v2 = CLivePreview::_EnsureResources(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 76;
    goto LABEL_11;
  }
  return v3;
}
