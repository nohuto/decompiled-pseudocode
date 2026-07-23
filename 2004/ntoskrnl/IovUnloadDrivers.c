/*
 * XREFs of IovUnloadDrivers @ 0x1409C22E0
 * Callers:
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ZwDelayExecution @ 0x1403F3C40 (ZwDelayExecution.c)
 *     ObEnumerateObjectsByType @ 0x1408D9DAC (ObEnumerateObjectsByType.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     IovpUnloadDriver @ 0x1409C2A08 (IovpUnloadDriver.c)
 */

__int64 IovUnloadDrivers()
{
  PVOID *v1; // rbx
  unsigned int v2; // r14d
  PVOID *v3; // rdi
  char v4; // bp
  char v5; // dl
  PVOID *v6; // rdi
  PVOID *v7; // rsi
  struct _DMA_ADAPTER *v8; // rcx
  PVOID *v9; // rdi
  struct _DMA_ADAPTER *v10; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  if ( !PopShutdownCleanly )
    return 3221225473LL;
  IovDriverListHead = 0LL;
  v1 = 0LL;
  v2 = ObEnumerateObjectsByType();
  while ( 1 )
  {
    v3 = (PVOID *)IovDriverListHead;
    if ( !IovDriverListHead )
      break;
    IovDriverListHead = *(PVOID *)IovDriverListHead;
    if ( (unsigned int)IovpUnloadDriver(v3[1]) == 259 )
    {
      *v3 = v1;
      v1 = v3;
    }
    else
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  do
  {
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v1;
      if ( !v1 )
        break;
      v8 = (struct _DMA_ADAPTER *)v1[1];
      v1 = (PVOID *)*v1;
      if ( (*(_DWORD *)&v8[1].Version & 1) != 0 )
      {
        HalPutDmaAdapter(v8);
        ExFreePoolWithTag(v7, 0);
        v5 = 1;
      }
      else
      {
        *v7 = v6;
        v6 = v7;
      }
    }
    if ( v5 )
    {
      DelayInterval.QuadPart = -100000000LL;
      ZwDelayExecution(0, &DelayInterval);
      v4 = 1;
    }
    v1 = v6;
  }
  while ( v4 == 1 && v6 );
  while ( 1 )
  {
    v9 = v1;
    if ( !v1 )
      break;
    v10 = (struct _DMA_ADAPTER *)v1[1];
    v1 = (PVOID *)*v1;
    HalPutDmaAdapter(v10);
    ExFreePoolWithTag(v9, 0);
  }
  return v2;
}
