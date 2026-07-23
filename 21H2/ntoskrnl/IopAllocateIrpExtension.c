/*
 * XREFs of IopAllocateIrpExtension @ 0x14020DB80
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x14020D8DC (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x14020D958 (IopSetDriverFlagsExtension.c)
 *     IoPropagateIrpExtensionEx @ 0x14020D9D0 (IoPropagateIrpExtensionEx.c)
 *     IoSetActivityIdIrp @ 0x140378D50 (IoSetActivityIdIrp.c)
 *     IoSetGenericIrpExtension @ 0x140379C70 (IoSetGenericIrpExtension.c)
 *     IopSetCopyInformationExtension @ 0x1403F149C (IopSetCopyInformationExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140507A70 (IoClearAdapterCryptoEngineExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140507B70 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x140507BD0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140507C70 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x140507F40 (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x1409C94D4 (ViGetContextPointer.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  _WORD *v2; // rbx
  char v3; // si
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax

  v2 = *(_WORD **)(a1 + 200);
  v3 = a2;
  if ( !v2 )
  {
    if ( a2 != 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x58707249u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        return v2;
      memset(PoolWithTag, 0, 0x50uLL);
      v2[1] = 1 << v3;
      *(_BYTE *)(a1 + 71) |= 0x40u;
LABEL_10:
      *(_QWORD *)(a1 + 200) = v2;
      *v2 |= 1u;
      return v2;
    }
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return (_WORD *)(a1 + 196);
  }
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
    {
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x58707249u);
      v2 = v7;
      if ( !v7 )
        return v2;
      memset(v7, 0, 0x50uLL);
      v2[1] = (1 << (v3 & 0xF)) | 4;
      *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
      goto LABEL_10;
    }
    return (_WORD *)(a1 + 196);
  }
  v2[1] |= 1 << a2;
  return v2;
}
