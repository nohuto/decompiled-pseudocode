/*
 * XREFs of _EtwpUpdatePrivateEnableInfo@4 @ 0x4B2F239B
 * Callers:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _EtwpPopulatePrivateEnableInfoFromGuidEntry@4 @ 0x4B3807B2 (_EtwpPopulatePrivateEnableInfoFromGuidEntry@4.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__thiscall EtwpUpdatePrivateEnableInfo(char *this)
{
  int v2; // esi
  char v3; // cl
  int v4; // edi
  unsigned __int8 v5; // bl
  unsigned __int8 *result; // eax
  int v7; // edx
  int v8; // [esp+10h] [ebp-20h]
  char *v9; // [esp+14h] [ebp-1Ch]
  _DWORD v10[6]; // [esp+18h] [ebp-18h] BYREF

  v2 = -1;
  v3 = 0;
  v9 = this;
  v4 = 0;
  v5 = 0;
  result = (unsigned __int8 *)(this + 101);
  v7 = 4;
  memset(&v10[2], 0, 16);
  v10[0] = -1;
  v10[1] = -1;
  v8 = 4;
  do
  {
    if ( *(result - 1) )
    {
      v3 = 1;
      if ( v5 <= *result )
        v5 = *result;
      v4 |= *(_DWORD *)(result - 13);
      v2 &= *(_DWORD *)(result - 21);
      v10[3] |= *(_DWORD *)(result - 9);
      v10[1] &= *(_DWORD *)(result - 17);
      v10[4] |= *(_DWORD *)(result - 5);
      v7 = v8;
    }
    result += 24;
    v8 = --v7;
  }
  while ( v7 );
  LOBYTE(v10[5]) = v3;
  BYTE1(v10[5]) = v5;
  v10[0] = v2;
  v10[2] = v4;
  if ( !v3 )
  {
    v10[0] = 0;
    v10[1] = 0;
  }
  qmemcpy(v9 + 176, v10, 0x18u);
  return result;
}
