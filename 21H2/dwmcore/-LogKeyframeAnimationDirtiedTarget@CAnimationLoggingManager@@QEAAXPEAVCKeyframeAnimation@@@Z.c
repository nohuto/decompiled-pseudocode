/*
 * XREFs of ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x1800525F8
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180051C60 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z @ 0x18005270C (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180052A58 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::SynthesizeDescription @ 0x180061AA4 (_anonymous_namespace_--SynthesizeDescription.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationLoggingManager::LogKeyframeAnimationDirtiedTarget(
        CAnimationLoggingManager *this,
        struct CKeyframeAnimation *a2)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  wchar_t *v5; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v10[32]; // [rsp+20h] [rbp-48h] BYREF

  DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, a2);
  v5 = word_18032C468;
  v6 = DebugInfoForResource;
  if ( *((_QWORD *)DebugInfoForResource + 3) )
  {
    v5 = (wchar_t *)((char *)DebugInfoForResource + 8);
    if ( *((_QWORD *)DebugInfoForResource + 4) >= 8uLL )
      v5 = *(wchar_t **)v5;
  }
  if ( !*v5 )
  {
    if ( !*((_QWORD *)this + 22) )
      goto LABEL_7;
    v5 = (wchar_t *)((char *)this + 160);
    if ( *((_QWORD *)this + 23) >= 8uLL )
      v5 = *(wchar_t **)v5;
    if ( !*v5 )
    {
LABEL_7:
      v5 = (wchar_t *)((char *)DebugInfoForResource + 8);
      v9 = anonymous_namespace_::SynthesizeDescription(v10, a2);
      if ( (struct CAnimationLoggingManager::ResourceDebugInfo *)((char *)v6 + 8) != (struct CAnimationLoggingManager::ResourceDebugInfo *)v9 )
      {
        std::wstring::_Tidy_deallocate((char *)v6 + 8);
        *(_OWORD *)v5 = *(_OWORD *)v9;
        *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = 7LL;
        *(_WORD *)v9 = 0;
      }
      std::wstring::_Tidy_deallocate(v10);
      if ( *((_QWORD *)v6 + 4) >= 8uLL )
        v5 = *(wchar_t **)v5;
    }
  }
  v7 = *(_DWORD *)v6;
  v8 = (*(__int64 (__fastcall **)(CAnimationLoggingManager *))(*(_QWORD *)this + 160LL))(this);
  CTelemetryFrames::FrameDirtiedByKeyframeAnimation(*(_QWORD *)(v8 + 16), v7, v5);
}
