/*
 * XREFs of StorEtwMiniportEventProxy @ 0x1C0036FA0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C00191FC (RaidNtStatusToStorStatus.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     StorEtwMiniportEvent @ 0x1C004EC28 (StorEtwMiniportEvent.c)
 */

__int64 __fastcall StorEtwMiniportEventProxy(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  __int64 v12; // r14
  int v13; // r15d
  int v14; // r12d
  __int64 *v15; // rdi
  __int64 v16; // r13
  unsigned int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // rax
  int v20; // eax
  _QWORD v22[8]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v23[64]; // [rsp+A0h] [rbp-88h] BYREF

  memset(v22, 0, sizeof(v22));
  v6 = 0LL;
  v7 = **(_QWORD **)(a1 - 16);
  if ( !v7 )
    return 3238002694LL;
  v8 = *a3;
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a3 + 4);
  v11 = a3[3];
  v12 = a3[4];
  v13 = *((_DWORD *)a3 + 10);
  v14 = *((_DWORD *)a3 + 12);
  v15 = a3 + 8;
  v16 = *(v15 - 1);
  if ( a2 == 58 || a2 == 85 )
  {
    v17 = 2;
  }
  else if ( a2 == 59 || a2 == 86 )
  {
    v17 = 4;
  }
  else
  {
    v17 = 8;
  }
  v18 = v17;
  do
  {
    v19 = *v15;
    v15 += 2;
    v22[v6++] = v19;
    v22[v6 + 7] = *(v15 - 1);
    --v18;
  }
  while ( v18 );
  v20 = StorEtwMiniportEvent(v7, v8, v9, v10, v11, v12, v13, v14, v16, v17, (__int64)v22, (__int64)v23);
  return RaidNtStatusToStorStatus(v20);
}
