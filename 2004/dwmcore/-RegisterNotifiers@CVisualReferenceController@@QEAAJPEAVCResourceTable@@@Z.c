/*
 * XREFs of ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800DC2B8
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800DC238 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180047B78 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18009C3A8 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D6B98 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualReferenceController::RegisterNotifiers(
        CVisualReferenceController *this,
        struct CResourceTable *a2)
{
  unsigned int v2; // edi
  struct CWeakResourceReference **v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  struct CWeakResourceReference *v7; // rcx
  CVisualReferenceController **v8; // rax
  __int64 *v9; // rcx
  CVisualReferenceController **i; // rdx
  _QWORD *v11; // rdx
  struct CResourceTable *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v4 = (struct CWeakResourceReference **)((char *)this + 64);
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((__int64 *)this + 8);
    v5 = CWeakReference<CVisual>::Create(*((struct CResource **)this + 7), v4);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x13u, 0LL);
    }
    else
    {
      v7 = *v4;
      v13 = this;
      v8 = (CVisualReferenceController **)*((_QWORD *)v7 + 4);
      v9 = (__int64 *)((char *)v7 + 24);
      for ( i = (CVisualReferenceController **)*v9; i != v8 && *i != this; ++i )
        ;
      if ( i == v8 )
      {
        v11 = (_QWORD *)v9[1];
        if ( (_QWORD *)v9[2] == v11 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(v9, v11, &v13);
        }
        else
        {
          *v11 = this;
          v9[1] += 8LL;
        }
      }
      *((_QWORD *)this + 7) = 0LL;
    }
  }
  return v2;
}
