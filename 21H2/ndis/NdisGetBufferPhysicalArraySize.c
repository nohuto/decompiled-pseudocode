/*
 * XREFs of NdisGetBufferPhysicalArraySize @ 0x1C00BF030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NdisGetBufferPhysicalArraySize(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = (unsigned int)a1[10];
  if ( (_DWORD)v2 )
    result = ((unsigned __int64)((a1[8] + a1[11]) & 0xFFF) + v2 + 4095) >> 12;
  else
    result = 1LL;
  *a2 = result;
  return result;
}
