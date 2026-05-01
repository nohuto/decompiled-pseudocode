/*
 * XREFs of sub_18006EEBC @ 0x18006EEBC
 * Callers:
 *     sub_180069190 @ 0x180069190 (sub_180069190.c)
 * Callees:
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006E670 @ 0x18006E670 (sub_18006E670.c)
 *     sub_18006EC84 @ 0x18006EC84 (sub_18006EC84.c)
 */

__int64 __fastcall sub_18006EEBC(_DWORD *a1, void *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  DWORD ProcessId; // eax
  __int64 v7; // rax
  char v8; // al

  v4 = 0LL;
  RtlAcquireSRWLockExclusive(a1 + 18);
  a1[20] = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2712LL) & 1) != 0 )
  {
    v5 = -1073741077;
  }
  else
  {
    ProcessId = GetProcessId(a2);
    v7 = sub_18006E670((__int64)a1, ProcessId);
    v4 = v7;
    if ( v7 )
    {
      v8 = *(_BYTE *)(v7 + 170);
      if ( (v8 & 4) != 0 )
      {
        *(_BYTE *)(v4 + 170) = v8 & 0xFB;
        sub_18006EC84((__int64)a1);
        v5 = 0;
      }
      else
      {
        v5 = -1073741584;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  a1[20] = 0;
  RtlReleaseSRWLockExclusive(a1 + 18);
  if ( v4 )
    sub_18006E348((volatile signed __int64 *)v4);
  return v5;
}
