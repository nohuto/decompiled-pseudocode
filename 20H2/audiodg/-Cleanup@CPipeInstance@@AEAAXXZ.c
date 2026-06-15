/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000DE80
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000FF0C (--1CPipeInstance@@QEAA@XZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140010200 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140001A10 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4D0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000F580 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14001AF38 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003DFC8 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x14003E930 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140044778 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::Cleanup(CPipeInstance *this)
{
  __int64 *v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  __int64 *v6; // rcx
  _QWORD **v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  ATL::CAtlPlex *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  if ( *((_QWORD *)this + 10) )
  {
    while ( 1 )
    {
      v2 = (__int64 *)*((_QWORD *)this + 8);
      if ( !v2 )
        goto LABEL_51;
      v3 = (__int64 *)v2[2];
      v4 = *v2;
      *((_QWORD *)this + 8) = *v2;
      if ( v4 )
        *(_QWORD *)(v4 + 8) = 0LL;
      else
        *((_QWORD *)this + 9) = 0LL;
      *v2 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = v2;
      v5 = (*((_QWORD *)this + 10))-- == 1LL;
      if ( v5 )
        ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 64);
      if ( v3[2] )
        break;
LABEL_26:
      *v3 = 0LL;
      v3[1] = 0LL;
      v3[4] = 0LL;
      v13 = (ATL::CAtlPlex *)v3[3];
      if ( v13 )
      {
        ATL::CAtlPlex::FreeDataChain(v13);
        v3[3] = 0LL;
      }
      operator delete(v3);
      if ( !*((_QWORD *)this + 10) )
        goto LABEL_29;
    }
    while ( 1 )
    {
      v6 = (__int64 *)*v3;
      if ( !*v3 )
        break;
      v7 = (_QWORD **)v6[2];
      v8 = *v6;
      *v3 = *v6;
      if ( v8 )
        *(_QWORD *)(v8 + 8) = 0LL;
      else
        v3[1] = 0LL;
      *v6 = v3[4];
      v3[4] = (__int64)v6;
      v5 = v3[2]-- == 1;
      if ( v5 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[4] = 0LL;
        v9 = (_QWORD *)v3[3];
        if ( v9 )
        {
          do
          {
            v10 = (_QWORD *)*v9;
            free(v9);
            v9 = v10;
          }
          while ( v10 );
          v3[3] = 0LL;
        }
      }
      if ( v7 )
      {
        if ( v7[1] && *(_DWORD *)v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7[6] + 64LL))(v7[6]);
          v7[1] = 0LL;
        }
        v11 = v7[7];
        if ( v11 )
        {
          v5 = (*((_DWORD *)v11 + 4))-- == 1;
          if ( v5 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[3] + 48LL))(v11[3], v11[1]);
            v17 = v11[3];
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            operator delete(v11);
          }
          v7[7] = 0LL;
        }
        v12 = v7[6];
        if ( v12 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        operator delete(v7);
      }
      if ( !v3[2] )
        goto LABEL_26;
    }
LABEL_51:
    ATL::AtlThrowImpl(-2147467259);
  }
LABEL_29:
  while ( *((_QWORD *)this + 4) )
  {
    v14 = (__int64 *)*((_QWORD *)this + 2);
    if ( !v14 )
      goto LABEL_51;
    v15 = v14[2];
    v16 = *v14;
    *((_QWORD *)this + 2) = *v14;
    if ( v16 )
      *(_QWORD *)(v16 + 8) = 0LL;
    else
      *((_QWORD *)this + 3) = 0LL;
    *v14 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v14;
    v5 = (*((_QWORD *)this + 4))-- == 1LL;
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((char *)this + 16);
    if ( *(_DWORD *)(v15 + 40) == 2 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 32LL))(
        *((_QWORD *)this + 30),
        *(_QWORD *)(*(_QWORD *)(v15 + 32) + 40LL));
    (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids);
  }
}
