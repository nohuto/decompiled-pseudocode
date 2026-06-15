/*
 * XREFs of ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x180045600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetImplementation(CAudioSession *this, struct CAudioSession **a2)
{
  unsigned int v2; // ebx
  struct CAudioSession *v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    v3 = (CAudioSession *)((char *)this - 8);
    *a2 = v3;
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
