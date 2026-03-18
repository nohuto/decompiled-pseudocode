/*
 * XREFs of ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E69F0
 * Callers:
 *     ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E6CB0 (-SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // r15d
  signed int v11; // edi

  v6 = 0;
  *a6 = 0;
  v10 = 0;
  v11 = a4 == 0LL ? 0xC000000D : 0;
  if ( a4 )
  {
    do
    {
      if ( v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
              a4[v10],
              10LL) )
        v11 = -1073741811;
      ++v10;
    }
    while ( v11 >= 0 );
    if ( v11 >= 0 )
    {
      if ( a3 == 8 )
      {
        if ( *((_QWORD *)this + 13) || *((_DWORD *)this + 29) )
          v11 = -1073741811;
        if ( v11 >= 0 )
        {
          *((_DWORD *)this + 29) = a5;
          *((_QWORD *)this + 13) = a4;
          *a6 = 1;
          *((_DWORD *)this + 4) &= ~0x200u;
          if ( *((_DWORD *)this + 29) )
          {
            do
              DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13) + 8LL * v6++));
            while ( v6 < *((_DWORD *)this + 29) );
          }
        }
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v11;
}
