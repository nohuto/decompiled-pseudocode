/*
 * XREFs of KiOp_Div @ 0x1403CD470
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x1403CD570 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_Div(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  char v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v11; // [rsp+48h] [rbp+10h] BYREF
  _DWORD *v12; // [rsp+50h] [rbp+18h]

  v10 = 0;
  v11 = 0LL;
  v2 = *(_DWORD **)(a1 + 32);
  v12 = v2;
  if ( *v2 == -1073741676 )
  {
    v3 = KiOpRetrieveRegMemAddress(a1, &v11, &v10, 0LL);
    if ( v3 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 56) == 0xF6 )
      {
        v4 = 1;
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
        v4 = 2;
      }
      else
      {
        v4 = (*(_BYTE *)(a1 + 64) & 8) != 0 ? 8 : 4;
      }
      if ( v10 == 1 )
      {
        v8 = (unsigned __int64)v11 + v4;
        if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v11 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 2 )
            v7 = *v11;
          else
            v7 = *(_QWORD *)v11;
        }
        else
        {
          v7 = *(unsigned __int16 *)v11;
        }
      }
      else
      {
        v7 = *(unsigned __int8 *)v11;
      }
      if ( v7 )
        *v2 = -1073741675;
    }
  }
  return 0LL;
}
