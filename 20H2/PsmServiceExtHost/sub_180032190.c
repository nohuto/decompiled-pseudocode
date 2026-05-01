/*
 * XREFs of sub_180032190 @ 0x180032190
 * Callers:
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     sub_1800117D0 @ 0x1800117D0 (sub_1800117D0.c)
 *     sub_1800267AC @ 0x1800267AC (sub_1800267AC.c)
 *     sub_1800268A8 @ 0x1800268A8 (sub_1800268A8.c)
 *     sub_1800269AC @ 0x1800269AC (sub_1800269AC.c)
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 *     sub_180080934 @ 0x180080934 (sub_180080934.c)
 *     sub_180084040 @ 0x180084040 (sub_180084040.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032190(
        __int64 a1,
        __int64 a2,
        int (__fastcall *a3)(__int64, unsigned __int64, __int64),
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // edi
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // edi
  unsigned __int64 v19; // rax

  RtlAcquireSRWLockExclusive(a1 + 16);
  while ( 2 )
  {
    if ( *(_QWORD *)(a4 + 16) != -1LL )
      __int2c();
    if ( !*(_QWORD *)(a4 + 24) )
      __int2c();
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)a1;
    if ( (v11 & 1) != 0 && v12 )
      v12 ^= a1;
    v13 = v11 & 1;
    if ( !v12 )
    {
LABEL_22:
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *(_QWORD *)a1;
      if ( (v16 & 1) != 0 && v17 )
        v17 ^= a1;
      LOBYTE(v10) = 0;
      v18 = v16 & 1;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( a3(a2, v17, v10) < 0 )
          {
            v19 = *(_QWORD *)v17;
            if ( v18 )
            {
              if ( !v19 )
                goto LABEL_34;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_34:
              LOBYTE(v10) = 0;
              break;
            }
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( v18 )
            {
              if ( !v19 )
                goto LABEL_35;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_35:
              LOBYTE(v10) = 1;
              break;
            }
          }
          v17 = v19;
        }
      }
      RtlRbInsertNodeEx(a1, v17, v10, a4);
      ++*(_DWORD *)(a1 + 40);
      RtlReleaseSRWLockExclusive(a1 + 16);
      RtlWakeAllConditionVariable(a1 + 32);
      *a6 = a4;
      return 0LL;
    }
    while ( 1 )
    {
      v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64))a3)(a2, v12);
      if ( v14 < 0 )
      {
        v15 = *(_QWORD *)v12;
        if ( v13 && v15 )
          goto LABEL_20;
        goto LABEL_12;
      }
      if ( v14 <= 0 )
        break;
      v15 = *(_QWORD *)(v12 + 8);
      if ( v13 && v15 )
      {
LABEL_20:
        v12 ^= v15;
        goto LABEL_13;
      }
LABEL_12:
      v12 = v15;
LABEL_13:
      if ( !v12 )
        goto LABEL_22;
    }
    if ( !*(_QWORD *)(v12 + 24) )
    {
      RtlSleepConditionVariableSRW(a1 + 32, a1 + 16, 0LL, 0LL);
      continue;
    }
    break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
    __fastfail(0xEu);
  *a6 = v12;
  RtlReleaseSRWLockExclusive(a1 + 16);
  return 0LL;
}
