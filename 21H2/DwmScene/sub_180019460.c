/*
 * XREFs of sub_180019460 @ 0x180019460
 * Callers:
 *     sub_180016D1C @ 0x180016D1C (sub_180016D1C.c)
 *     sub_180016EC0 @ 0x180016EC0 (sub_180016EC0.c)
 *     sub_1800170A4 @ 0x1800170A4 (sub_1800170A4.c)
 *     sub_1800195D0 @ 0x1800195D0 (sub_1800195D0.c)
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA @ 0x180125FCD (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@.c)
 *     sub_18012A766 @ 0x18012A766 (sub_18012A766.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019460(_QWORD *a1)
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
        JUMPOUT(0x180019509LL);
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
