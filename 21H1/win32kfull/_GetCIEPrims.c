/*
 * XREFs of _GetCIEPrims @ 0x97354
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 * Callees:
 *     <none>
 */

int __fastcall GetCIEPrims(const void *a1, _DWORD *a2, int a3, int a4)
{
  __int16 v4; // di
  __int16 v5; // dx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  _DWORD *v10; // edi
  int result; // eax
  _DWORD v12[11]; // [esp+Ch] [ebp-30h] BYREF
  _DWORD *v13; // [esp+38h] [ebp-4h]

  v13 = a2;
  if ( !a1
    || (qmemcpy(v12, a1, 0x2Au), v7 = v12[0], (unsigned __int16)(LOWORD(v12[0]) - 10) > 0x1F36u)
    || HIWORD(v12[0]) < 0xAu
    || HIWORD(v12[0]) > 0x2134u
    || HIWORD(v12[1]) < 0xAu
    || HIWORD(v12[1]) > 0x1F40u
    || (unsigned __int16)(LOWORD(v12[2]) - 10) > 0x212Au
    || (v6 = v12[3], (unsigned __int16)(LOWORD(v12[3]) - 10) > 0x1F36u)
    || HIWORD(v12[3]) < 0xAu
    || HIWORD(v12[3]) > 0x2134u
    || (v5 = v12[9], (unsigned __int16)(LOWORD(v12[9]) - 10) > 0x1F36u)
    || (v4 = HIWORD(v12[9]), (unsigned __int16)(HIWORD(v12[9]) - 10) > 0x212Au)
    || (unsigned __int16)(LOWORD(v12[10]) - 2500) > 0xE09Cu )
  {
    qmemcpy(v12, &HT_CIE_SRGB, 0x2Au);
    v4 = HIWORD(v12[9]);
    v5 = v12[9];
    v6 = v12[3];
    v7 = v12[0];
  }
  if ( a4 )
  {
    v8 = 6254 - v5;
    v9 = 6580 - v4;
  }
  else
  {
    v9 = HIWORD(v12[9]);
    v8 = v12[9];
  }
  v10 = v13;
  *v13 = 100 * LOWORD(v12[0]);
  v10[1] = 100 * HIWORD(v7);
  v10[2] = 100 * HIWORD(v12[1]);
  v10[3] = 100 * LOWORD(v12[2]);
  v10[4] = 100 * LOWORD(v12[3]);
  v10[5] = 100 * HIWORD(v6);
  v10[6] = 100 * v8;
  v10[7] = 100 * v9;
  result = 100 * LOWORD(v12[10]);
  v10[8] = result;
  return result;
}
