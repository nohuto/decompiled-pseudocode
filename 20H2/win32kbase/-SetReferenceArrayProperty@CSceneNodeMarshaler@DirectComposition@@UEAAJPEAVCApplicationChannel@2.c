/*
 * XREFs of ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01D7DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0096818 (-Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceM.c)
 */

__int64 __fastcall DirectComposition::CSceneNodeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CSceneNodeMarshaler *this,
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
    result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 56, a2, (__int64)a4, a5, 0xA1u);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 20) = 0;
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_8;
  }
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 88, a2, (__int64)a4, a5, 0x9Au);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 28) = 0;
    *((_DWORD *)this + 4) |= 0x40u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
