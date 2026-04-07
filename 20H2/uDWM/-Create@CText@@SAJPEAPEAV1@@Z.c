/*
 * XREFs of ?Create@CText@@SAJPEAPEAV1@@Z @ 0x1800296D4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023200 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002BA40 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CText@@AEAA@XZ @ 0x1800295D4 (--0CText@@AEAA@XZ.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::Create(struct CText **a1)
{
  CText *v2; // rax
  CText *v3; // rbx
  struct CText *v4; // rbx
  int v5; // eax
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x26u);
    return (unsigned int)v6;
  }
  v2 = (CText *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  432LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x1B0uLL);
    v4 = CText::CText(v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CText *))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x26u);
    }
    else
    {
      *a1 = v4;
      v4 = 0LL;
      v6 = 0;
    }
    if ( v6 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x26u);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v6;
}
