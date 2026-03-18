/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003DA50
 * Callers:
 *     ?QueryInterface@CPrimitiveGroup@@$4PPPPPPPM@CMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECA10 (-QueryInterface@CPrimitiveGroup@@$4PPPPPPPM@CMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECA30 (-QueryInterface@CPrimitiveGroup@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleBitmapRealization@@$4PPPPPPPM@BII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0270 (-QueryInterface@CDxHandleBitmapRealization@@$4PPPPPPPM@BII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleBitmapRealization@@$4PPPPPPPM@BPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0680 (-QueryInterface@CDxHandleBitmapRealization@@$4PPPPPPPM@BPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(CPrimitiveGroup *this, const struct _GUID *a2, void **a3)
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
      v5 = (*(__int64 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 40LL))(this);
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
