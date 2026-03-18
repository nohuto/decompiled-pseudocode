/*
 * XREFs of SepInitializeCodeIntegrity @ 0x1407A6DAC
 * Callers:
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     SepIsOptionPresent @ 0x1407A6E6C (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v0 = 6;
  memset(&unk_140C1DA64, 0, 0xC4uLL);
  v1 = 0LL;
  SeCiCallbacks = 208;
  qword_140C1DB28 = 167772168LL;
  if ( KeLoaderBlock_0 )
  {
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 2872);
      if ( v3 )
        v0 = *v3;
    }
    if ( *(_QWORD *)(KeLoaderBlock_0 + 216) && (unsigned int)SepIsOptionPresent() )
      SeCiDebugOptions |= 1u;
    if ( KeLoaderBlock_0 )
      v1 = KeLoaderBlock_0 + 48;
  }
  return CiInitialize(v0, v1, &SeCiCallbacks, SeCiPrivateApis);
}
