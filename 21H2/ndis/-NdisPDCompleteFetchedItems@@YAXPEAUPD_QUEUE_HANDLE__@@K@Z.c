/*
 * XREFs of ?NdisPDCompleteFetchedItems@@YAXPEAUPD_QUEUE_HANDLE__@@K@Z @ 0x1C007CC10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDCompleteFetchedItems(struct PD_QUEUE_HANDLE__ *a1, unsigned int a2)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // eax

  v3 = *((_DWORD *)a1 + 33);
  v4 = *((_DWORD *)a1 + 13);
  v5 = v4 & (*((_DWORD *)a1 + 34) - v3);
  if ( a2 < v5 )
    v5 = a2;
  *((_DWORD *)a1 + 33) = v4 & (v3 + v5);
  if ( *((_QWORD *)a1 + 4) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 32, 0, 1) == 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Du,
          0x63u,
          (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
          a1);
    }
    KeSetEvent(*((PRKEVENT *)a1 + 4), 2, 0);
  }
}
