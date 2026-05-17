/*
 * XREFs of LdrpInitializeProcessHeap @ 0x1800D400C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtOpenPartition @ 0x18009FB10 (NtOpenPartition.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpInitializeProcessHeap(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  _QWORD *v15; // rax
  char v16; // al
  __int64 v18; // [rsp+30h] [rbp-D0h]
  _QWORD v19[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[12]; // [rsp+C0h] [rbp-40h] BYREF

  memset((char *)v20 + 4, 0, 0x5CuLL);
  LODWORD(v20[0]) = 96;
  v6 = 2;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 >= 0x4Cu )
    {
      v7 = *(_DWORD *)(a1 + 72);
      if ( v7 )
      {
        v8 = v7 & 0xFFFF0FFF;
        if ( v8 )
          v6 = v8;
      }
    }
    if ( *(_DWORD *)a1 >= 0x20u )
    {
      v9 = v20[3];
      if ( *(_QWORD *)(a1 + 24) )
        v9 = *(_QWORD *)(a1 + 24);
      v20[3] = v9;
    }
    if ( *(_DWORD *)a1 >= 0x28u )
    {
      v10 = v20[4];
      if ( *(_QWORD *)(a1 + 32) )
        v10 = *(_QWORD *)(a1 + 32);
      v20[4] = v10;
    }
    if ( *(_DWORD *)a1 >= 0x38u )
    {
      v11 = v20[5];
      if ( *(_QWORD *)(a1 + 48) )
        v11 = *(_QWORD *)(a1 + 48);
      v20[5] = v11;
    }
    if ( *(_DWORD *)a1 >= 0x40u )
    {
      v12 = v20[6];
      if ( *(_QWORD *)(a1 + 56) )
        v12 = *(_QWORD *)(a1 + 56);
      v20[6] = v12;
    }
  }
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 112);
    v14 = *(_QWORD *)(a2 + 120);
  }
  v15 = v20;
  if ( *(_QWORD *)(a3 + 1064) )
  {
    if ( (int)NtOpenPartition() < 0 )
    {
      v16 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7344,
          "LdrpInitializeProcessHeap",
          0,
          "Cannot open partition.");
        v16 = LdrpDebugFlags;
      }
      if ( (v16 & 0x10) != 0 )
        __debugbreak();
      return 0LL;
    }
    v6 = 258;
    memset(v19, 0, sizeof(v19));
    v13 = 0LL;
    LODWORD(v19[2]) = -1;
    v19[3] = v18;
    v14 = 0LL;
    v15 = v19;
    LODWORD(v19[0]) = 5242882;
    HIDWORD(v19[1]) = 4;
  }
  if ( UseWOW64 || *(_WORD *)(a2 + 24) == 267 )
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  else if ( *(_WORD *)(a2 + 72) <= 3u && *(_WORD *)(a2 + 74) < 0x33u )
  {
    v6 |= 0x10000u;
  }
  return RtlCreateHeap(v6, 0LL, v13, v14, 0LL, (__int64)v15);
}
