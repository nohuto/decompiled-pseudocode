/*
 * XREFs of _RtlpQueryInformationActivationContextCompatibilityInformation@16 @ 0x4B2B7E6D
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpQueryInformationActivationContextCompatibilityInformation(
        int a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  int v4; // esi
  unsigned int v6; // eax
  size_t v7; // [esp-18h] [ebp-38h]
  size_t v8; // [esp-4h] [ebp-24h]
  unsigned int Size; // [esp+Ch] [ebp-14h] BYREF
  void *Size_4; // [esp+10h] [ebp-10h] BYREF
  void *Src; // [esp+14h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  Size_4 = a2;
  HIDWORD(v7) = a1;
  v4 = 0;
  v13 = -1073741595;
  LODWORD(v7) = 0;
  v12 = 0;
  RtlpLocateActivationContextSectionForQuery(&Size_4, a3, (int)a4, v7, a1, 11, (int)&Src, (int)&Size);
  if ( v12 != 1 )
    return v13;
  v6 = Size;
  if ( a4 )
    *a4 = Size;
  if ( v6 > a3 )
    return -1073741789;
  if ( Src )
  {
    LODWORD(v8) = v6;
    memcpy(Size_4, Src, v8);
  }
  return v4;
}
