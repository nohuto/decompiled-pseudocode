/*
 * XREFs of _AVrfpEnableHandleVerifier@0 @ 0x4B338DD3
 * Callers:
 *     _AVrfpEnableVerifierOptions@0 @ 0x4B338EAB (_AVrfpEnableVerifierOptions@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 */

int __stdcall AVrfpEnableHandleVerifier()
{
  int v0; // esi
  int v1; // eax
  _DWORD v3[2]; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  if ( !AVrfpHandleTraces
    || (v3[0] = 0, v3[1] = AVrfpHandleTraces, v0 = ZwSetInformationProcess(-1, 32, (int)v3, 8), v0 < 0) )
  {
    v4 = 0;
    v1 = ZwSetInformationProcess(-1, 32, (int)&v4, 4);
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return v0;
}
