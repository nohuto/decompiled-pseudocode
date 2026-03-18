/*
 * XREFs of AlpcpQueryTokenModifiedIdMessage @ 0x14080C0F4
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x14066AA00 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14066B514 (AlpcpGetEffectiveTokenMessage.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 *     SeGetTokenControlInformation @ 0x1409CC4D4 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall AlpcpQueryTokenModifiedIdMessage(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[16]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v13; // [rsp+48h] [rbp-70h]
  _BYTE v14[80]; // [rsp+60h] [rbp-58h] BYREF
  char v15; // [rsp+D8h] [rbp+20h] BYREF

  memset(v14, 0, 0x44uLL);
  v15 = 0;
  v11 = 0LL;
  v13 = 0LL;
  if ( a4 < 8 )
  {
    v10 = -1073741789;
  }
  else
  {
    result = AlpcpGetEffectiveTokenMessage(a1, a2, &v11, (__int64)v14, &v15);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    SeGetTokenControlInformation(v11, v12);
    if ( v15 )
      SeDeleteClientSecurity((__int64)v14);
  }
  if ( a5 )
    *a5 = 8;
  if ( v10 >= 0 )
    *a3 = v13;
  return (unsigned int)v10;
}
