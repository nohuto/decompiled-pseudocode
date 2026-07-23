/*
 * XREFs of KdpFillMemory @ 0x1409B8430
 * Callers:
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpFillMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v7; // eax
  __int16 v8; // dx
  int v9; // r15d
  __int64 v10; // r12
  __int64 v11; // rbp
  int v12; // edi
  char *v13; // rsi
  __int64 v14; // rcx
  bool v15; // zf
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = a1;
  v5 = *(unsigned __int16 *)(a1 + 30);
  v7 = 0;
  v17 = 0LL;
  v8 = *(_WORD *)(v4 + 28);
  v9 = 5;
  v10 = v5 + v2;
  v11 = v2;
  v12 = 0;
  if ( (v8 & 2) != 0 )
  {
    v9 = 7;
  }
  else if ( (v8 & 1) == 0 )
  {
    v7 = -1073741811;
  }
  if ( !(_WORD)v5 || *(_WORD *)a2 < (unsigned __int16)v5 )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    v13 = *(char **)(v4 + 16);
    if ( v3 )
    {
      do
      {
        --v3;
        v7 = KdpCopyMemoryChunks(v13, v9, (__int64)&v19);
        if ( v7 < 0 )
          break;
        v14 = v11 + 1;
        ++v13;
        ++v12;
        v15 = v11 + 1 == v10;
        v11 = v2;
        if ( !v15 )
          v11 = v14;
      }
      while ( v3 );
      if ( v12 )
        v7 = 0;
      v4 = a1;
    }
  }
  *(_DWORD *)(v4 + 8) = v7;
  *(_DWORD *)(v4 + 24) = v12;
  LOWORD(v17) = 56;
  *((_QWORD *)&v17 + 1) = v4;
  return KdSendPacket(2LL, &v17, 0LL, &KdpContext);
}
