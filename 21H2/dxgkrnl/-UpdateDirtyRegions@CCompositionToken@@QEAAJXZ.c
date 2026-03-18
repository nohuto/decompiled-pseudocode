/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C00066AC
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0003050 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0005BA0 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C0078610 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // edi
  unsigned int i; // ebp
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rsi
  CPushLock *v8; // r13
  _QWORD *j; // rax
  _QWORD *v10; // r14
  int v11; // esi
  _QWORD *v12; // rbx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 16); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 7) + 32LL * i);
    v5 = v4[3];
    v6 = v4[1];
    if ( v5 )
    {
      v7 = v4[2];
      v8 = (CPushLock *)(v6 + 48);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v6 + 48, 0LL);
      *(_QWORD *)(v6 + 56) = KeGetCurrentThread();
      if ( *(_DWORD *)(v6 + 128) )
      {
        for ( j = *(_QWORD **)(v6 + 112); j != (_QWORD *)(v6 + 112); j = (_QWORD *)*j )
        {
          v10 = j - 3;
          if ( *(j - 1) == v7 )
          {
            v11 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 80LL))(j - 3) )
            {
              v12 = 0LL;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 80LL))(v10) )
                v12 = v10;
              if ( *((_DWORD *)v12 + 95) == -1 )
                *((_DWORD *)v12 + 95) = 0;
              *((_DWORD *)v12 + 12) = 1;
              if ( *((_DWORD *)v12 + 72) )
              {
                CCompositionBuffer::AddScrollAsDirty(
                  (CCompositionBuffer *)v12,
                  (const struct ScrollOptimization *)(v12 + 36));
                *((_DWORD *)v12 + 72) = 0;
                *((_BYTE *)v12 + 42) = 1;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) )
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v12[35] + 48LL))(v12[35], v5, 2LL);
                *((_BYTE *)v12 + 42) = 1;
              }
            }
            else
            {
              v11 = -1073741811;
            }
            goto LABEL_16;
          }
        }
      }
      v11 = -1073741275;
LABEL_16:
      CPushLock::ReleaseLock(v8);
      if ( v1 >= 0 && v11 < 0 )
        v1 = v11;
    }
  }
  return (unsigned int)v1;
}
