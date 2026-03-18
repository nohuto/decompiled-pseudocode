/*
 * XREFs of IopAllocateIrpExtension @ 0x14020C420
 * Callers:
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     IopSetDiskIoAttributionExtension @ 0x14020C178 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x14020C21C (IopSetDriverFlagsExtension.c)
 *     IoPropagateIrpExtensionEx @ 0x14020C270 (IoPropagateIrpExtensionEx.c)
 *     IoSetGenericIrpExtension @ 0x140387790 (IoSetGenericIrpExtension.c)
 *     IopSetCopyInformationExtension @ 0x140417D50 (IopSetCopyInformationExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140559250 (IoClearAdapterCryptoEngineExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140559350 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405593B0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140559460 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x140A8362C (ViGetContextPointer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _WORD *Pool2; // r8
  char v5; // di
  __int64 v8; // rax

  Pool2 = *(_WORD **)(a1 + 200);
  v5 = a2;
  if ( !Pool2 )
  {
    if ( a2 != 2 )
    {
      Pool2 = (_WORD *)ExAllocatePool2(64LL, 80LL, 1483764297LL, a4);
      if ( !Pool2 )
        return Pool2;
      Pool2[1] = 1 << v5;
      *(_BYTE *)(a1 + 71) |= 0x40u;
LABEL_10:
      *(_QWORD *)(a1 + 200) = Pool2;
      *Pool2 |= 1u;
      return Pool2;
    }
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return (_WORD *)(a1 + 196);
  }
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
    {
      v8 = ExAllocatePool2(64LL, 80LL, 1483764297LL, a4);
      Pool2 = (_WORD *)v8;
      if ( !v8 )
        return Pool2;
      *(_WORD *)(v8 + 2) = (1 << (v5 & 0xF)) | 4;
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
      goto LABEL_10;
    }
    return (_WORD *)(a1 + 196);
  }
  Pool2[1] |= 1 << a2;
  return Pool2;
}
