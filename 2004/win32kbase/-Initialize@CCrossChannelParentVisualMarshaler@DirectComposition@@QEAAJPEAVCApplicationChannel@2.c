/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00027F0
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0002604 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C003A6C0 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C009B350 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  int v8; // esi
  __int64 v9; // rax

  v8 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x2000002u;
    v8 = 0;
    *(_DWORD *)(a1 + 104) = 1065353216;
    *(_DWORD *)(a1 + 108) = 1065353216;
    v9 = Win32AllocPoolWithQuotaZInit(0x10uLL);
    if ( v9 )
      *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(a1 + 368) = v9;
    if ( v9 )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
      *(_DWORD *)(*(_QWORD *)(a1 + 368) + 12LL) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 368) + 8LL) = a3;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
