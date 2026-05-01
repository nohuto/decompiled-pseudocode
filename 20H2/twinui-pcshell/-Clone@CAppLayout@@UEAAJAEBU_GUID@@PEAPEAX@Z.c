/*
 * XREFs of ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180480E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x180480CEC (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::Clone(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v6; // rsi
  const struct _GUID *v7; // rdx
  int Instance; // ebx
  PVOID Ptr; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  void *v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = this + 2;
  AcquireSRWLockShared(this + 2);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Instance = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&this[3], v7, (CAppLayout **)&v13);
  if ( Instance >= 0 )
  {
    Ptr = this[9].Ptr;
    v10 = 0LL;
    if ( Ptr )
    {
      while ( Instance >= 0 )
      {
        v14 = 0LL;
        v11 = *((_QWORD *)this[8].Ptr + v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 88LL))(v11, &v14);
        if ( Instance >= 0 )
          Instance = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v13 + 224LL))(v13, v14, 1LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        if ( ++v10 >= (unsigned __int64)Ptr )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( Instance >= 0 )
        Instance = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v13)(v13, a2, a3);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)Instance;
}
