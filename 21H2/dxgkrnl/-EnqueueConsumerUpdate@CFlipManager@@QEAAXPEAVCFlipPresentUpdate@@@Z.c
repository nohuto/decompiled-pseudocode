/*
 * XREFs of ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006B2A4
 * Callers:
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006BA3C (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006BCE8 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::EnqueueConsumerUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rsi
  struct CFlipPresentUpdate *v5; // rdi
  __int64 v6; // rbx
  CFlipManager *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v2 = this + 15;
  if ( (_QWORD *)*v2 == v2 )
  {
    KeSetEvent(this[26], 1, 0);
  }
  else
  {
    v5 = (struct CFlipPresentUpdate *)((unsigned __int64)&this[16][-1] & -(__int64)(this[16] != 0LL));
    if ( *((_BYTE *)v5 + 73) )
    {
      v6 = (*(__int64 (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)a2 + 32LL))(a2);
      if ( (*(__int64 (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)v5 + 32LL))(v5) == v6 )
      {
        CFlipManager::ReleaseKernelPresentUpdateReferences(v7, v5);
        if ( v5 )
          (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      }
    }
  }
  v8 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v9 = (_QWORD *)v2[1];
  if ( (_QWORD *)*v9 != v2 )
    __fastfail(3u);
  *v8 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v9;
  *v9 = v8;
  v2[1] = v8;
  this[23] = (PRKEVENT)((char *)this[23] + 1);
}
