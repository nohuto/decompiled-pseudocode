/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0037724
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x1C0031080 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0031220 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C0031804 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C0032950 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C0032A18 (WPP_IFR_SF_qii.c)
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
  unsigned __int64 v14; // rax
  const void *_a2; // rax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  const void *v18; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v22; // r8
  __int64 v23; // r10

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
      v14 = -1LL;
      if ( m_Alignment + Length >= Length )
        v14 = m_Alignment + Length;
      v6 = m_Alignment + Length < Length ? 0xC0000095 : 0;
      this->m_RawLength = v14;
      if ( m_Alignment + Length < Length )
      {
        _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qii(m_Globals, 2u, v17, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, _a2, Length, v16);
        goto LABEL_17;
      }
    }
    p_m_BufferRawLA = &this->m_BufferRawLA;
    FxDmaEnabler::AllocateCommonBuffer(
      this->m_DmaEnabler,
      this->m_RawLength,
      &this->m_BufferRawVA,
      &this->m_BufferRawLA);
    m_BufferRawVA = (char *)this->m_BufferRawVA;
    if ( m_BufferRawVA )
    {
      v10 = this->m_Alignment;
      QuadPart = p_m_BufferRawLA->QuadPart;
      v12.QuadPart = ~v10 & (p_m_BufferRawLA->QuadPart + v10);
      this->m_BufferAlignedVA = (void *)(~v10 & (unsigned __int64)&m_BufferRawVA[v10]);
      this->m_BufferAlignedLA = v12;
      if ( v10 <= 0xFFF )
        return v6;
      if ( v12.QuadPart < QuadPart )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qii(m_Globals, 2u, v22, 0xBu, WPP_FxCommonBuffer_cpp_Traceguids, ObjectHandleUnchecked, v23, v22);
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
        v18 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qi(m_Globals, v19, v20, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v18, v20);
      }
      v6 = -1073741675;
LABEL_17:
      FxVerifierDbgBreakPoint(m_Globals);
      return v6;
    }
    this->m_Length = 0LL;
    result = 3221225626LL;
    this->m_RawLength = 0LL;
    this->m_BufferAlignedVA = 0LL;
    this->m_BufferAlignedLA.QuadPart = 0LL;
  }
  return result;
}
