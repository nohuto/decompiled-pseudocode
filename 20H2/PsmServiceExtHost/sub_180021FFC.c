/*
 * XREFs of sub_180021FFC @ 0x180021FFC
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180022120 @ 0x180022120 (sub_180022120.c)
 *     sub_1800337A4 @ 0x1800337A4 (sub_1800337A4.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180021FFC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rdi
  int v6; // ebx
  PVOID v7; // r15
  _QWORD *v8; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // r12
  HANDLE *v11; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  PVOID P[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+98h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v3 = a1;
  *(_OWORD *)P = 0LL;
  v4 = sub_180022120(a1, 4096LL, 1LL, P);
  LODWORD(v5) = v17;
  v6 = v4;
  v7 = P[1];
  if ( v4 >= 0 )
  {
    if ( (_DWORD)v17 )
    {
      v8 = P[0];
      v9 = (unsigned int *)P[1];
      v10 = (unsigned int)v17;
      do
      {
        sub_1800337A4(a1, *v8++, *v9++, a2);
        --v10;
      }
      while ( v10 );
      v7 = P[1];
      v3 = a1;
    }
    v6 = 0;
  }
  if ( (_DWORD)v5 )
  {
    v11 = (HANDLE *)P[0];
    v5 = (unsigned int)v5;
    do
    {
      NtClose(*v11++);
      --v5;
    }
    while ( v5 );
  }
  if ( P[0] )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    v7 = P[1];
  }
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v20 = *(_QWORD *)(v3 + 32);
      v19 = v6;
      sub_180063424(v13, (unsigned int)&unk_18009EF0E, v14, v15, (__int64)&v19, (__int64)&v20);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
