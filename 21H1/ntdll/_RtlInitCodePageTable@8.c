/*
 * XREFs of _RtlInitCodePageTable@8 @ 0x4B344010
 * Callers:
 *     _RtlInitNlsTables@16 @ 0x4B344110 (_RtlInitNlsTables@16.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlInitCodePageTable(unsigned __int16 *a1, int a2)
{
  unsigned __int16 v2; // di
  int v3; // ebx
  int v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // ecx
  __int16 v7; // dx
  _WORD *v8; // eax
  _WORD *v9; // eax
  int result; // eax
  unsigned __int16 *v11; // edx
  int v12; // [esp+Ch] [ebp-4h]

  if ( !a1 || (v2 = a1[1], v2 == 0xFDE9) )
  {
    v3 = a2;
    *(_WORD *)a2 = -535;
    *(_WORD *)(a2 + 2) = 4;
    *(_WORD *)(a2 + 6) = -3;
    result = 0;
    v11 = 0;
    *(_WORD *)(a2 + 4) = 63;
    *(_WORD *)(a2 + 8) = 63;
    *(_WORD *)(a2 + 10) = 63;
    *(_WORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 36) = 0;
    *(_DWORD *)(a2 + 40) = 0;
  }
  else
  {
    v3 = a2;
    v4 = *a1;
    v5 = *a1 + a1[v4];
    *(_WORD *)a2 = v2;
    v12 = v5;
    *(_WORD *)(a2 + 2) = a1[2];
    *(_WORD *)(a2 + 4) = a1[3];
    *(_WORD *)(a2 + 6) = a1[4];
    *(_WORD *)(a2 + 8) = a1[5];
    *(_WORD *)(a2 + 10) = a1[6];
    *(_DWORD *)(a2 + 14) = *(_DWORD *)(a1 + 7);
    *(_DWORD *)(a2 + 18) = *(_DWORD *)(a1 + 9);
    *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
    v6 = &a1[v4 + 1];
    v7 = 0;
    *(_DWORD *)(a2 + 28) = v6;
    v8 = (unsigned __int16 *)((char *)v6 + (v6[256] != 0 ? 1026 : 514));
    *(_DWORD *)(a2 + 36) = v8;
    if ( *v8 )
    {
      v7 = 1;
      v9 = v8 + 1;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)(a2 + 40) = v9;
    result = v12;
    *(_WORD *)(a2 + 12) = v7;
    v11 = &a1[(unsigned __int16)v12 + 1];
  }
  *(_DWORD *)(v3 + 32) = v11;
  return result;
}
