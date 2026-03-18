/*
 * XREFs of ?SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E4620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E44E0 (-ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CContainerShapeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // esi
  unsigned int v10; // r12d

  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( (a4 || !a5) && a3 == 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
              a4[v10],
              192LL) )
        v9 = -1073741811;
      ++v10;
    }
    while ( v9 >= 0 );
    if ( v9 >= 0 )
    {
      DirectComposition::CContainerShapeMarshaler::ClearShapes(this, a2);
      *((_DWORD *)this + 18) = a5;
      *((_QWORD *)this + 8) = a4;
      *((_DWORD *)this + 19) = 0;
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
      if ( *((_DWORD *)this + 18) )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 8)
                                                                                                  + 8LL * v6++));
        while ( v6 < *((_DWORD *)this + 18) );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
