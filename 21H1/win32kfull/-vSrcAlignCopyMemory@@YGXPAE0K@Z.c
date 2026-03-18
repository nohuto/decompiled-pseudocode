/*
 * XREFs of ?vSrcAlignCopyMemory@@YGXPAE0K@Z @ 0xFBF0A
 * Callers:
 *     ?vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x52550 (-vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0xAAD26 (-vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z @ 0x2308A5 (-vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z @ 0x2308FB (-vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x230B4E (-vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

void __userpurge vSrcAlignCopyMemory(
        unsigned int a1@<edx>,
        _WORD *a2@<ecx>,
        size_t Size,
        unsigned __int8 *a4,
        unsigned int a5)
{
  size_t v5; // esi
  size_t v6; // ecx
  _QWORD *v7; // esi
  _QWORD *v8; // edi
  _QWORD *v9; // [esp+4h] [ebp-8h]
  _WORD *v10; // [esp+8h] [ebp-4h]

  v9 = (_QWORD *)a1;
  v10 = a2;
  v5 = Size;
  if ( a1 >= (unsigned int)a2 || (unsigned int)a2 >= a1 + Size )
  {
    if ( Size )
    {
      do
      {
        if ( (a1 & 7) != 0 || v5 < 8 )
        {
          if ( (a1 & 3) != 0 || v5 < 4 )
          {
            if ( (a1 & 1) != 0 || v5 < 2 )
            {
              *(_BYTE *)a2 = *(_BYTE *)a1;
              a2 = (_WORD *)((char *)v10 + 1);
              a1 = (unsigned int)v9 + 1;
              v5 = Size - 1;
            }
            else
            {
              *v10 = *(_WORD *)a1;
              a2 = v10 + 1;
              a1 = (unsigned int)v9 + 2;
              v5 = Size - 2;
            }
          }
          else
          {
            *(_DWORD *)v10 = *(_DWORD *)a1;
            a2 = v10 + 2;
            a1 = (unsigned int)v9 + 4;
            v5 = Size - 4;
          }
          v10 = a2;
          v9 = (_QWORD *)a1;
          Size = v5;
        }
        else if ( gbMMXProcessor )
        {
          v6 = Size;
          v7 = v9;
          v8 = v10;
          do
          {
            *v8++ = *v7++;
            v6 -= 8;
          }
          while ( v6 >= 8 );
          v9 = v7;
          v10 = v8;
          Size = v6;
          v5 = v6;
          a1 = (unsigned int)v9;
          a2 = v8;
        }
        else
        {
          do
          {
            *(_DWORD *)a2 = *(_DWORD *)a1;
            *((_DWORD *)a2 + 1) = *(_DWORD *)(a1 + 4);
            v5 = Size - 8;
            a2 = v10 + 4;
            a1 = (unsigned int)(v9 + 1);
            v10 += 4;
            ++v9;
            Size = v5;
          }
          while ( v5 >= 8 );
        }
      }
      while ( v5 );
    }
  }
  else
  {
    memmove(a2, (const void *)a1, Size);
  }
}
