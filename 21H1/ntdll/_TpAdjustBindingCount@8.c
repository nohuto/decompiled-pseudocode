/*
 * XREFs of _TpAdjustBindingCount@8 @ 0x4B2B48DF
 * Callers:
 *     _TppTimerpFree@4 @ 0x4B2B1F30 (_TppTimerpFree@4.c)
 *     _TppFreeWait@4 @ 0x4B2B24C0 (_TppFreeWait@4.c)
 *     _TppInitializeTimer@24 @ 0x4B2B4877 (_TppInitializeTimer@24.c)
 *     _TpBindFileToDirect@12 @ 0x4B2E713D (_TpBindFileToDirect@12.c)
 *     _TppIopFree@4 @ 0x4B2E71A0 (_TppIopFree@4.c)
 *     _TppAlpcpFree@4 @ 0x4B2E99B0 (_TppAlpcpFree@4.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 *     _TppJobpFree@4 @ 0x4B383990 (_TppJobpFree@4.c)
 *     _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E (_RtlpTpIoDllProcessUnloads@8.c)
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

void __fastcall TpAdjustBindingCount(int a1, unsigned int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int WorkerFactoryInformation; // [esp+0h] [ebp-4h] BYREF

  WorkerFactoryInformation = a1;
  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 264), a2);
    v3 = v2 + a2;
    if ( v2 <= 0 )
    {
      if ( v3 <= 0 )
        return;
      v4 = 1;
    }
    else
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
    }
    WorkerFactoryInformation = v4;
    ZwSetInformationWorkerFactory(*(HANDLE *)(a1 + 36), WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
  }
}
