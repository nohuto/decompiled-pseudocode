/*
 * XREFs of _Generate_HTSC_WORD @ 0x1BC242
 * Callers:
 *     _CachedHalftonePattern @ 0x1BB975 (_CachedHalftonePattern.c)
 * Callees:
 *     _ExpandHTPatX @ 0x1BC025 (_ExpandHTPatX.c)
 *     _GenerateWORDPat @ 0x1BC0A9 (_GenerateWORDPat.c)
 *     _RotateHTPat45 @ 0x1BC418 (_RotateHTPat45.c)
 *     _RotateHTPatXY @ 0x1BC4D1 (_RotateHTPatXY.c)
 */

BOOL __thiscall Generate_HTSC_WORD(_BYTE *this)
{
  _BYTE *v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  void *v5; // edi
  ULONG v6; // ecx
  PVOID v7; // ebx
  unsigned int v8; // edi
  unsigned __int8 v9; // bl
  int v10; // eax
  int v11; // ecx
  _BYTE *v12; // eax
  unsigned int v14; // [esp-2Ch] [ebp-60h]
  _DWORD v15[5]; // [esp+Ch] [ebp-28h] BYREF
  int v16; // [esp+20h] [ebp-14h]
  _BYTE *v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+28h] [ebp-Ch]
  PVOID v19; // [esp+2Ch] [ebp-8h]
  void *v20; // [esp+30h] [ebp-4h]

  v1 = this;
  v17 = this;
  if ( this[1] <= 0x11u )
  {
    EngAcquireSemaphore(dword_274304);
    v2 = ppwHTPat[(unsigned __int8)v1[1]];
    *((_DWORD *)v1 + 4) = v2;
    if ( v2 )
    {
LABEL_16:
      EngReleaseSemaphore(dword_274304);
      return *((_DWORD *)v1 + 4) != 0;
    }
    qmemcpy(v15, v1, sizeof(v15));
    v3 = BYTE1(v15[0]);
    if ( BYTE1(v15[0]) > 9u )
      v3 = BYTE1(v15[0]) + 7;
    v16 = BYTE1(v15[0]) >> 1;
    v4 = *(&off_24C4D4 + 2 * v16);
    v18 = v4;
    v5 = (void *)LOWORD(v15[2]);
    v6 = (v3 << 24) + 808539208;
    v20 = (void *)LOWORD(v15[2]);
    if ( is_mul_ok(6u, LOWORD(v15[2]) * HIWORD(v15[2])) && v15[3] >= 6 * (unsigned int)LOWORD(v15[2]) * HIWORD(v15[2]) )
    {
      v7 = EngAllocMem(1u, v15[3], v6);
      v19 = v7;
      if ( v7 )
      {
        if ( BYTE1(v15[0]) > 0xFu )
        {
          if ( BYTE1(v15[0]) == 16 )
          {
            v11 = v4;
          }
          else
          {
            v11 = v4 + 512;
            v4 += 256;
          }
          if ( !GenerateWORDPat(v4, v18, v11, (char *)v7, LOWORD(v15[1]), v5, HIWORD(v15[2])) )
          {
            EngFreeMem(v7);
            v7 = 0;
          }
        }
        else
        {
          v8 = HIWORD(v15[2]);
          RotateHTPat45(LOWORD(v15[1]), HIWORD(v15[2]), (unsigned __int16)word_24C4D2[4 * v16], v20);
          v9 = BYTE1(v15[0]) & 1;
          RotateHTPatXY(LOWORD(v15[1]), v8, v20, (v15[0] & 0x100) != 0 ? LOWORD(v15[1]) >> 1 : 0, 0);
          v14 = v9 != 0 ? v8 >> 2 : 0;
          v10 = v9;
          v7 = v19;
          RotateHTPatXY(LOWORD(v15[1]), v8, v20, v10 != 0 ? LOWORD(v15[1]) >> 2 : 0, v14);
          ExpandHTPatX((char *)v7, LOWORD(v15[1]), v8, v20);
        }
      }
      ppwHTPat[BYTE1(v15[0])] = (int)v7;
      v12 = v17;
      *((_DWORD *)v17 + 4) = v7;
      v1 = v12;
      goto LABEL_16;
    }
  }
  return 0;
}
