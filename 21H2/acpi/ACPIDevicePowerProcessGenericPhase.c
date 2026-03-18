/*
 * XREFs of ACPIDevicePowerProcessGenericPhase @ 0x1C000C598
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C000AA40 (ACPIDeviceCompleteRequest.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C000DEE0 (ACPIIsPowerRequestBlocked.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDevicePowerProcessGenericPhase(_SLIST_ENTRY *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  _SLIST_ENTRY *Next; // rdi
  char v7; // bp
  unsigned __int32 v8; // r13d
  _SLIST_ENTRY *v9; // r15
  struct _SLIST_ENTRY *v10; // rbx
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // esi
  __int64 v13; // rdx
  _SLIST_ENTRY *v15; // rax
  struct _SLIST_ENTRY **v16; // rcx
  struct _SLIST_ENTRY **v17; // rax
  __int64 v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  Next = a1->Next;
  v7 = 1;
  if ( a1->Next != a1 )
  {
    v8 = a3;
    while ( 1 )
    {
      v9 = Next->Next;
      v10 = Next;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)&Next[13], 1, 1);
      v12 = v11;
      if ( v11 >= v8 )
        KeBugCheckEx(0xA3u, 1uLL, 0xC17B1uLL, 0LL, 0LL);
      _mm_lfence();
      v13 = *(_QWORD *)(a2 + 8LL * v11);
      if ( v13 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)&Next[13], 1, v11);
        if ( (*(int (__fastcall **)(_SLIST_ENTRY *))(v13 + 8LL * SLODWORD(Next[3].Next)))(Next) >= 0 )
          goto LABEL_6;
        v12 = 0;
        Next = v9;
      }
      else
      {
        Next = v9;
        if ( v11 == 1 )
        {
          if ( (unsigned __int8)ACPIIsPowerRequestBlocked(v10) )
          {
            v15 = v10->Next;
            if ( *(&v10->Next->Next + 1) != v10
              || (v16 = (struct _SLIST_ENTRY **)*((_QWORD *)&v10->Next + 1), *v16 != v10)
              || (*v16 = v15,
                  *((_QWORD *)&v15->Next + 1) = v16,
                  v10[6].Next = a1,
                  v17 = (struct _SLIST_ENTRY **)qword_1C0081338,
                  *(__int64 **)qword_1C0081338 != &AcpiPowerBlockedOnDependencyList) )
            {
              __fastfail(3u);
            }
            v10->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
            *((_QWORD *)&v10->Next + 1) = v17;
            *v17 = v10;
            qword_1C0081338 = (__int64)v10;
            goto LABEL_11;
          }
        }
        else if ( !v11 )
        {
          goto LABEL_11;
        }
        v7 = 0;
        if ( v12 == 2 )
          goto LABEL_13;
      }
LABEL_11:
      if ( a4 == 1 && !v12 )
LABEL_13:
        ACPIDeviceCompleteRequest(v10);
LABEL_6:
      if ( Next == a1 )
        return v7 == 0 ? 0x103 : 0;
      a2 = v18;
    }
  }
  return v7 == 0 ? 0x103 : 0;
}
