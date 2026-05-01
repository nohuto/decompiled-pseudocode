/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800258D0
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180027C60 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x1800291C0 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18012278C (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18012278C.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180129748 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180165404 (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsP_ea_180165404.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 **v7; // r14
  volatile signed __int32 **v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  char v11; // al
  volatile signed __int32 *v12; // rax
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v4 = a1 + 8;
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v18);
    v5 = *(__int64 **)v4;
    *(_DWORD *)(v4 + 24) = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      if ( v6 == v4 )
      {
        *v5 = *(_QWORD *)(v4 + 16);
        break;
      }
      v5 = (__int64 *)(v6 + 16);
      *(_QWORD *)v4 = v6 + 16;
    }
    *(_QWORD *)v4 = 0LL;
  }
  v7 = (volatile signed __int32 **)(a2 + 304);
  v8 = (volatile signed __int32 **)(a1 + 304);
  if ( *(_QWORD *)(a2 + 304) )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a1 + 304,
      a2 + 304);
  }
  else
  {
    v9 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *v9 = 1;
      v9[2] = 0;
      *((_BYTE *)v9 + 12) = 0;
      v9[2] = *(_DWORD *)(a2 + 56);
      *((_BYTE *)v9 + 12) = *(_BYTE *)(a2 + 60);
      *((_OWORD *)v9 + 1) = *(_OWORD *)(a2 + 64);
      *((_OWORD *)v9 + 2) = *(_OWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 56) = 0;
      *(_BYTE *)(a2 + 60) = 0;
      *((_OWORD *)v9 + 3) = 0LL;
      *((_OWORD *)v9 + 4) = 0LL;
      v9[12] = *(_DWORD *)(a2 + 96);
      *((_QWORD *)v9 + 7) = *(_QWORD *)(a2 + 104);
      if ( *((_BYTE *)v9 + 72) )
      {
        v14 = (void *)*((_QWORD *)v9 + 8);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v14);
        *((_BYTE *)v10 + 72) = 0;
      }
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 8) = *(_QWORD *)(a2 + 112);
      v11 = *(_BYTE *)(a2 + 120);
      *(_QWORD *)(a2 + 112) = 0LL;
      *((_BYTE *)v10 + 72) = v11;
      *(_BYTE *)(a2 + 120) = 0;
      v10[20] = *(_DWORD *)(a2 + 128);
      v10[21] = *(_DWORD *)(a2 + 132);
      wil::StoredFailureInfo::StoredFailureInfo(v10 + 22, a2 + 136);
      *((_QWORD *)v10 + 31) = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      if ( *v8 )
      {
        if ( _InterlockedExchangeAdd(*v8, 0xFFFFFFFF) == 1 )
        {
          v16 = *v8;
          if ( *v8 )
          {
            wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v16 + 2);
            operator delete((void *)v16, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      *v8 = v10;
      *(_QWORD *)(a1 + 48) = v10 + 2;
      if ( *v7 )
      {
        if ( _InterlockedExchangeAdd(*v7, 0xFFFFFFFF) == 1 )
        {
          v17 = *v7;
          if ( *v7 )
          {
            wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v17 + 2);
            operator delete((void *)v17, (const struct std::nothrow_t *)0x100);
          }
        }
        *v7 = 0LL;
      }
      v12 = *v8;
      *v7 = *v8;
      if ( v12 )
        _InterlockedIncrement(v12);
      *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
