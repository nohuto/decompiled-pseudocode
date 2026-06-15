/*
 * XREFs of sub_1800286E8 @ 0x1800286E8
 * Callers:
 *     sub_180028C94 @ 0x180028C94 (sub_180028C94.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18002AE20 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_1800286E8(__int64 a1, void *a2)
{
  __int64 *v2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rdx

  v2 = *(__int64 **)(a1 + 16);
  v3 = 0;
  v4 = 0LL;
  do
  {
    v6 = v2;
    if ( !v2 )
      break;
    v4 = (void *)v2[2];
    v2 = (__int64 *)*v2;
  }
  while ( v4 != a2 );
  if ( v6 )
  {
    v7 = *v6;
    if ( v6 == *(__int64 **)(a1 + 16) )
      *(_QWORD *)(a1 + 16) = v7;
    else
      *(_QWORD *)v6[1] = v7;
    v8 = (_QWORD *)v6[1];
    if ( v6 == *(__int64 **)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = v8;
    else
      *(_QWORD *)(*v6 + 8) = v8;
    --*(_DWORD *)(a1 + 32);
    *v6 = 0LL;
    v6[1] = 0LL;
    sub_180039D98(v6);
    sub_180039D98(v4);
  }
  else
  {
    return 1168;
  }
  return v3;
}
