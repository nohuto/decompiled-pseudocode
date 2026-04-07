/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18000D640
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000D5E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001110C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x18002B470 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x18002B494 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  CThumbnailVisual *v1; // rbx
  int v2; // edi
  CThumbnailVisual *v4; // rax
  CThumbnailVisual *v5; // rsi
  int v6; // eax
  int updated; // eax
  CBaseObject *v9; // [rsp+40h] [rbp+8h]

  v1 = 0LL;
  v2 = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 11) )
    return (unsigned int)v2;
  v4 = (CThumbnailVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             568LL);
  if ( v4 )
    v5 = CThumbnailVisual::CThumbnailVisual(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = CThumbnailVisual::Initialize(v5);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1Bu);
    }
    else
    {
      v1 = v5;
      v5 = 0LL;
      v2 = 0;
      v9 = v1;
    }
    if ( v2 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Bu);
  }
  v1 = 0LL;
  v9 = 0LL;
LABEL_8:
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2183u);
  }
  else
  {
    *((_QWORD *)v1 + 46) = this;
    updated = CThumbnailVisual::UpdateProperties(v1, *((_DWORD *)this + 9));
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2187u);
    }
    else
    {
      *((_QWORD *)this + 11) = v1;
      _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
      v1 = v9;
    }
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)v2;
}
