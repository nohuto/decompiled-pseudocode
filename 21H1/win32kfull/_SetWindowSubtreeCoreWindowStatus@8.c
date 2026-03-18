/*
 * XREFs of _SetWindowSubtreeCoreWindowStatus@8 @ 0xA2352
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserSetCoreWindow@8 @ 0xA22FE (_NtUserSetCoreWindow@8.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

unsigned int __fastcall SetWindowSubtreeCoreWindowStatus(int a1, int a2)
{
  unsigned int result; // eax
  _DWORD *v5; // esi
  int v6; // ecx

  result = a2 != 0;
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 20) + 144) & 0x2000000u) >> 25 != result
    && ((*(_DWORD *)(*(_DWORD *)(a1 + 20) + 144) & 0x1000000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, a1, 0x8B02u, 1);
    v5 = *(_DWORD **)(a1 + 60);
LABEL_6:
    while ( v5 && v5 != (_DWORD *)a1 )
    {
      if ( (*(_DWORD *)(v5[5] + 144) & 0x1000000) == 0 || a2 )
      {
        SetOrClrWF(a2, (int)v5, 0x8B02u, 1);
        v6 = 0;
      }
      else
      {
        v6 = 1;
      }
      result = v5[15];
      if ( !result || v6 )
      {
        result = v5[12];
        if ( !result )
        {
          while ( 1 )
          {
            v5 = (_DWORD *)v5[14];
            if ( !v5 )
              return result;
            result = v5[12];
            if ( result )
              break;
            if ( v5 == (_DWORD *)a1 )
              goto LABEL_6;
          }
        }
      }
      v5 = (_DWORD *)result;
    }
  }
  return result;
}
