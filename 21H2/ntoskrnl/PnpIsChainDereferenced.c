/*
 * XREFs of PnpIsChainDereferenced @ 0x1403A55B8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14095E6D4 (PipEventRemovalCheckOpenHandles.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     PnpUpdateExtensionFlags @ 0x1403A56D0 (PnpUpdateExtensionFlags.c)
 *     PnpIsAnyDeviceInUse @ 0x1403A56FC (PnpIsAnyDeviceInUse.c)
 *     PnpChainDereferenceComplete @ 0x14080EA40 (PnpChainDereferenceComplete.c)
 */

__int64 __fastcall PnpIsChainDereferenced(_QWORD *a1, int a2, int a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v9; // rbp
  unsigned int IsAnyDeviceInUse; // edi
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  KIRQL v15; // r11
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r10
  _QWORD *v20; // rcx
  __int64 v21; // rcx

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 0LL;
  IsAnyDeviceInUse = 0;
  v11 = KeAcquireQueuedSpinLock(0xAuLL);
  v13 = 0LL;
  v14 = 1LL;
  v15 = v11;
  if ( a2 > 0 )
  {
    v16 = a1;
    while ( 1 )
    {
      a5 = 0LL;
      IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&a1[v13], v12, &a5);
      PnpUpdateExtensionFlags(v18, v17, 1LL, 1LL);
      if ( a3 )
      {
        if ( IsAnyDeviceInUse )
        {
          v9 = a5;
          goto LABEL_16;
        }
      }
      else if ( !IsAnyDeviceInUse )
      {
        KeReleaseQueuedSpinLock(0xAuLL, v15);
        PnpChainDereferenceComplete(*v16, a4);
        v15 = KeAcquireQueuedSpinLock(0xAuLL);
        v14 = 1LL;
      }
      v13 = (unsigned int)(v14 + v13);
      ++v16;
      if ( (int)v13 >= a2 )
      {
        v9 = a5;
        break;
      }
    }
  }
  if ( a3 )
  {
LABEL_16:
    if ( IsAnyDeviceInUse )
    {
      if ( v5 )
        *v5 = v9;
      if ( (int)v13 >= 0 )
      {
        v20 = &a1[(int)v13];
        do
        {
          PnpUpdateExtensionFlags(v20, v12, v14, 0LL);
          v20 = (_QWORD *)(v21 - 8);
          LODWORD(v13) = v13 - v14;
        }
        while ( (int)v13 >= 0 );
      }
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v15);
  if ( !a3 )
    return 1;
  return IsAnyDeviceInUse;
}
