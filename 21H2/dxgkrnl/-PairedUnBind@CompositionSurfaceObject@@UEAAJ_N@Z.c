/*
 * XREFs of ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x1C0066090
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000E150 (DxgkGetSessionTokenManager.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010CC4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedUnBind(CompositionSurfaceObject *this, char a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rdx
  int SessionTokenManager; // eax
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v5 >= 0 )
  {
    LOBYTE(v4) = a2;
    v5 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, v4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
    if ( v5 >= 0 && !a2 )
    {
      v10 = 0LL;
      SessionTokenManager = DxgkGetSessionTokenManager(&v10, v6);
      v8 = v10;
      v5 = SessionTokenManager;
      if ( SessionTokenManager >= 0 )
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 80LL))(v10, (char *)this - 32);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return (unsigned int)v5;
}
