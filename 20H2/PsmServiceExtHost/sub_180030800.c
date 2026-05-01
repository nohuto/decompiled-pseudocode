/*
 * XREFs of sub_180030800 @ 0x180030800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E4C8 @ 0x18002E4C8 (sub_18002E4C8.c)
 *     sub_18002EB18 @ 0x18002EB18 (sub_18002EB18.c)
 *     sub_18002ECF0 @ 0x18002ECF0 (sub_18002ECF0.c)
 *     sub_18002F9A8 @ 0x18002F9A8 (sub_18002F9A8.c)
 *     sub_180030A10 @ 0x180030A10 (sub_180030A10.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030800(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // r15d
  int v9; // eax
  int v10; // r14d
  int v11; // edi
  int v12; // ebp
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+A0h] [rbp+8h]
  __int64 v19; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = 0LL;
  v16 = *(_QWORD *)(v3 + 48);
  v17 = *(_DWORD *)(v3 + 60);
  v19 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL);
  RtlAcquireSRWLockExclusive(v3 + 72);
  *(_DWORD *)(v3 + 80) = GetCurrentThreadId();
  v8 = *(_DWORD *)(a1 + 48);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 40))(0LL, a3);
  v10 = v9;
  if ( v9 == v8 )
  {
    v11 = *(_DWORD *)(v3 + 92);
    v12 = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v9;
    RtlAcquireSRWLockShared(*(_QWORD *)(v3 + 40));
    if ( *(_DWORD *)(v3 + 128) || *(_DWORD *)(v3 + 132) )
      sub_18002E4C8(*(_QWORD *)(v3 + 40), v3);
    RtlReleaseSRWLockShared(*(_QWORD *)(v3 + 40));
    v11 = *(_DWORD *)(v3 + 92);
    if ( v10 )
      v12 = v11 + 1;
    else
      v12 = v11 - 1;
    v14 = *(_DWORD *)(v3 + 88);
    *(_DWORD *)(v3 + 92) = v12;
    if ( v12 == v14 || v11 == v14 )
    {
      v7 = *(_QWORD *)(v3 + 112);
      v6 = MEMORY[0x7FFE0008];
      v15 = *(_DWORD *)(v3 + 88);
      *(_QWORD *)(v3 + 112) = MEMORY[0x7FFE0008];
      if ( v12 == v15 )
      {
        RtlQueryUnbiasedInterruptTime(v3 + 144);
        *(_QWORD *)(v3 + 152) = MEMORY[0x7FFE0008];
        sub_18002ECF0(v3, 0);
        sub_18002EB18(*(_QWORD *)(v3 + 40), v3);
        v15 = *(_DWORD *)(v3 + 88);
      }
      if ( v11 == v15 )
      {
        *(_QWORD *)(v3 + 144) = -1LL;
        *(_QWORD *)(v3 + 152) = -1LL;
        sub_18002ECF0(v3, 1);
        sub_18002F9A8(*(_QWORD *)(v3 + 40), v3, 1);
      }
    }
  }
  *(_DWORD *)(v3 + 80) = 0;
  RtlReleaseSRWLockExclusive(v3 + 72);
  return sub_180030A10(v16, v17, v19, a2, v8, v10, v11, v12, v7, v6);
}
