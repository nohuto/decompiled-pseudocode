/*
 * XREFs of PspInitPhase1 @ 0x140A654A0
 * Callers:
 *     PsInitSystem @ 0x140A4ABB8 (PsInitSystem.c)
 * Callees:
 *     strcpy_s @ 0x1403D7400 (strcpy_s.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x1404FB864 (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1407096B0 (ObInsertObject.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140A6582C (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140A6588C (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140A658E4 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140A65944 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x140A659A4 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140A659FC (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x140A65A54 (PspInitializeNetRateControl.c)
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
