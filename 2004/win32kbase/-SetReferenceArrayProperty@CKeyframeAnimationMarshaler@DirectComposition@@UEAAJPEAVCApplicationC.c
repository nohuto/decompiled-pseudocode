/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E6CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E69F0 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // r13d
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
      if ( a3 == 15 )
      {
        if ( *((_QWORD *)this + 24) || *((_DWORD *)this + 50) )
          v11 = -1073741811;
        if ( v11 >= 0 )
        {
          *((_DWORD *)this + 50) = a5;
          *((_QWORD *)this + 24) = a4;
          *a6 = 1;
          *((_DWORD *)this + 4) &= ~0x400u;
          if ( *((_DWORD *)this + 50) )
          {
            do
              DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 24) + 8LL * v6++));
            while ( v6 < *((_DWORD *)this + 50) );
          }
        }
      }
      else
      {
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5,
                               a6);
      }
    }
  }
  return (unsigned int)v11;
}
