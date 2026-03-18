/*
 * XREFs of ?SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E8A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E8870 (-ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
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
  if ( (!a5 || a4) && (_DWORD)a3 == 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
              a4[v10],
              21LL) )
        v9 = -1073741811;
      ++v10;
    }
    while ( v9 >= 0 );
    if ( v9 >= 0 )
    {
      DirectComposition::CGradientBrushMarshaler::ClearStops(this, a2, a3);
      *((_DWORD *)this + 26) = a5;
      *((_QWORD *)this + 12) = a4;
      *((_DWORD *)this + 27) = 0;
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x100u;
      if ( *((_DWORD *)this + 26) )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 12)
                                                                                                  + 8LL * v6++));
        while ( v6 < *((_DWORD *)this + 26) );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
