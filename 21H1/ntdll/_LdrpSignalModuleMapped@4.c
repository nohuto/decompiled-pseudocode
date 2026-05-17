/*
 * XREFs of _LdrpSignalModuleMapped@4 @ 0x4B2D0A7B
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 * Callees:
 *     _LdrpQueueWork@4 @ 0x4B2DE91E (_LdrpQueueWork@4.c)
 */

int __thiscall LdrpSignalModuleMapped(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int *v4; // edx
  int v5; // ecx

  result = this[20];
  v2 = *(_DWORD **)(result + 28);
  if ( v2 )
  {
    v3 = *(_DWORD **)(result + 28);
    do
    {
      v3 = (_DWORD *)*v3;
      v4 = (int *)(v3[1] & 0xFFFFFFF8);
      result = *v4;
      v5 = *(_DWORD *)(*v4 + 8);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 56))-- == 1 )
        {
          v4[8] = 4;
          result = LdrpQueueWork(v5);
        }
      }
    }
    while ( v3 != v2 );
  }
  return result;
}
