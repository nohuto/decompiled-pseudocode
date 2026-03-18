/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00064CC
 * Callers:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0005D98 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000668C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2,
        _QWORD *a3)
{
  int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // r9
  void *v13; // rcx
  _QWORD *v14; // rbx
  CPushLock *v15; // r13
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v17; // rbx
  __int64 v18; // rax
  struct DXGGLOBAL *Global; // rax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v25; // [rsp+60h] [rbp+18h]

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  while ( (unsigned int)v5 < *((_DWORD *)a2 + 2) )
  {
    v8 = *(_QWORD *)a2;
    v9 = *((unsigned int *)this + 16);
    v10 = 0;
    v25 = *(_QWORD *)a2;
    v11 = *(_QWORD *)(*(_QWORD *)a2 + 24 * v5);
    if ( (_DWORD)v9 )
    {
      v12 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        a3 = (_QWORD *)(v12 + 32LL * v10);
        if ( v11 == *a3 )
          break;
        if ( ++v10 >= (unsigned int)v9 )
          goto LABEL_12;
      }
      v4 = v12 + 32LL * v10;
      goto LABEL_7;
    }
LABEL_12:
    if ( v10 != (_DWORD)v9 )
      goto LABEL_7;
    if ( (unsigned int)v9 >= *((_DWORD *)a2 + 3) )
      return (unsigned int)-1073741811;
    v13 = *(void **)(v8 + 24 * v5);
    v4 = *((_QWORD *)this + 7) + 32 * v9;
    *(_QWORD *)v4 = v11;
    v3 = CompositionSurfaceObject::ResolveHandle(v13, 2u, (__int64)a3, (struct CompositionSurfaceObject **)(v4 + 8));
    if ( v3 >= 0 )
    {
      ++*((_DWORD *)this + 16);
      v14 = *(_QWORD **)(v4 + 8);
      v15 = (CPushLock *)(v14 + 6);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v14 + 6, 0LL);
      v14[7] = KeGetCurrentThread();
      v3 = 0;
      ActiveBuffer = CCompositionSurface::GetActiveBuffer((CCompositionSurface *)(v14 + 5));
      v17 = ActiveBuffer;
      if ( !ActiveBuffer )
        goto LABEL_25;
      if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 80LL))(ActiveBuffer) )
      {
        v18 = *((_QWORD *)v17 + 2);
      }
      else
      {
LABEL_25:
        v3 = -1073741275;
        v18 = 0LL;
      }
      *(_QWORD *)(v4 + 16) = v18;
      CPushLock::ReleaseLock(v15);
      if ( v3 >= 0 )
      {
        Global = DXGGLOBAL_GetGlobal();
        v20 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 38073) + 16LL))(v4 + 24);
        v8 = v25;
        v3 = v20;
LABEL_7:
        if ( v3 >= 0 )
          v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 24) + 40LL))(
                 *(_QWORD *)(v4 + 24),
                 v8 + 8 + 24 * v5);
      }
    }
    v5 = (unsigned int)(v5 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  v21 = *((_DWORD *)this + 16);
  if ( v21 != *((_DWORD *)a2 + 3) )
    return (unsigned int)-1073741811;
  v22 = 0;
  if ( v21 )
  {
    do
    {
      v23 = v22++;
      *(_QWORD *)(32 * v23 + *((_QWORD *)this + 7)) = 0LL;
    }
    while ( v22 < *((_DWORD *)this + 16) );
  }
  return (unsigned int)v3;
}
