/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1801676D4
 * Callers:
 *     _NotificationDispatcher::WndProc_::_1_::dtor$1 @ 0x180104CD3 (_NotificationDispatcher--WndProc_--_1_--dtor$1.c)
 *     _NotificationDispatcher::DispatchNotifications_::_1_::dtor$0 @ 0x180191DEC (_NotificationDispatcher--DispatchNotifications_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>(
        __int64 a1)
{
  _QWORD *v2; // rcx
  unsigned __int64 i; // rdi
  __int64 v4; // rdx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
    {
      v2 = *(_QWORD **)a1;
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      if ( v4 )
      {
        v2[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v2 = *(_QWORD **)a1;
      }
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
