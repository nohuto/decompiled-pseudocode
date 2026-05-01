/*
 * XREFs of sub_180033D80 @ 0x180033D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034538 @ 0x180034538 (sub_180034538.c)
 *     sub_1800348FC @ 0x1800348FC (sub_1800348FC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033D80(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 248) + 8LL))(
         *(_QWORD *)(a1 + 248),
         0LL,
         0LL,
         a1 + 272);
  if ( v2 < 0 )
    goto LABEL_13;
  v3 = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v5 = *(unsigned int *)(a1 + 300);
  v6 = *(unsigned int *)(a1 + 296);
  *(_DWORD *)(a1 + 304) = CurrentThreadId;
  v2 = SHTaskPoolQueueTask(v6, v5, CurrentThreadId, 0LL, (a1 + 192) & -(__int64)(a1 != 8), 0LL);
  if ( v2 < 0 )
  {
    if ( *(_DWORD *)(a1 + 240) )
    {
      sub_180034538(a1, (unsigned int)v2);
      v2 = 0;
    }
    else
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 248)) != 1 )
        goto LABEL_12;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v3 + 256) + 8LL))(
             *(_QWORD *)(v3 + 256),
             1LL,
             (unsigned int)v2,
             v3 + 280);
      if ( v7 >= 0 && *(_BYTE *)(v3 + 289) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 272), 0xFFFFFFFF) != 1 )
          goto LABEL_12;
        v8 = *(unsigned int *)(v3 + 276);
      }
      else
      {
        v8 = (unsigned int)v7;
      }
      sub_1800348FC(a1 - 8, v8);
    }
LABEL_12:
    if ( v2 < 0 )
LABEL_13:
      sub_180034538(a1, (unsigned int)v2);
  }
  return (unsigned int)v2;
}
