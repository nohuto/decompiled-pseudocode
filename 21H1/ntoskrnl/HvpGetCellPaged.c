/*
 * XREFs of HvpGetCellPaged @ 0x14069E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpGetCellPaged(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v7; // r10
  unsigned int v8; // r8d
  unsigned __int64 result; // rax

  if ( HvShutdownComplete == 1 )
    return 0LL;
  v4 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(632LL * (a2 >> 31) + a1 + 280) + 8LL * ((a2 >> 21) & 0x3FF))
                + 24LL * ((a2 >> 12) & 0x1FF));
  v5 = v4[1];
  *(_WORD *)(a3 + 4) |= 1u;
  CurrentThread = KeGetCurrentThread();
  v7 = *v4 + (v5 & 0xFFFFFFFFFFFFFFF0uLL) + (a2 & 0xFFF);
  LODWORD(v4) = BYTE4(CurrentThread[1].Queue);
  LODWORD(v5) = CurrentThread[1].WaitListEntry.Flink;
  BYTE4(CurrentThread[1].Queue) = 2;
  v8 = (_DWORD)v4 + 4 * v5;
  BYTE4(CurrentThread[1].Queue) = ((_BYTE)v4 + 4 * v5) & 3;
  result = v7 + 4;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v8 >> 2;
  *(_DWORD *)a3 = a2;
  return result;
}
