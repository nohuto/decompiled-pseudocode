/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0018F20
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Retire(CFlipToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // r15
  char v5; // bl
  int v6; // esi
  int v7; // ebp
  __int64 v8; // r14
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD); // r12
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *i; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+60h] [rbp-58h]
  __int128 v17; // [rsp+70h] [rbp-48h]

  *((_DWORD *)this + 6) = 5;
  Global = DXGGLOBAL_GetGlobal();
  v4 = *((_QWORD *)this + 5);
  v5 = *((_BYTE *)this + 563);
  v6 = *((unsigned __int8 *)this + 560);
  v7 = *((_DWORD *)this + 6);
  v8 = *((_QWORD *)this + 12);
  v9 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD))(*((_QWORD *)Global + 38073) + 352LL);
  v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v11 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v9(*((_QWORD *)this + 4), *((unsigned int *)this + 26), v11, v8, v7, v6, v5 == 0, v10, v4, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
  {
    v12 = *((_QWORD *)this + 4);
    v13 = *((_QWORD *)this + 5);
    v17 = *(_OWORD *)a2;
    LODWORD(v17) = *((_DWORD *)this + 27);
    v16 = *((_OWORD *)a2 + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12 + 48, 0LL);
    *(_QWORD *)(v12 + 56) = KeGetCurrentThread();
    if ( *(_DWORD *)(v12 + 128) )
    {
      for ( i = *(__int64 **)(v12 + 112); i != (__int64 *)(v12 + 112); i = (__int64 *)*i )
      {
        if ( *(i - 1) == v13 )
        {
          *((_DWORD *)i + 46) = 0;
          *((_DWORD *)i + 56) = 0;
          *((_OWORD *)i + 12) = v17;
          *((_BYTE *)i + 17) = 1;
          *((_OWORD *)i + 13) = v16;
          break;
        }
      }
    }
    v15 = v12 + 48;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v12 + 56) )
    {
      *(_QWORD *)(v12 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v15, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
