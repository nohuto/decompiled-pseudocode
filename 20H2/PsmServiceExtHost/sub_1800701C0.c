/*
 * XREFs of sub_1800701C0 @ 0x1800701C0
 * Callers:
 *     sub_180069868 @ 0x180069868 (sub_180069868.c)
 * Callees:
 *     sub_18006E004 @ 0x18006E004 (sub_18006E004.c)
 *     sub_18006E160 @ 0x18006E160 (sub_18006E160.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_18006E670 @ 0x18006E670 (sub_18006E670.c)
 *     sub_18006F39C @ 0x18006F39C (sub_18006F39C.c)
 */

__int64 __fastcall sub_1800701C0(_DWORD *a1, void *a2)
{
  _DWORD *v2; // rbp
  volatile signed __int64 *v5; // rbx
  unsigned int v6; // edi
  DWORD ProcessId; // eax
  __int64 v8; // rax
  _QWORD *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 18;
  v5 = 0LL;
  RtlAcquireSRWLockExclusive(a1 + 18);
  a1[20] = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2712LL) & 1) != 0 )
  {
    v6 = -1073741077;
LABEL_5:
    a1[20] = 0;
    RtlReleaseSRWLockExclusive(v2);
    goto LABEL_7;
  }
  ProcessId = GetProcessId(a2);
  v8 = sub_18006E670((__int64)a1, ProcessId);
  v5 = (volatile signed __int64 *)v8;
  if ( !v8 )
  {
    v6 = -1073741275;
    goto LABEL_5;
  }
  sub_18006E160(v8, v10);
  sub_18006F39C(v5);
  a1[20] = 0;
  RtlReleaseSRWLockExclusive(v2);
  sub_18006E004(v5);
  sub_18006E3C8(v10);
  v6 = 0;
LABEL_7:
  if ( v5 )
    sub_18006E348(v5);
  return v6;
}
