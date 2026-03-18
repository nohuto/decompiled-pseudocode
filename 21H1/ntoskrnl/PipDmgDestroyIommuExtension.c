/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x14074F990
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140733F10 (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x14074F0A0 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x14074FC54 (PiIommuFreeExtension.c)
 */

__int64 __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 720);
  if ( v2 )
  {
    result = PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  return result;
}
