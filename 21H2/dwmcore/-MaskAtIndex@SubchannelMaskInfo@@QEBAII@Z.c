/*
 * XREFs of ?MaskAtIndex@SubchannelMaskInfo@@QEBAII@Z @ 0x180115EB8
 * Callers:
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x18011456C (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SubchannelMaskInfo::MaskAtIndex(SubchannelMaskInfo *this, char a2)
{
  if ( *(_DWORD *)this == 1 )
    return (*((unsigned __int8 *)this + 8) >> (2 * (*((_BYTE *)this + 4) - a2) - 2)) & 3;
  if ( *(_DWORD *)this == 2 )
    return (*((_QWORD *)this + 1) >> (4 * (*((_BYTE *)this + 4) - a2) - 4)) & 0xFLL;
  return 0xFFFFFFFFLL;
}
