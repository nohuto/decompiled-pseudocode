/*
 * XREFs of ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180251480
 * Callers:
 *     ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x180253C70 (--1CHolographicExclusiveMode@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180253D10 (-DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?erase@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180251C08 (-erase@-$vector@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180257CA0 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2)
{
  char *v2; // rdi
  struct CHolographicExclusiveMode **i; // rbx
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 80;
  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != *((struct CHolographicExclusiveMode ***)this + 11) )
  {
    if ( *((_QWORD *)this + 6) )
    {
      if ( *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          *((CHolographicInteropTaskQueue **)this + 6),
          0x1Eu,
          (struct IUnknown *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
    }
    std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::erase(v2, &v4, i);
  }
}
