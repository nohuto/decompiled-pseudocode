/*
 * XREFs of sub_180036240 @ 0x180036240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023148 @ 0x180023148 (sub_180023148.c)
 *     sub_1800369E4 @ 0x1800369E4 (sub_1800369E4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180036240(__int64 a1)
{
  signed __int32 v2; // edi
  signed __int32 v3; // r8d
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 248) + 8LL))(
         *(_QWORD *)(a1 + 248),
         0LL,
         0LL,
         a1 + 272);
  if ( v2 < 0 )
    goto LABEL_13;
  v4 = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v6 = *(unsigned int *)(a1 + 308);
  v7 = *(unsigned int *)(a1 + 304);
  *(_DWORD *)(a1 + 312) = CurrentThreadId;
  v2 = SHTaskPoolQueueTask(v7, v6, CurrentThreadId, 0LL, (a1 + 192) & -(__int64)(a1 != 8), 0LL);
  if ( v2 < 0 )
  {
    if ( *(_DWORD *)(a1 + 240) )
    {
      sub_180023148(a1, v2, v3);
      v2 = 0;
    }
    else
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 248)) != 1 )
        goto LABEL_12;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v4 + 256) + 8LL))(
             *(_QWORD *)(v4 + 256),
             1LL,
             (unsigned int)v2,
             v4 + 280);
      if ( v8 >= 0 && *(_BYTE *)(v4 + 289) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 272), 0xFFFFFFFF) != 1 )
          goto LABEL_12;
        v9 = *(unsigned int *)(v4 + 276);
      }
      else
      {
        v9 = (unsigned int)v8;
      }
      sub_1800369E4(a1 - 8, v9);
    }
LABEL_12:
    if ( v2 < 0 )
LABEL_13:
      sub_180023148(a1, v2, v3);
  }
  return (unsigned int)v2;
}
