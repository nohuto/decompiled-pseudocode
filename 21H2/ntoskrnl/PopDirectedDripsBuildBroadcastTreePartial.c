/*
 * XREFs of PopDirectedDripsBuildBroadcastTreePartial @ 0x1408F8E50
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E34AC (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x1408F6C98 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagBroadcastTreeEnd @ 0x1408F6E18 (PopDirectedDripsDiagBroadcastTreeEnd.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408F8C20 (PopDirectedDripsBuildBroadcastTreeFull.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreePartial(__int64 a1, char a2, _DWORD *a3)
{
  char v3; // r15
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = 0;
  v12 = 0;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) == 0 )
  {
    PopDirectedDripsDiagBroadcastTreeBegin(a1, a2, &v13);
    v8 = 0;
    v9 = a1;
    while ( (*(_DWORD *)(v9 + 760) & 2) != 0 )
    {
      if ( !*(_QWORD *)(v9 + 8) || (*(_DWORD *)(v9 + 760) & 4) != 0 )
        goto LABEL_7;
      v9 = *(_QWORD *)(v9 + 8);
LABEL_16:
      if ( v9 == a1 )
      {
LABEL_17:
        *a3 |= v12;
        v7 = v8 == 0 ? 0xC00000BB : 0;
        goto LABEL_18;
      }
    }
    v10 = PopDirectedDripsBuildBroadcastTreeFull(v9, v13, a2, &v12);
    v7 = v10;
    if ( v10 >= 0 )
    {
      ++v8;
    }
    else
    {
      v3 = 1;
      if ( v10 != -1073741637 )
        goto LABEL_18;
    }
LABEL_7:
    if ( v9 == a1 )
      goto LABEL_17;
    while ( !*(_QWORD *)v9 )
    {
      v9 = *(_QWORD *)(v9 + 16);
      if ( v9 == a1 )
        goto LABEL_16;
    }
    v9 = *(_QWORD *)v9;
    goto LABEL_16;
  }
  v7 = 0;
LABEL_18:
  PopDirectedDripsDiagBroadcastTreeEnd(v13, v7, v12, v3);
  return v7;
}
