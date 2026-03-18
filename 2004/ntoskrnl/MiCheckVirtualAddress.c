/*
 * XREFs of MiCheckVirtualAddress @ 0x140315F00
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiCheckProtoAccess @ 0x140315B68 (MiCheckProtoAccess.c)
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140315D2C (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, int *a2, __int64 ***a3)
{
  int *v4; // r11
  __int64 v5; // rax
  __int64 **Address; // rax
  unsigned __int64 v7; // r10
  __int64 result; // rax

  *a3 = 0LL;
  v4 = a2;
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
    {
      v5 = a1 & 0x7FFFFFFFF000LL;
      if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        result = qword_140C4DC38;
LABEL_10:
        *a2 = 1;
        return result;
      }
      if ( v5 == qword_140C4DC48 && v5 )
      {
        result = qword_140C4DC40;
        goto LABEL_10;
      }
    }
    Address = MiLocateAddress(a1);
    *a3 = Address;
    if ( Address )
      return MiCheckUserVirtualAddress(v7, v4, (__int64)Address);
    goto LABEL_14;
  }
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_14:
    *v4 = 24;
    return 0LL;
  }
  *a2 = 4;
  return 0LL;
}
