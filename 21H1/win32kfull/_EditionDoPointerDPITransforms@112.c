/*
 * XREFs of _EditionDoPointerDPITransforms@112 @ 0xF1D18
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 */

char __stdcall EditionDoPointerDPITransforms(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        _DWORD *a27,
        int a28)
{
  _DWORD *v28; // esi
  int v29; // edi
  char result; // al
  int DPITransformationMonitor; // [esp+Ch] [ebp-74h] BYREF
  _DWORD v32[26]; // [esp+10h] [ebp-70h] BYREF

  qmemcpy(v32, &a1, sizeof(v32));
  v28 = a27;
  v29 = a28;
  result = *(_DWORD *)(*(_DWORD *)(v32[20] + 20) + 184) & 0xF;
  if ( result != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(*a27, a27[1]);
    PhysicalToLogicalDPIPoint(v28, v28, 0, &DPITransformationMonitor);
    return PhysicalToLogicalDPIPoint(v29, v29, 0, &DPITransformationMonitor);
  }
  return result;
}
