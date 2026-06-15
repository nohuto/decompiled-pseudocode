/*
 * XREFs of sub_18000FE80 @ 0x18000FE80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD09C @ 0x1800BD09C (sub_1800BD09C.c)
 */

__int64 __fastcall sub_18000FE80(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  ULONG_PTR SpinCount; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
  {
    v7 = a1 + 1;
    EnterCriticalSection(a1 + 1);
    SpinCount = a1->SpinCount;
    v15[0] = v7;
    v9 = 0;
    if ( SpinCount )
    {
      a1->SpinCount = 0LL;
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
    }
    while ( !(unsigned __int8)sub_1800BD09C(a4 + 8LL * v9, &a1->SpinCount) )
    {
      if ( ++v9 >= a3 )
        goto LABEL_11;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, HANDLE *))(*(_QWORD *)a1->SpinCount + 32LL))(
            a1->SpinCount,
            &a1->LockSemaphore);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = (unsigned int)v10;
      v13 = 733LL;
LABEL_13:
      sub_18004BD84(retaddr, v13, "avcore\\audiocore\\server\\audiosrv\\dll\\metercontrol.cpp", v12);
      sub_180023350(v15);
      return v11;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 392LL))(qword_18019E618) )
      (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)a1->SpinCount + 40LL))(a1->SpinCount, 1LL);
LABEL_11:
    if ( !a1->SpinCount )
    {
      v11 = -2147023537;
      v13 = 746LL;
      v12 = 2147943759LL;
      goto LABEL_13;
    }
    sub_180023350(v15);
  }
  return 0LL;
}
