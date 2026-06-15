/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800F03F8
 * Callers:
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800F00E8 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ?ReleaseReference@CCaptureNotifier@@QEAAXK_N0@Z @ 0x1800F0350 (-ReleaseReference@CCaptureNotifier@@QEAAXK_N0@Z.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180065BBC (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800EFFCC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(
        CCaptureNotifier *a1,
        int a2,
        unsigned int a3,
        char a4,
        char a5)
{
  bool v8; // si
  bool v9; // bl
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  bool v13; // cl
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int *v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  try
  {
    v8 = 0;
    v9 = 0;
    v10 = (__int64 *)((char *)a1 + 80);
    v11 = *v10;
    v12 = *(_QWORD *)(*v10 + 8);
    if ( *(_BYTE *)(v12 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_DWORD *)(v12 + 28) >= a3 )
      {
        v11 = v12;
        v12 = *(_QWORD *)v12;
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    while ( !*(_BYTE *)(v12 + 25) );
    if ( v11 == *v10 || a3 < *(_DWORD *)(v11 + 28) )
    {
LABEL_9:
      v19 = (int *)&v20;
      v11 = *std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
               v10,
               v17,
               (__int64 *)v11,
               v12,
               &v19);
    }
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v14 = *(_DWORD *)(v11 + 32);
      if ( !v14 )
        return;
      v15 = v14 - 1;
      *(_DWORD *)(v11 + 32) = v15;
      v13 = v15 == 0;
      if ( a4 )
      {
        v16 = (*(_DWORD *)(v11 + 36))-- == 1;
        v8 = v16;
      }
      if ( a5 )
      {
        v16 = (*(_DWORD *)(v11 + 40))-- == 1;
        if ( v16 )
          v9 = 1;
      }
    }
    else
    {
      v13 = ++*(_DWORD *)(v11 + 32) == 1;
      if ( a4 )
        v8 = ++*(_DWORD *)(v11 + 36) == 1;
      if ( a5 )
        v9 = ++*(_DWORD *)(v11 + 40) == 1;
    }
    if ( v13 || v8 || v9 )
      CCaptureNotifier::PublishCaptureAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x242,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)v12);
  }
}
