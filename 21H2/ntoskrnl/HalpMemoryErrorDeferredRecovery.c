/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x14051C2D8
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x14050E73C (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpGhesMemoryErrorHandler @ 0x14051C1B8 (HalpGhesMemoryErrorHandler.c)
 *     HalpMceRecoveryNotRequiredAmd @ 0x14051CB78 (HalpMceRecoveryNotRequiredAmd.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x14051CBE4 (HalpMceRecoveryNotRequiredIntel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x14050F040 (HalpHvSetMachineCheckRecoveryState.c)
 *     HalpAcquireDrsPool @ 0x14051BF88 (HalpAcquireDrsPool.c)
 *     HalpFreeDrsPool @ 0x14051C060 (HalpFreeDrsPool.c)
 *     WheaRequestDeferredRecovery @ 0x140645B10 (WheaRequestDeferredRecovery.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredRecovery(
        __int64 a1,
        char a2,
        __int64 a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // eax

  v12 = HalpAcquireDrsPool();
  if ( v12 )
  {
    if ( !HalpHvWheaEnlightenedCpuManager )
    {
LABEL_12:
      *(_WORD *)(v12 + 58) = a5;
      *(_BYTE *)(v12 + 60) = a6;
      *(_BYTE *)(v12 + 61) = a7;
      *(_QWORD *)(v12 + 48) = a1;
      *(_BYTE *)(v12 + 62) = a8 & 1;
      *(_BYTE *)(v12 + 56) = a2;
      *(_QWORD *)(v12 + 64) = a3;
      *(_DWORD *)(v12 + 72) = a4;
      *(_DWORD *)(v12 + 76) = 1;
      if ( (unsigned __int8)WheaRequestDeferredRecovery(v12 + 8, v12 + 48) )
        return 0;
      HalpFreeDrsPool((_DWORD *)v12);
      return (unsigned int)-1073741757;
    }
    if ( a3 )
    {
      if ( !qword_140C4C500 )
      {
        v13 = -1073741823;
        goto LABEL_10;
      }
      v14 = qword_140C4C500(a3);
    }
    else
    {
      v14 = HalpHvSetMachineCheckRecoveryState(1);
    }
    v13 = v14;
LABEL_10:
    if ( v13 < 0 )
    {
      HalpFreeDrsPool((_DWORD *)v12);
      return (unsigned int)v13;
    }
    goto LABEL_12;
  }
  return (unsigned int)-1073741757;
}
