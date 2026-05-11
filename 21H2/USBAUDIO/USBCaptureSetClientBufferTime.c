/*
 * XREFs of USBCaptureSetClientBufferTime @ 0x1C0007DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBCaptureSetClientBufferTime(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v2 = -1073741637;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  if ( !*(_BYTE *)(v3 + 112) && !*(_BYTE *)(v3 + 96) && (unsigned int)(a2 - 3) <= 7 )
  {
    *(_DWORD *)(v3 + 108) = a2;
    return 0;
  }
  return v2;
}
