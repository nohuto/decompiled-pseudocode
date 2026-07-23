/*
 * XREFs of AslpFileVerQueryBlock @ 0x1407B3130
 * Callers:
 *     AslpFileQueryVersionString @ 0x1407B2FFC (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x1403BD8D0 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1403BD9C8 (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  _WORD *v10; // rcx
  char *v11; // rsi
  __int16 v12; // r14
  unsigned __int16 *v13; // rbx
  const wchar_t *v14; // r12
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _WORD *v20; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  i = a1;
  P = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v8 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8 = AslStringDuplicate((wchar_t **)&P, a2);
    if ( v8 < 0 )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      v9 = *i;
      if ( (__int16)v9 < 8 )
      {
        v8 = -1073741811;
        AslLogCallPrintf(1LL);
      }
      else
      {
        v10 = P;
        v11 = (char *)i + v9;
        v12 = *(unsigned __int16 *)((char *)i + v9 - 2);
        v13 = (unsigned __int16 *)v11;
        *((_WORD *)v11 - 1) = 0;
LABEL_6:
        v14 = AslpFileStringTokenize(v10, v7, &v20);
        if ( v14 )
        {
          v15 = (_DWORD)v11 - (_DWORD)i;
          if ( (unsigned int)((_DWORD)v11 - (_DWORD)i) >= 8
            && *i <= v15
            && AslpFileVerBlockGetValueOffset(&v22, (__int64)i, v15) >= 0 )
          {
            v16 = *i;
            v17 = v22 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
            v22 = v17;
            if ( v17 <= v16 )
            {
              v13 = (unsigned __int16 *)((char *)i + v16);
              for ( i = (unsigned __int16 *)((char *)i + v17);
                    i < v13;
                    i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                v18 = *i;
                if ( (unsigned __int16)v18 <= 8u || v18 > (char *)v13 - (char *)i )
                  break;
                if ( !wcsicmp(v14, i + 3) )
                {
                  v10 = 0LL;
                  goto LABEL_6;
                }
              }
            }
          }
          v8 = -1073741275;
        }
        else
        {
          *a3 = i;
          *a4 = (char *)v13 - (char *)i;
          v8 = 0;
        }
        *((_WORD *)v11 - 1) = v12;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0x74705041u);
  }
  return (unsigned int)v8;
}
