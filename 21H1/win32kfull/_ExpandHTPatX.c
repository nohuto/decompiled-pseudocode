/*
 * XREFs of _ExpandHTPatX @ 0x1BC025
 * Callers:
 *     _GenerateWORDPat @ 0x1BC0A9 (_GenerateWORDPat.c)
 *     _Generate_HTSC_WORD @ 0x1BC242 (_Generate_HTSC_WORD.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall ExpandHTPatX(char *a1, int a2, int a3, void *a4)
{
  int result; // eax
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // edx
  unsigned int v8; // edi
  char *v9; // ecx
  size_t v10; // eax
  int v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+8h] [ebp-Ch]
  unsigned int v13; // [esp+Ch] [ebp-8h]
  char *Src; // [esp+10h] [ebp-4h]
  char *v15; // [esp+20h] [ebp+Ch]

  result = 6 * (_DWORD)a4;
  v5 = 6 * a2;
  Src = a1;
  v12 = 6 * (_DWORD)a4;
  if ( 6 * (int)a4 > (unsigned int)(6 * a2) )
  {
    v6 = a3;
    if ( a3 )
    {
      v7 = 6 * (_DWORD)a4;
      result -= v5;
      v11 = result;
      do
      {
        --v6;
        v15 = &a1[v5];
        v8 = result;
        if ( result )
        {
          v9 = &a1[v5];
          do
          {
            if ( v8 <= v5 )
            {
              v10 = v8;
              v13 = v8;
            }
            else
            {
              v10 = v5;
              v13 = v5;
            }
            memcpy(v9, Src, v10);
            v9 = &v15[v13];
            v15 += v13;
            v8 -= v13;
          }
          while ( v8 );
          a1 = Src;
          result = v11;
          v7 = v12;
        }
        a1 += v7;
        Src = a1;
      }
      while ( v6 );
    }
  }
  return result;
}
