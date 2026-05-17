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
        size_t *a4)
{
  int v4; // esi
  unsigned int v6; // eax
  size_t Size; // [esp+Ch] [ebp-14h] BYREF
  void *v8; // [esp+10h] [ebp-10h] BYREF
  void *Src; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  v8 = a2;
  v4 = 0;
  v11 = -1073741595;
  v10 = 0;
  RtlpLocateActivationContextSectionForQuery(&v8, a3, (int)a4, 0, a1, a1, 11, (int)&Src, (int)&Size);
  if ( v10 != 1 )
    return v11;
  v6 = Size;
  if ( a4 )
    *a4 = Size;
  if ( v6 > a3 )
    return -1073741789;
  if ( Src )
    memcpy(v8, Src, v6);
  return v4;
}
