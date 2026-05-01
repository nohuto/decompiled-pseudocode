/*
 * XREFs of ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800612E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponent::QueryService(
        CImmersiveShellComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _QWORD *i; // rcx
  __int64 v13; // rax
  char *v14; // rbx
  unsigned int v15; // edi

  v8 = (char *)this - 8;
  result = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 72LL))((char *)this - 8);
  if ( (int)result < 0 )
  {
    v10 = 0LL;
    v11 = *((_QWORD *)this + 3);
    if ( v11 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 2); ; i += 4 )
      {
        v13 = *(_QWORD *)&a2->Data1 - *i;
        if ( *(_QWORD *)&a2->Data1 == *i )
          v13 = *(_QWORD *)a2->Data4 - i[1];
        if ( !v13 )
          break;
        if ( ++v10 >= v11 )
          return (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                   v8,
                   a2,
                   a3,
                   a4);
      }
      v14 = *(char **)(32 * v10 + *((_QWORD *)this + 2) + 16);
      if ( v14 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      else if ( v8 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
        v14 = v8;
      }
      v15 = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v14)(v14, a3, a4);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
      return v15;
    }
    else
    {
      return (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
               v8,
               a2,
               a3,
               a4);
    }
  }
  return result;
}
