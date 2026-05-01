/*
 * XREFs of ?GetItemWithFlags@CAppLayout@@UEAAJIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180482480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItemWithFlags(RTL_SRWLOCK *a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  RTL_SRWLOCK *v8; // rdi
  unsigned int v9; // r14d
  PVOID Ptr; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, __int64, _QWORD *); // rcx

  *a5 = 0LL;
  v8 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  v9 = -2147024809;
  Ptr = a1[9].Ptr;
  v11 = 0LL;
  if ( Ptr )
  {
    do
    {
      v12 = *((_QWORD *)a1[8].Ptr + v11);
      if ( (a3 & (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12)) == a3 )
      {
        if ( !a2 )
        {
          v13 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))*((_QWORD *)a1[8].Ptr + v11);
          v9 = (**v13)(v13, a4, a5);
          break;
        }
        --a2;
      }
      ++v11;
    }
    while ( v11 < (unsigned __int64)Ptr );
  }
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v9;
}
