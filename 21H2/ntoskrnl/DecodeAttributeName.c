/*
 * XREFs of DecodeAttributeName @ 0x140926E74
 * Callers:
 *     GetAttributeName @ 0x140927190 (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140928740 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     GetDigitFromChar2 @ 0x140927518 (GetDigitFromChar2.c)
 *     IsEncodedAttributeChar @ 0x140927FA8 (IsEncodedAttributeChar.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v6; // r15
  _WORD *v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r13
  char v14; // al
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  unsigned __int8 v18; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v19[3]; // [rsp+21h] [rbp-Fh] BYREF
  unsigned int v20; // [rsp+24h] [rbp-Ch]
  unsigned __int8 v21; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v22; // [rsp+80h] [rbp+50h]
  unsigned __int8 v23; // [rsp+88h] [rbp+58h] BYREF

  v22 = a3;
  v3 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v6 = 0;
  v18 = 0;
  v19[0] = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
    return 1336;
  v7 = SddlpAlloc(a2 + 2LL);
  if ( !v7 )
    return 8;
  v8 = a2 >> 1;
  v9 = 0;
  v10 = v8;
  if ( !v8 )
  {
LABEL_26:
    *v22 = v7;
    return v3;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = v9;
    v13 = v9 + 4;
    v14 = 0;
    if ( *(_WORD *)(a1 + 2LL * v9) != 37 )
      goto LABEL_18;
    if ( (unsigned int)v13 >= v10 )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * (v9 + 1)), &v21) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * (v9 + 2)), &v23) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * (v9 + 3)), &v18) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2 * v13), v19) )
      break;
    v6 = v19[0] | (unsigned __int16)(16 * (v18 | (unsigned __int16)(16 * (v23 | (unsigned __int16)(16 * v21)))));
    v14 = IsEncodedAttributeChar(v6);
    if ( !v14 )
      break;
    v11 = v20;
    v12 = v9;
LABEL_18:
    v15 = v11++;
    v20 = v11;
    if ( v14 )
      v16 = v6;
    else
      v16 = *(_WORD *)(a1 + 2 * v12);
    v7[v15] = v16;
    if ( !v14 )
      LODWORD(v13) = v9;
    v9 = v13 + 1;
    if ( (int)v13 + 1 >= v8 )
      goto LABEL_26;
    v10 = v8;
  }
  ExFreePoolWithTag(v7, 0);
  return 1336;
}
