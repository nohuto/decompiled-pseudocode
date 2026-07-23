/*
 * XREFs of EtwpGetPidDemuxList @ 0x14093F310
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F380 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PidNodeCompare @ 0x14093FAF0 (PidNodeCompare.c)
 */

unsigned __int64 __fastcall EtwpGetPidDemuxList(int a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v2 )
    v2 ^= a2;
  v3 = *(_BYTE *)(a2 + 8) & 1;
  while ( v2 )
  {
    v4 = PidNodeCompare(&v7, v2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        return v2;
      v5 = *(_QWORD *)(v2 + 8);
    }
    else
    {
      v5 = *(_QWORD *)v2;
    }
    if ( v3 && v5 )
      v2 ^= v5;
    else
      v2 = v5;
  }
  return v2;
}
