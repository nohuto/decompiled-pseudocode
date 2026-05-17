/*
 * XREFs of _RtlpMuiRegCreateStringPool@8 @ 0x4B2ADB4D
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 *     _RtlpMuiRegResizeStringPool@16 @ 0x4B36BD9D (_RtlpMuiRegResizeStringPool@16.c)
 * Callees:
 *     _SafeAllocBlob @ 0x4B2D3295 (_SafeAllocBlob.c)
 */

int __fastcall RtlpMuiRegCreateStringPool(int a1, int a2)
{
  unsigned __int16 v2; // bx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _WORD *v6; // eax
  _WORD *v7; // eax
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a1;
  v3 = a2;
  if ( a1 < 1 )
    v2 = 4;
  if ( a2 < 1 )
    v3 = 40;
  v4 = SafeAllocBlob(2, v3, 2, &v9);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = v9;
    *(_DWORD *)(v4 + 12) = v4 + 20;
    *(_WORD *)(v4 + 4) = v2;
    v6 = (_WORD *)(v4 + 20 + 2 * v2);
    *(_WORD *)(v5 + 8) = v3;
    *(_DWORD *)(v5 + 16) = v6;
    *v6 = 0;
    v7 = *(_WORD **)(v5 + 12);
    *(_WORD *)(v5 + 10) = 1;
    *v7 = 0;
    *(_WORD *)(v5 + 6) = 1;
  }
  return v5;
}
