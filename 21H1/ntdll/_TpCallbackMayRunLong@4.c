/*
 * XREFs of _TpCallbackMayRunLong@4 @ 0x4B2E9600
 * Callers:
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 * Callees:
 *     _TppCallbackMayRunLongProlog@20 @ 0x4B2B57AB (_TppCallbackMayRunLongProlog@20.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

NTSTATUS __cdecl TpCallbackMayRunLong(PTP_CALLBACK_INSTANCE Instance)
{
  int MayRunLongProlog; // eax
  NTSTATUS v2; // ecx
  signed __int32 v4; // [esp+4h] [ebp-10h] BYREF
  int WorkerFactoryInformation; // [esp+8h] [ebp-Ch] BYREF
  signed __int32 v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  v7 = 0;
  MayRunLongProlog = TppCallbackMayRunLongProlog(Instance, 1, &v7, &v6, &v4);
  v2 = MayRunLongProlog;
  if ( MayRunLongProlog < 0 )
    return MayRunLongProlog != -1073741637 ? MayRunLongProlog : 0;
  if ( !v6 )
  {
    WorkerFactoryInformation = 1;
    return ZwSetInformationWorkerFactory(*(HANDLE *)(v7 + 36), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
  return v2;
}
