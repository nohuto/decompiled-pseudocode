/*
 * XREFs of MiCheckVirtualAddress @ 0x1403536F0
 * Callers:
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiCheckProtoAccess @ 0x140280308 (MiCheckProtoAccess.c)
 *     MiIsFaultPteIntact @ 0x1402803FC (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402804F0 (MiFindActualFaultingPte.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 * Callees:
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiCheckUserVirtualAddress @ 0x140353858 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, __int64 ***a3)
{
  __int64 v6; // rax
  __int64 **Address; // rax
  __int64 v8; // r8
  __int64 **v9; // rsi
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 24;
      return 0LL;
    }
    else
    {
      *a2 = 4;
      return 0LL;
    }
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) != 0 )
      goto LABEL_5;
    v6 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140C50668;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_140C50678 && v6 )
    {
      result = qword_140C50670;
      *a2 = 1;
    }
    else
    {
LABEL_5:
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                      + 284));
      Address = MiLocateAddress(a1);
      v9 = Address;
      if ( Address )
      {
        result = MiCheckUserVirtualAddress(a1, Address, v8, a2);
        *a3 = v9;
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                          + 284));
        result = 0LL;
        *a2 = 24;
      }
    }
  }
  return result;
}
