/*
 * XREFs of MiCheckVirtualAddress @ 0x1402382DC
 * Callers:
 *     MiIsFaultPteIntact @ 0x140236AF4 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140236BC4 (MiFindActualFaultingPte.c)
 *     MiCheckProtoAccess @ 0x14023836C (MiCheckProtoAccess.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, __int64 ***a3)
{
  _DWORD *v4; // r11
  __int64 v5; // rax
  __int64 **Address; // rax
  __int64 v7; // r10
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
        result = qword_140C4DCB8;
LABEL_10:
        *a2 = 1;
        return result;
      }
      if ( v5 == qword_140C4DCC8 && v5 )
      {
        result = qword_140C4DCC0;
        goto LABEL_10;
      }
    }
    Address = MiLocateAddress(a1);
    *a3 = Address;
    if ( Address )
      return MiCheckUserVirtualAddress(v7, v4, Address);
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
