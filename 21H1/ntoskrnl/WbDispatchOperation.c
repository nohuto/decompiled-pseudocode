/*
 * XREFs of WbDispatchOperation @ 0x14065ECA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     WbDecryptEncryptionSegment @ 0x1405CC650 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CC714 (WbReEncryptEncryptionSegment.c)
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     sub_14065EE88 @ 0x14065EE88 (sub_14065EE88.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 *     WbAlloc @ 0x14065F1C8 (WbAlloc.c)
 *     sub_14065F224 @ 0x14065F224 (sub_14065F224.c)
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 *     WbProcessModuleUnload @ 0x1406D53C8 (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x1406ED048 (WbProcessStartup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbDispatchOperation(char *Src, SIZE_T NumberOfBytes)
{
  size_t v2; // rsi
  char *v4; // rax
  int WarbirdProcess; // ebx
  int *v6; // rbx
  int v7; // eax
  BOOL v8; // ebx
  HANDLE ProcessId; // rax
  int v10; // eax
  int v12; // [rsp+28h] [rbp-30h]
  __int64 *v13; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h]

  v2 = (unsigned int)NumberOfBytes;
  v13 = 0LL;
  P = 0LL;
  if ( Src )
  {
    if ( (unsigned int)NumberOfBytes < 8 )
    {
      WarbirdProcess = -1073741811;
      goto LABEL_18;
    }
    v4 = &Src[(unsigned int)NumberOfBytes];
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
    WarbirdProcess = WbAlloc((unsigned int)NumberOfBytes);
    if ( WarbirdProcess < 0 )
      goto LABEL_18;
    v6 = (int *)P;
    memmove(P, Src, v2);
    v7 = *v6;
    v12 = *v6;
  }
  else
  {
    v7 = 4;
    v12 = 4;
  }
  v8 = v7 != 7;
  ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  WarbirdProcess = WbGetWarbirdProcess(ProcessId, v8, &v13);
  if ( WarbirdProcess < 0 )
    goto LABEL_18;
  switch ( v12 )
  {
    case 1:
      v10 = WbDecryptEncryptionSegment((__int64)v13, (__int64)P, (unsigned int)v2);
      goto LABEL_17;
    case 2:
      v10 = WbReEncryptEncryptionSegment((__int64)v13, (__int64)P, (unsigned int)v2);
      goto LABEL_17;
    case 3:
      v10 = WbHeapExecuteCall(v13, P, Src, (unsigned int)v2);
      goto LABEL_17;
    case 4:
      if ( !P )
      {
        v10 = sub_14065F224(v13);
LABEL_17:
        WarbirdProcess = v10;
        goto LABEL_18;
      }
      break;
    case 5:
    case 6:
      WarbirdProcess = Src != 0LL ? -1073741822 : -1073741811;
      goto LABEL_18;
    case 7:
      v10 = WbRemoveWarbirdProcess(*v13);
      goto LABEL_17;
    case 8:
      v10 = WbProcessStartup(v13, P, (unsigned int)v2);
      goto LABEL_17;
    case 9:
      v10 = WbProcessModuleUnload(v13, P, (unsigned int)v2);
      goto LABEL_17;
  }
  WarbirdProcess = -1073741811;
LABEL_18:
  sub_14065EE88(v13);
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)WarbirdProcess;
}
