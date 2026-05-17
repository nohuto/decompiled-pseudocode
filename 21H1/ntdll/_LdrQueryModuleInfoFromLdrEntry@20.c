/*
 * XREFs of _LdrQueryModuleInfoFromLdrEntry@20 @ 0x4B32E910
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpGetModuleName@16 @ 0x4B32F32C (_LdrpGetModuleName@16.c)
 *     LdrpReadMemory @ 0x4B32F4DC (LdrpReadMemory.c)
 */

int __stdcall LdrQueryModuleInfoFromLdrEntry(int a1, int a2, int a3, int a4, char a5)
{
  int result; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edx
  int v9; // [esp+10h] [ebp-D8h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-D4h] BYREF
  unsigned int v11; // [esp+20h] [ebp-C8h]
  _BYTE v12[24]; // [esp+40h] [ebp-A8h] BYREF
  int v13; // [esp+58h] [ebp-90h]
  int v14; // [esp+60h] [ebp-88h]
  int v15; // [esp+74h] [ebp-74h]

  result = LdrpReadMemory(v12, 168);
  if ( result >= 0 )
  {
    result = LdrpReadMemory(v10, 44);
    if ( result >= 0 )
    {
      v6 = 0xFFFF;
      *(_DWORD *)(a2 + 8) = v13;
      *(_DWORD *)(a2 + 12) = v14;
      *(_DWORD *)(a2 + 16) = v15;
      if ( v11 > 0xFFFF )
        *(_WORD *)(a2 + 24) = -1;
      else
        *(_WORD *)(a2 + 24) = v11;
      if ( (a5 & 2) != 0 )
      {
        v7 = 10240;
        do
        {
          if ( (int)LdrpReadMemory(&v9, 4) < 0 )
            break;
          v8 = v9;
          if ( v9 == a4 )
            break;
          ++*(_WORD *)(a2 + 22);
          if ( a3 == v8 - 16 )
            break;
          --v7;
        }
        while ( v7 );
      }
      return LdrpGetModuleName(a2, v6);
    }
  }
  return result;
}
