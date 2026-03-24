/*
 * XREFs of IoCallDriverWithTracing @ 0x1403538A0
 * Callers:
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 * Callees:
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

NTSTATUS __fastcall IoCallDriverWithTracing(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // r8
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( *(char *)(a2 + 71) < 0 )
    return IofCallDriver(a1, (PIRP)a2);
  v2 = *(_QWORD *)(a2 + 200);
  if ( !v2 || (*(_BYTE *)v2 & 2) == 0 )
    return IofCallDriver(a1, (PIRP)a2);
  v6 = *(_OWORD *)(v2 + 24);
  CurrentThread = KeGetCurrentThread();
  Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v6;
  result = IofCallDriver(a1, (PIRP)a2);
  KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  return result;
}
