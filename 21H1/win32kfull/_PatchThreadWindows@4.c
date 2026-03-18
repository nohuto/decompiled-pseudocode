/*
 * XREFs of _PatchThreadWindows@4 @ 0x8AED0
 * Callers:
 *     <none>
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _DisassociateShellFrameAppThreads@4 @ 0x8AFA4 (_DisassociateShellFrameAppThreads@4.c)
 */

unsigned int __stdcall PatchThreadWindows(unsigned int a1)
{
  unsigned int v1; // esi
  unsigned int result; // eax
  unsigned int v3; // ebx
  int *i; // edi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  DisassociateShellFrameAppThreads(a1);
  v1 = _gSharedInfo[1];
  result = _gpKernelHandleTable;
  v3 = v1 + 16 * _giheLast;
  for ( i = (int *)_gpKernelHandleTable; v1 <= v3; i += 3 )
  {
    if ( *(_BYTE *)(v1 + 12) == 1 )
    {
      result = a1;
      if ( i[1] == a1 )
      {
        v5 = *i;
        v8 = *i;
        if ( (*(_BYTE *)(v1 + 13) & 1) == 0
          || (result = *(_DWORD *)(v5 + 20), *(_DWORD *)(result + 84))
          || (*(_BYTE *)(result + 10) & 4) == 0 )
        {
          v9 = *(_DWORD *)(v5 + 20);
          v6 = *(unsigned __int16 *)(v9 + 30);
          if ( (unsigned __int16)v6 < 0x29Au || (unsigned __int16)v6 > 0x2A0u )
          {
            if ( (_WORD)v6 == 694 )
              v7 = 5;
            else
              v7 = 0;
          }
          else
          {
            v7 = *(_DWORD *)(_gpsi + 4 * (v6 & 0xFFFF3FFF) - 2528);
          }
          *(_DWORD *)(v9 + 84) = v7;
          SetOrClrWF(1, v5, 0x204u, 1);
          result = SetOrClrWF(0, v8, 0x208u, 1);
        }
      }
    }
    v1 += 16;
  }
  return result;
}
