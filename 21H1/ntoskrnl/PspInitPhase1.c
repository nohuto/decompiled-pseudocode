/*
 * XREFs of PspInitPhase1 @ 0x140A60C8C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     PsInitSystem @ 0x140A3F0F4 (PsInitSystem.c)
 * Callees:
 *     strcpy_s @ 0x1403D3930 (strcpy_s.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x1404F7984 (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140A61018 (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140A61078 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140A610D0 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140A61130 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x140A61190 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140A611E8 (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x140A61240 (PspInitializeNetRateControl.c)
 */

bool PspInitPhase1()
{
  NTSTATUS inserted; // eax
  int v1; // ecx
  bool result; // al
  NTSTATUS v3; // eax
  HANDLE v4; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  inserted = ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle);
  v1 = 0;
  if ( inserted < 0 )
    v1 = inserted;
  if ( v1 < 0 )
    KeBugCheck(0x60u);
  result = 0;
  if ( (unsigned __int8)PspInitializeNetRateControl() )
  {
    if ( (int)PspInitializeBackgroundActivityModeratorCallouts() >= 0
      && (int)PspInitializeDesktopActivityModeratorCallouts() >= 0
      && (int)PspInitializeMMCSSCallouts() >= 0
      && (int)PspInitializeHwTraceCallouts() >= 0
      && (int)PspInitializeOctagonExtensionHost() >= 0
      && (int)PspInitializeSecExtensionHost() >= 0 )
    {
      if ( !VslVsmEnabled )
        return 1;
      v4 = 0LL;
      if ( (int)PsCreateMinimalProcess(
                  PsInitialSystemProcess,
                  0LL,
                  0LL,
                  BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                  0LL,
                  0,
                  0,
                  0LL,
                  0LL,
                  &v4) >= 0 )
      {
        Object = 0LL;
        v3 = ObReferenceObjectByHandle(v4, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PsSecureSystemProcess = (ULONG_PTR)Object;
        if ( v3 >= 0 )
        {
          strcpy_s((char *)Object + 1448, 0xFuLL, "Secure System");
          if ( VslRegisterSecureSystemProcess() >= 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
