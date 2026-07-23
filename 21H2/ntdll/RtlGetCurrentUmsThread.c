/*
 * XREFs of RtlGetCurrentUmsThread @ 0x180059F10
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F7240 (RtlEnterUmsSchedulingMode.c)
 *     RtlExecuteUmsThread @ 0x1800F7320 (RtlExecuteUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCurrentUmsThread(struct _TEB ***a1)
{
  struct _TEB *v1; // r8
  __int64 result; // rax
  struct _TEB **v3; // rdx

  if ( a1 )
  {
    v1 = NtCurrentTeb();
    result = 0LL;
    v3 = (struct _TEB **)v1->TlsSlots[4];
    if ( v3 )
    {
      if ( v3[156] == v1 )
        goto LABEL_6;
      v3 = 0LL;
    }
    result = 3221225659LL;
LABEL_6:
    *a1 = v3;
    return result;
  }
  return 3221225485LL;
}
