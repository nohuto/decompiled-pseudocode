/*
 * XREFs of ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01DA100
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00308F0 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0030958 (-Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceM.c)
 */

__int64 __fastcall DirectComposition::CTextVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( !a3 )
  {
    result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 368, a2, (__int64)a4, a5, 0x21u);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 98) = 0;
    *((_DWORD *)this + 115) |= 2u;
    goto LABEL_11;
  }
  if ( a3 == 1 )
  {
    result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 400, a2, (__int64)a4, a5, 0x29u);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 106) = 0;
    *((_DWORD *)this + 115) |= 4u;
    goto LABEL_11;
  }
  if ( a3 != 2 )
    return DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
  result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 432, a2, (__int64)a4, a5, 0x29u);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 114) = 0;
    *((_DWORD *)this + 115) |= 8u;
LABEL_11:
    *a6 = 1;
  }
  return result;
}
