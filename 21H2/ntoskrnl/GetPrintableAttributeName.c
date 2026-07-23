/*
 * XREFs of GetPrintableAttributeName @ 0x1406685F0
 * Callers:
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     EncodeAttributeName @ 0x140927028 (EncodeAttributeName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, int *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  void *v8; // r14
  size_t v9; // r13
  unsigned int v10; // eax
  unsigned __int64 v11; // r15
  char *v12; // rdi
  __int64 v13; // rax
  int v14; // esi
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  const wchar_t *v19; // rdx
  void *v20; // [rsp+20h] [rbp-48h] BYREF
  size_t Size; // [rsp+28h] [rbp-40h]

  LODWORD(Size) = 0;
  v20 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 )
      return 1336;
    v9 = *(unsigned int *)(a1 + 1);
    *a5 = 5;
    if ( a2 - 5 < (unsigned int)v9 )
    {
      return 1336;
    }
    else
    {
      if ( a3 != -8 )
      {
        v16 = EncodeAttributeName(a1 + 5, (unsigned int)v9, &v20);
        v8 = v20;
        v6 = v16;
        if ( v16 )
          goto LABEL_17;
        v17 = -1LL;
        do
          ++v17;
        while ( *((_WORD *)v20 + v17) );
        Size = (unsigned int)(2 * v17);
        v10 = Size + 2;
        if ( (int)Size + 2 >= (unsigned int)Size )
        {
          switch ( a3 )
          {
            case -5:
              v7 = 16;
              v18 = Size + 18;
              break;
            case -7:
              v7 = 12;
              v18 = Size + 14;
              break;
            case -6:
              v7 = 20;
              v18 = Size + 22;
              break;
            case -4:
              v7 = 14;
              v18 = Size + 16;
              break;
            default:
              goto LABEL_8;
          }
          if ( v18 >= v10 )
          {
            v10 = v18;
            goto LABEL_8;
          }
        }
        v6 = 534;
        goto LABEL_17;
      }
      v10 = v9 + 2;
      if ( (int)v9 + 2 >= (unsigned int)v9 )
      {
LABEL_8:
        v11 = v10;
        v12 = (char *)SddlpAlloc(v10);
        *a4 = v12;
        if ( v12 )
        {
          if ( a3 == -5 )
          {
            v19 = L"@DEVICE.";
          }
          else if ( a3 == -7 )
          {
            v19 = L"@USER.";
          }
          else
          {
            if ( a3 != -6 )
            {
              if ( a3 == -4 )
                memmove(v12, L"@TOKEN.", v7);
              v13 = v7;
              if ( a3 == -8 )
              {
                v14 = *a5;
                memmove(&v12[v13], (const void *)(a1 + (unsigned int)*a5), v9);
LABEL_16:
                *(_WORD *)&v12[2 * (v11 >> 1) - 2] = 0;
                *a5 = v14 + v9;
                goto LABEL_17;
              }
LABEL_40:
              memmove(&v12[v13], v8, (unsigned int)Size);
              v14 = *a5;
              goto LABEL_16;
            }
            v19 = L"@RESOURCE.";
          }
          memmove(v12, v19, v7);
          v13 = v7;
          goto LABEL_40;
        }
        v6 = 8;
LABEL_17:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        return v6;
      }
      return 534;
    }
  }
  return 87LL;
}
