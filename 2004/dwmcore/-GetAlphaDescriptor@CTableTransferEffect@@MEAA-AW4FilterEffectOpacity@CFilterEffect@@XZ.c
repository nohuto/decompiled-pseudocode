/*
 * XREFs of ?GetAlphaDescriptor@CTableTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x1801F1C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTableTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 155) )
    return 2LL;
  result = 1LL;
  if ( !*(_DWORD *)(a1 + 304) )
    return 2LL;
  return result;
}
