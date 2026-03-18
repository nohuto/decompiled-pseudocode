/*
 * XREFs of ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800791E0
 * Callers:
 *     ?QueryInterface@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1840 (-QueryInterface@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::QueryInterface(CLegacySwapChain *this, const struct _GUID *a2, void **a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 40LL))(this);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = this;
      v5 = 0;
    }
    CMILCOMBase::InternalAddRef(this);
  }
  return (unsigned int)v5;
}
