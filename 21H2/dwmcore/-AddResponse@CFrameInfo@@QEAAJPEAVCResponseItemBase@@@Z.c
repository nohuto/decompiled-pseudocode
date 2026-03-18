/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItemBase@@@Z @ 0x1801CA67C
 * Callers:
 *     ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z @ 0x1801ADE90 (-AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItemBase *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  struct CResponseItemBase *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_DWORD *)this + 54);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x7Fu);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 53) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 192, 8u, 1, &v9);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0xC0u);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 24) + 8LL * *((unsigned int *)this + 54)) = a2;
    *((_DWORD *)this + 54) = v3;
  }
  (*(void (__fastcall **)(struct CResponseItemBase *))(*(_QWORD *)v9 + 32LL))(v9);
  return v4;
}
