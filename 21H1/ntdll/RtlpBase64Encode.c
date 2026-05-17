/*
 * XREFs of RtlpBase64Encode @ 0x4B362482
 * Callers:
 *     _RtlInitializeCorrelationVector@12 @ 0x4B362370 (_RtlInitializeCorrelationVector@12.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpBase64Encode(char *this, int a2, int a3)
{
  int v4; // esi
  char v5; // dl
  unsigned __int8 v6; // bh
  unsigned __int8 v7; // bl
  bool v8; // zf
  unsigned __int8 v9; // cl
  _BYTE *v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v4 = 0;
  v12 = 5;
  do
  {
    v5 = *this;
    v6 = this[1];
    v7 = this[2];
    v11 = this + 3;
    *(_BYTE *)(v4 + a2) = byte_4B2A3860[(unsigned __int8)*this >> 2];
    v4 += 4;
    *(_BYTE *)(v4 + a2 - 3) = byte_4B2A3860[(v6 >> 4) | (unsigned __int8)(16 * (v5 & 3))];
    v8 = v12-- == 1;
    *(_BYTE *)(v4 + a2 - 2) = byte_4B2A3860[(v7 >> 6) | (unsigned __int8)(4 * (v6 & 0xF))];
    *(_BYTE *)(v4 + a2 - 1) = byte_4B2A3860[v7 & 0x3F];
    this += 3;
  }
  while ( !v8 );
  v9 = 16 * (*v11 & 3);
  *(_BYTE *)(v4 + a2) = byte_4B2A3860[(unsigned __int8)*v11 >> 2];
  *(_BYTE *)(v4 + a2 + 1) = byte_4B2A3860[v9];
  strcpy((char *)(v4 + a2 + 2), "==");
  return 0;
}
