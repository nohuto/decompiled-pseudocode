/*
 * XREFs of sub_1C000C300 @ 0x1C000C300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00046A8 @ 0x1C00046A8 (sub_1C00046A8.c)
 *     sub_1C000ABE0 @ 0x1C000ABE0 (sub_1C000ABE0.c)
 *     sub_1C000B090 @ 0x1C000B090 (sub_1C000B090.c)
 *     sub_1C000B720 @ 0x1C000B720 (sub_1C000B720.c)
 */

__int64 __fastcall sub_1C000C300(PIRP Irp, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  NTSTATUS v7; // ebx
  char *v8; // rax
  char *v9; // rbp
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  v5 = *(_QWORD *)(a2 + 48);
  v6 = CurrentProcess;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = (char *)sub_1C000ABE0(v6);
  P = v8;
  if ( !v8 )
  {
    v7 = sub_1C000B090((__m128 **)&P);
    if ( v7 < 0 )
      goto LABEL_13;
    v8 = (char *)P;
  }
  v9 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v10 = (char *)P;
  *((_QWORD *)v9 + 1) = KeGetCurrentThread();
  if ( *((_QWORD *)v10 + 1) )
    v7 = -1073741790;
  else
    *((_QWORD *)v10 + 1) = v5;
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  if ( v7 < 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C00046A8((__int64)off_1C0007000->AttachedDevice, v11, v12, *((_QWORD *)v10 + 1));
    sub_1C000B720(v10);
  }
  else
  {
    *(_QWORD *)(v5 + 24) = v10;
  }
LABEL_13:
  KeLeaveCriticalRegion();
  Irp->IoStatus.Status = v7;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
