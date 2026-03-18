/*
 * XREFs of ?StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z @ 0x1800B5638
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DBatchExecutionContext::StartExecution(
        CD3DBatchExecutionContext *this,
        const struct WorldToClipSpace *a2,
        const struct ClipPlaneInfoRef *a3)
{
  __int64 v6; // rdi
  _OWORD *v7; // rbp
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 192LL))(*((_QWORD *)this + 2), 4LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 344LL))(
    *((_QWORD *)this + 2),
    *(_QWORD *)(*((_QWORD *)this + 1) + 2264LL));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 288LL))(
    *((_QWORD *)this + 2),
    *(_QWORD *)(*((_QWORD *)this + 1) + 2272LL),
    0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 152LL))(
    *((_QWORD *)this + 2),
    *(_QWORD *)(*((_QWORD *)this + 4) + 72LL),
    57LL);
  v6 = *((_QWORD *)this + 4);
  v7 = (_OWORD *)(((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL));
  if ( v7 )
  {
    if ( memcmp_0(v7, (const void *)(v6 + 288), 0x50uLL) )
    {
      *(_BYTE *)(v6 + 168) = 1;
      *(_OWORD *)(v6 + 288) = *v7;
      *(_OWORD *)(v6 + 304) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x10);
      *(_OWORD *)(v6 + 320) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x20);
      *(_OWORD *)(v6 + 336) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x30);
      *(_OWORD *)(v6 + 352) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x40);
    }
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  *(_BYTE *)(v6 + 368) = v8;
  v9 = *(_QWORD *)(v6 + 176) - *(_QWORD *)a2;
  if ( !v9 )
    v9 = *(_QWORD *)(v6 + 184) - *((_QWORD *)a2 + 1);
  if ( v9 )
  {
    *(_BYTE *)(v6 + 168) = 1;
    *(_OWORD *)(v6 + 176) = *(_OWORD *)a2;
  }
  v10 = *((_QWORD *)this + 2);
  v14 = *(_QWORD *)(v6 + 160);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, 0LL, 1LL, &v14);
  if ( *((_DWORD *)this + 30) == 1 )
  {
    v11 = *((_QWORD *)this + 4);
    v12 = *(_DWORD *)(*((_QWORD *)this + 14) + 16LL);
    if ( v12 == *(_DWORD *)(v11 + 400) )
    {
      if ( !*(_BYTE *)(v11 + 392) )
      {
LABEL_16:
        v13 = *((_QWORD *)this + 2);
        v15 = *(_QWORD *)(v11 + 384);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v13 + 128LL))(v13, 2LL, 1LL, &v15);
        return;
      }
    }
    else
    {
      *(_DWORD *)(v11 + 400) = v12;
      *(_BYTE *)(v11 + 392) = 1;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1)
                                                                                                  + 560LL)
                                                                                    + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
      *(_QWORD *)(v11 + 384),
      0LL,
      0LL,
      v11 + 400,
      0,
      0);
    *(_BYTE *)(v11 + 392) = 0;
    goto LABEL_16;
  }
}
