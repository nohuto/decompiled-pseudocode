/*
 * XREFs of CrmStateMonitorPostShellReadyUsageCallback @ 0x18002B440
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadyUsageCallback(__int64 a1, int a2, int *a3)
{
  int v3; // ebp
  __int64 v4; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // ecx
  _DWORD *v8; // rax
  int v9; // eax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a3;
  v4 = 88LL;
  if ( a2 != 24 )
    v4 = 112LL;
  v6 = (_DWORD *)(a1 - v4);
  RtlAcquireSRWLockExclusive(a1 - v4 + 8);
  v6[4] = GetCurrentThreadId();
  if ( a2 == 24 )
    v6[(v6[40]++ & 3) + 36] = v3;
  else
    v6[(v6[45]++ & 3) + 41] = v3;
  if ( v6[40] < 4u || v6[45] < 4u )
  {
    v9 = 0;
LABEL_12:
    v11 = v9;
    if ( v9 )
      CrmStateMonitorStateSet(v6, &v11, 4LL);
  }
  else
  {
    v7 = 0;
    v8 = v6 + 41;
    while ( *(v8 - 5) <= 0x1Eu && *v8 <= 0x1Eu )
    {
      ++v7;
      ++v8;
      if ( v7 >= 4 )
      {
        v9 = 1;
        goto LABEL_12;
      }
    }
    v11 = 0;
  }
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
