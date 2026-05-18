/*
 * XREFs of sub_18003E4C0 @ 0x18003E4C0
 * Callers:
 *     sub_18003EE50 @ 0x18003EE50 (sub_18003EE50.c)
 *     sub_180121526 @ 0x180121526 (sub_180121526.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18003E4C0(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)a1[5];
  if ( v2 )
  {
    if ( !_InterlockedDecrement(v2 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( !_InterlockedDecrement(v2 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[3];
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedDecrement(v3 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
