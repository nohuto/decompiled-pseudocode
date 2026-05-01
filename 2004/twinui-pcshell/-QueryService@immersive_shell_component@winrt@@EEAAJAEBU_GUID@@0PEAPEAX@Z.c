/*
 * XREFs of ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180465070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F94C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x180461AB4 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     ?add_ref@?$com_ptr@UIUnknown@@@winrt@@AEBAXXZ @ 0x180465F50 (-add_ref@-$com_ptr@UIUnknown@@@winrt@@AEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::immersive_shell_component::QueryService(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  RTL_SRWLOCK *v7; // r13
  __int64 result; // rax
  char v9; // r12
  __int64 (__fastcall ***v10)(_QWORD, const struct _GUID *, void **); // rbx
  _QWORD *Ptr; // rdx
  _QWORD *i; // rax
  __int64 v13; // rcx
  int v14; // edi
  const char *v15; // r9
  int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v18)(_QWORD, const struct _GUID *, void **); // [rsp+70h] [rbp+8h] BYREF
  const struct _GUID *v19; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v19 = a3;
  *a4 = 0LL;
  v7 = this - 1;
  if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))this[-1].Ptr + 8))(this - 1) )
    return 0LL;
  v9 = 0;
  v10 = 0LL;
  v18 = 0LL;
  AcquireSRWLockShared(this + 9);
  Ptr = this[6].Ptr;
  for ( i = this[5].Ptr; i != Ptr; i += 4 )
  {
    v13 = *(_QWORD *)&a2->Data1 - *i;
    if ( *(_QWORD *)&a2->Data1 == *i )
      v13 = *(_QWORD *)a2->Data4 - i[1];
    if ( !v13 )
      break;
  }
  if ( i != Ptr )
  {
    v9 = 1;
    if ( i[2] )
    {
      v10 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))i[2];
      v18 = v10;
      winrt::com_ptr<IUnknown>::add_ref(&v18);
    }
  }
  if ( this != (RTL_SRWLOCK *)-72LL )
    ReleaseSRWLockShared(this + 9);
  try
  {
    if ( !v9 )
    {
      winrt::immersive_shell_component::get_site<IServiceProvider>(v7, &v20);
      if ( !v20 )
      {
        if ( v10 )
          winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v18);
        return 2147500033LL;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v20 + 24LL))(
              v20,
              a2,
              v19,
              a4);
      if ( v16 < 0 )
      {
        if ( v20 )
          winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v20);
        if ( v10 )
          winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v18);
        return (unsigned int)v16;
      }
      if ( v20 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v20);
      goto LABEL_29;
    }
    if ( v10 )
    {
      v14 = (**v10)(v10, v19, a4);
      if ( v14 < 0 )
      {
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v18);
        return (unsigned int)v14;
      }
LABEL_29:
      if ( v10 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v18);
      return 0LL;
    }
    result = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, const struct _GUID *, void **))v7->Ptr)(v7, v19, a4);
    if ( (int)result >= 0 )
      goto LABEL_29;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10E,
                           (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
                           v15);
  }
  return result;
}
