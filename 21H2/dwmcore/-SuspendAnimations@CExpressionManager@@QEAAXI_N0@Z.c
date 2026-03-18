/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FDE30
 * Callers:
 *     ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x180050860 (-FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ.c)
 *     ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x180193134 (-Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800DC2C8 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x1801FD6A0 (--$_Emplace@AEBI@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-A.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(__int64 this, unsigned int a2, char a3, char a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v33; // [rsp+78h] [rbp+10h] BYREF

  v33 = a2;
  v5 = this;
  if ( !a3 )
  {
    v16 = *(_DWORD *)(this + 320);
    if ( !v16 )
      goto LABEL_46;
    v17 = 0;
    v18 = (__int64 *)(this + 296);
    v19 = 0LL;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v19 + *v18);
      v31[0] = v20;
      if ( v20 && *(_DWORD *)(v20 + 176) == a2 )
      {
        v21 = v5 + 32LL * *(unsigned int *)(v5 + 164);
        v22 = *(_DWORD *)(v21 + 192);
        v23 = v22 + 1;
        if ( v22 + 1 < v22 )
        {
          v25 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_37:
          ModuleFailFastForHRESULT(v25, retaddr);
        }
        if ( v23 > *(_DWORD *)(v21 + 188) )
        {
          v24 = DynArrayImpl<1>::AddMultipleAndSet(v21 + 168, 8u, v21, v31);
          v25 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0LL, v24, 0xC0u);
            goto LABEL_37;
          }
        }
        else
        {
          this = v22;
          *(_QWORD *)(*(_QWORD *)(v21 + 168) + 8LL * v22) = v20;
          *(_DWORD *)(v21 + 192) = v23;
        }
        *(_QWORD *)(v19 + *v18) = 0LL;
      }
      ++v17;
      v19 += 8LL;
      if ( v17 >= v16 )
      {
        v26 = 0LL;
        v27 = v16 - 1;
        if ( v16 != 1 )
        {
          do
          {
            v28 = *v18;
            while ( 1 )
            {
              v29 = *(_QWORD *)(v28 + 8 * v26);
              if ( !v29 || (unsigned int)v26 >= (unsigned int)v27 )
                break;
              v26 = (unsigned int)(v26 + 1);
            }
            while ( 1 )
            {
              v30 = *(_QWORD *)(v28 + 8 * v27);
              if ( v30 || (unsigned int)v26 >= (unsigned int)v27 )
                break;
              v27 = (unsigned int)(v27 - 1);
            }
            if ( !v29 && v30 )
            {
              *(_QWORD *)(v28 + 8 * v26) = v30;
              *(_QWORD *)(*v18 + 8 * v27) = 0LL;
            }
          }
          while ( (unsigned int)v26 < (unsigned int)v27 );
        }
        *(_DWORD *)(v5 + 320) = v27;
        DynArrayImpl<1>::ShrinkToSize((__int64)v18, 8u);
        goto LABEL_46;
      }
    }
  }
  if ( a4 )
  {
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
      (__int64 *)(this + 400),
      (__int64)v31,
      &v33);
  }
  else
  {
    v6 = *(unsigned int *)(this + 164);
    v7 = 0LL;
    if ( *(_DWORD *)(32 * (v6 + 6) + v5) )
    {
      do
      {
        v8 = *(_DWORD **)(*(_QWORD *)(32LL * (unsigned int)v6 + v5 + 168) + 8 * v7);
        v31[0] = v8;
        if ( v8
          && v8[44] == a2
          && ((*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 56LL))(v8, 58LL)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 56LL))(v31[0], 90LL)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 56LL))(v31[0], 110LL)) )
        {
          v10 = (_QWORD *)(v5 + 296);
          v11 = *(_DWORD *)(v5 + 320);
          v12 = v11 + 1;
          if ( v11 + 1 < v11 )
          {
            v15 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_19:
            ModuleFailFastForHRESULT(v15, retaddr);
          }
          if ( v12 > *(_DWORD *)(v5 + 316) )
          {
            v13 = DynArrayImpl<1>::AddMultipleAndSet(v5 + 296, 8u, (__int64)v10, v31);
            v15 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xC0u);
              goto LABEL_19;
            }
          }
          else
          {
            *(_QWORD *)(*v10 + 8LL * v11) = v31[0];
            *(_DWORD *)(v5 + 320) = v12;
          }
          *(_QWORD *)(*(_QWORD *)(32LL * *(unsigned int *)(v5 + 164) + v5 + 168) + 8 * v7) = 0LL;
        }
        v7 = (unsigned int)(v7 + 1);
        LODWORD(v6) = *(_DWORD *)(v5 + 164);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(32 * ((unsigned int)v6 + 6LL) + v5) );
    }
LABEL_46:
    *(_BYTE *)(v5 + 448) |= 8u;
  }
}
