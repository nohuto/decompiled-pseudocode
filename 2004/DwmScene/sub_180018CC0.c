/*
 * XREFs of sub_180018CC0 @ 0x180018CC0
 * Callers:
 *     sub_180016ADC @ 0x180016ADC (sub_180016ADC.c)
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 *     sub_180018D6C @ 0x180018D6C (sub_180018D6C.c)
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA @ 0x1801206FD (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@.c)
 *     sub_180124E4E @ 0x180124E4E (sub_180124E4E.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018CC0(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = (volatile signed __int32 *)a1[10];
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = a1[6];
  if ( v4 )
  {
    v5 = (a1[8] - v4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x180018D69LL);
      }
      v4 = v6;
    }
    result = j_j__o_free(v4);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return result;
}
