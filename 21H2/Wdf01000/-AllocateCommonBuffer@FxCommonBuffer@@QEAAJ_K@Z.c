/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C002A060
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x1C0029DA0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0029EF0 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C002A15C (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C00559AC (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C0055A74 (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(FxCommonBuffer *this, unsigned __int64 Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned __int64 m_Alignment; // rdx
  _LARGE_INTEGER *p_m_BufferRawLA; // r14
  char *m_BufferRawVA; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 QuadPart; // r10
  _LARGE_INTEGER v12; // r8
  unsigned __int64 v13; // r8
  const void *globals; // rax
  unsigned __int8 v15; // dl
  __int64 level; // r8
  const void *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v21; // rdx
  unsigned int v22; // r8d

  m_Globals = this->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  v6 = result;
  if ( (int)result >= 0 )
  {
    m_Alignment = this->m_Alignment;
    this->m_Length = Length;
    if ( m_Alignment <= 0xFFF && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, m_Alignment, 0xBu) )
    {
      this->m_RawLength = Length;
    }
    else
    {
      if ( m_Alignment + Length < Length )
      {
        this->m_RawLength = -1LL;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qii(m_Globals, 2u, v22, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, ObjectHandleUnchecked, Length, v21);
        goto LABEL_19;
      }
      this->m_RawLength = m_Alignment + Length;
      v6 = 0;
    }
    p_m_BufferRawLA = &this->m_BufferRawLA;
    FxDmaEnabler::AllocateCommonBuffer(
      this->m_DmaEnabler,
      this->m_RawLength,
      &this->m_BufferRawVA,
      &this->m_BufferRawLA);
    m_BufferRawVA = (char *)this->m_BufferRawVA;
    if ( !m_BufferRawVA )
    {
      this->m_Length = 0LL;
      result = 3221225626LL;
      this->m_RawLength = 0LL;
      this->m_BufferAlignedVA = 0LL;
      this->m_BufferAlignedLA.QuadPart = 0LL;
      return result;
    }
    v10 = this->m_Alignment;
    QuadPart = p_m_BufferRawLA->QuadPart;
    v12.QuadPart = ~v10 & (p_m_BufferRawLA->QuadPart + v10);
    this->m_BufferAlignedVA = (void *)(~v10 & (unsigned __int64)&m_BufferRawVA[v10]);
    this->m_BufferAlignedLA = v12;
    if ( v10 <= 0xFFF )
      return v6;
    if ( v12.QuadPart < QuadPart )
    {
      v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qii(m_Globals, 2u, v18, 0xBu, WPP_FxCommonBuffer_cpp_Traceguids, v17, v19, v18);
    }
    else
    {
      v13 = v12.QuadPart - QuadPart;
      if ( v13 <= 0xFFFFFFFF )
      {
        v6 = 0;
        this->m_BufferAlignedVA = &m_BufferRawVA[(unsigned int)v13];
        return v6;
      }
      globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qi(m_Globals, v15, level, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, globals, level);
    }
LABEL_19:
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225621LL;
  }
  return result;
}
