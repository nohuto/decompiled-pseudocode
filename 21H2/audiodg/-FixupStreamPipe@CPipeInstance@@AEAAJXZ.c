/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B98C
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B880 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BA0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D5E0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BF24 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140047918 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  int APOProcessNode; // edi
  unsigned int *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void (__fastcall **v8)(_QWORD, __int64); // rax
  _QWORD *v9; // rsi
  unsigned int *v10; // r15
  _QWORD v11[4]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v12[4]; // [rsp+60h] [rbp-48h] BYREF
  CPipeInstance *v13; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+B8h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+C0h] [rbp+18h] BYREF
  _QWORD *v16; // [rsp+C8h] [rbp+20h] BYREF

  v13 = this;
  APOProcessNode = 0;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v14 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = (unsigned int *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                            (__int64)this,
                            &v14);
    v5 = v14;
    if ( !v14 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = v14[2];
    if ( v4[10] == 3
      && *(_DWORD *)(v6 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4LL)
      && (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      v16 = 0LL;
      v15 = 0LL;
      v12[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                         &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
                         0LL,
                         v4[6],
                         1LL,
                         0,
                         v12);
      if ( APOProcessNode < 0 )
      {
        if ( v15 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v7 = (void (__fastcall ***)(_QWORD, __int64))v16;
LABEL_19:
        if ( !v7 )
          goto LABEL_3;
        v8 = *v7;
        goto LABEL_46;
      }
      v9 = v16;
      APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30)
                                                                                           + 24LL))(
                         *((_QWORD *)this + 30),
                         v16[4] + 8LL,
                         *(unsigned int *)(v16[4] + 4LL),
                         *((_QWORD *)this + 24),
                         v16[4] + 40LL);
      if ( APOProcessNode >= 0 )
      {
        APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, _QWORD **))(*(_QWORD *)v4 + 16LL))(v4, &v15);
        if ( APOProcessNode >= 0 )
        {
          v11[0] = 0LL;
          if ( !(*(unsigned int (__fastcall **)(_QWORD *, _QWORD *, _QWORD *, _QWORD *))(*v9 + 40LL))(v9, v15, v11, v15) )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 24LL))(v9, v15);
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v15);
            v14 = v9;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)this + 16, v5, &v14);
            JUMPOUT(0x1400342E2LL);
          }
          JUMPOUT(0x1400342EFLL);
        }
      }
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      goto LABEL_45;
    }
  }
  if ( *((_DWORD *)this + 28) == 5 && *((_QWORD *)this + 4) == 1LL )
  {
    v15 = 0LL;
    v13 = 0LL;
    v10 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2);
    v12[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                       &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
                       0LL,
                       v10[6],
                       1LL,
                       0,
                       v12);
    if ( APOProcessNode < 0 )
    {
      if ( v13 )
        (*(void (**)(void))(*(_QWORD *)v13 + 16LL))();
      v7 = (void (__fastcall ***)(_QWORD, __int64))v15;
      goto LABEL_19;
    }
    v9 = v15;
    APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30)
                                                                                         + 24LL))(
                       *((_QWORD *)this + 30),
                       v15[4] + 8LL,
                       *(unsigned int *)(v15[4] + 4LL),
                       *((_QWORD *)this + 24),
                       v15[4] + 40LL);
    if ( APOProcessNode < 0
      || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, CPipeInstance **))(*(_QWORD *)v10 + 16LL))(
                             v10,
                             &v13),
          APOProcessNode < 0) )
    {
      if ( v13 )
        (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_45;
    }
    v16 = 0LL;
    if ( (*(unsigned int (__fastcall **)(_QWORD *, CPipeInstance *, _QWORD **, CPipeInstance *))(*v9 + 40LL))(
           v9,
           v13,
           &v16,
           v13) )
    {
      APOProcessNode = -2005139404;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, CPipeInstance *))(*v9 + 24LL))(v9, v13);
      (*(void (__fastcall **)(_QWORD *, CPipeInstance *))(*v9 + 32LL))(v9, v13);
      APOProcessNode = 0;
      v14 = v9;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((char *)this + 16, &v14);
      v15 = 0LL;
      v9 = 0LL;
    }
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    if ( v13 )
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v9 )
    {
LABEL_45:
      v8 = (void (__fastcall **)(_QWORD, __int64))*v9;
      v7 = (void (__fastcall ***)(_QWORD, __int64))v9;
LABEL_46:
      (*v8)(v7, 1LL);
    }
  }
LABEL_3:
  if ( APOProcessNode < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x9A8u, APOProcessNode);
  return (unsigned int)APOProcessNode;
}
