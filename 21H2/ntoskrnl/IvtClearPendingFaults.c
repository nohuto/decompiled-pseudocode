/*
 * XREFs of IvtClearPendingFaults @ 0x1404DFBC8
 * Callers:
 *     IvtEnableInterrupt @ 0x1409AA810 (IvtEnableInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtClearPendingFaults(__int64 a1)
{
  int v1; // r11d
  __int64 v2; // rax
  int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v7; // r11d
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 181);
  v2 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  v4 = *(_DWORD *)(v2 + 52);
  v5 = *(_QWORD *)(a1 + 8) + 16 * ((*(_QWORD *)(a1 + 176) >> 24) & 0x3FFLL);
  v6 = 0;
  v7 = v1 + 1;
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)(v5 + 16LL * ((v6 + BYTE1(v4)) % v7) + 8);
      *((_QWORD *)&v10 + 1) = v8;
      if ( v8 >= 0 )
        break;
      *(_QWORD *)(v5 + 16LL * ((v6 + BYTE1(v4)) % v7) + 8) = v8;
      _InterlockedOr((volatile signed __int32 *)&v10, 0);
      ++v6;
    }
    while ( v6 < v7 );
  }
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 52) = v4 | 1;
  _InterlockedOr((volatile signed __int32 *)&v10, 0);
  return result;
}
