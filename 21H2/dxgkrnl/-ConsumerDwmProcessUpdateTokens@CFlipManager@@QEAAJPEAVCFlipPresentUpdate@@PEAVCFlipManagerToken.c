/*
 * XREFs of ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C007CD34
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     _lambda_cfa85ae072c89c165dff36c328ecf84d_::operator() @ 0x1C007C280 (_lambda_cfa85ae072c89c165dff36c328ecf84d_--operator().c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C007F8B4 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C00809E0 (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1C0082D24 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C0082E14 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmProcessUpdateTokens(
        CFlipManager *this,
        struct CFlipPresentUpdate *a2,
        struct CFlipManagerToken *a3,
        struct _LIST_ENTRY *a4)
{
  CEndpointResourceStateManager *v5; // rbx
  struct CFlipPropertySet *v7; // r8
  char *v8; // r15
  NTSTATUS updated; // edi
  char *p_Blink; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY **v14; // rax
  __int64 v15; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY v18; // [rsp+20h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+30h] [rbp-10h] BYREF
  char v20; // [rsp+38h] [rbp-8h]
  bool v21; // [rsp+70h] [rbp+30h] BYREF

  v18.Blink = &v18;
  v5 = (CFlipManager *)((char *)this + 104);
  v7 = (struct CFlipPropertySet *)*((_QWORD *)a2 + 7);
  v8 = (char *)this - 32;
  v18.Flink = &v18;
  updated = CEndpointResourceStateManager::PrepareUpdateTokens((CFlipManager *)((char *)this + 104), a2, v7, &v18);
  v20 = 1;
  v19 = &v18;
  if ( updated >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates(v5);
    while ( v18.Flink != &v18 )
    {
      p_Blink = (char *)&v18.Flink[-1].Blink;
      Flink = v18.Flink;
      v13 = v18.Flink->Flink;
      if ( v18.Flink->Flink->Blink != v18.Flink
        || (v14 = (struct _LIST_ENTRY **)*((_QWORD *)p_Blink + 2), *v14 != v18.Flink) )
      {
LABEL_14:
        __fastfail(3u);
      }
      *v14 = v13;
      v13->Blink = (struct _LIST_ENTRY *)v14;
      updated = ObReferenceObjectByPointer(v8, 3u, g_pDxgkCompositionObjectType, 0);
      if ( updated < 0 )
        goto LABEL_12;
      *((_QWORD *)p_Blink + 14) = *((_QWORD *)a3 + 11);
      CFlipContentToken::SetFlipManagerObjectPreReferenced((CFlipContentToken *)p_Blink, (struct FlipManagerObject *)v8);
      *((_QWORD *)p_Blink + 13) = *((_QWORD *)a2 + 8);
      v15 = *((_QWORD *)a3 + 8);
      p_Blink[304] = *(_BYTE *)(v15 + 24);
      p_Blink[307] = *(_BYTE *)(v15 + 77);
      p_Blink[305] = *(_BYTE *)(v15 + 78);
      p_Blink[306] = *(_BYTE *)(v15 + 76);
      *((_QWORD *)p_Blink + 39) = *(_QWORD *)(v15 + 64);
      *((_DWORD *)p_Blink + 80) = *(_DWORD *)(v15 + 56);
      *((_DWORD *)p_Blink + 81) = *(_DWORD *)(v15 + 72);
      *((_QWORD *)p_Blink + 41) = *(_QWORD *)(v15 + 48);
      if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)p_Blink + 152LL))(p_Blink) )
        goto LABEL_12;
      updated = CFlipContentToken::InFrame((CFlipContentToken *)p_Blink, &v21);
      if ( updated >= 0 && a4 )
      {
        Blink = a4->Blink;
        if ( Blink->Flink != a4 )
          goto LABEL_14;
        Flink->Flink = a4;
        *((_QWORD *)p_Blink + 2) = Blink;
        Blink->Flink = Flink;
        a4->Blink = Flink;
      }
      else
      {
LABEL_12:
        (*(void (__fastcall **)(char *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
        (**(void (__fastcall ***)(char *, __int64))p_Blink)(p_Blink, 1LL);
        if ( updated < 0 )
          break;
      }
    }
  }
  v20 = 0;
  lambda_cfa85ae072c89c165dff36c328ecf84d_::operator()((_QWORD **)&v19);
  return (unsigned int)updated;
}
