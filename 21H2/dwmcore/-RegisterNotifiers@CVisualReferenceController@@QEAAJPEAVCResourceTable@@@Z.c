/*
 * XREFs of ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800E6CBC
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800E6C3C (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E6F80 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCResource@@@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAAPEAPEAVCResource@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800EFA1C (--$_Emplace_reallocate@AEBQEAVCResource@@@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@s.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F6DC0 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualReferenceController::RegisterNotifiers(
        CVisualReferenceController *this,
        struct CResourceTable *a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  CVisualReferenceController **i; // rax
  _QWORD *v9; // rdx
  struct CResourceTable *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    v4 = (_QWORD *)((char *)this + 72);
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((char *)this + 72);
    v5 = CWeakReference<CVisual>::Create(*((_QWORD *)this + 8), v4);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x13u);
    }
    else
    {
      v7 = (_QWORD *)*v4;
      v11 = this;
      for ( i = (CVisualReferenceController **)v7[3]; i != (CVisualReferenceController **)v7[4]; ++i )
      {
        if ( *i == this )
          goto LABEL_7;
      }
      v9 = (_QWORD *)v7[4];
      if ( v9 == (_QWORD *)v7[5] )
      {
        std::vector<CResource *>::_Emplace_reallocate<CResource * const &>(v7 + 3, v9, &v11);
      }
      else
      {
        *v9 = this;
        v7[4] += 8LL;
      }
LABEL_7:
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  return v2;
}
