/*
 * XREFs of PiRestartRemovalRelations @ 0x14073374C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x1407319F8 (PnpRestartDeviceNode.c)
 *     IopEnumerateRelations @ 0x1407386B0 (IopEnumerateRelations.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     IopQueryDeviceState @ 0x140749DEC (IopQueryDeviceState.c)
 */

__int64 __fastcall PiRestartRemovalRelations(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0;
  v10[1] = 0;
  v10[0] = 1;
  while ( 1 )
  {
    result = IopEnumerateRelations(a2, (unsigned int)v10, (unsigned int)&v11, (unsigned int)&v12, 0LL);
    if ( !(_BYTE)result )
      return result;
    v7 = v11;
    if ( v11 )
      v8 = *(_DWORD **)(*(_QWORD *)(v11 + 312) + 40LL);
    else
      v8 = 0LL;
    if ( *(_DWORD *)(a1 + 16) != 54 || v12 == 1 )
    {
      if ( v11 == a3 )
      {
        if ( (*(_DWORD *)(a1 + 144) & 2) == 0 && v8[75] == 786 && (v8[99] & 0x2000) != 0 && v8[101] == 21 )
        {
          PipClearDevNodeProblem(v8);
          goto LABEL_20;
        }
      }
      else if ( (v8[99] & 0x6000) == 0 && v8[75] == 786 )
      {
LABEL_20:
        PnpRestartDeviceNode((__int64)v8);
      }
    }
    else if ( v8[75] != 788 )
    {
      *(_DWORD *)(v11 + 48) |= 0x4000000u;
      IopQueryDeviceState(v7, v9);
    }
  }
}
