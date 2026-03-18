/*
 * XREFs of ?WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z @ 0x88F8C
 * Callers:
 *     ?bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x88E5A (-bAdd@EFSOBJ@@QAEHPAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 * Callees:
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bGrow@EFSOBJ@@QAEHXZ @ 0x2293A6 (-bGrow@EFSOBJ@@QAEHXZ.c)
 */

void __thiscall EFSOBJ::WriteEFE(char ***this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  char **v4; // ecx
  char *v5; // ecx
  int v6; // ebx
  char *v7; // eax
  char v8; // al
  void *v9; // eax
  const void *v10; // edi
  int v11; // [esp-4h] [ebp-44h]
  size_t Size; // [esp+18h] [ebp-28h]
  char *v13; // [esp+1Ch] [ebp-24h]
  BOOL v14; // [esp+20h] [ebp-20h]
  size_t v15; // [esp+48h] [ebp+8h]

  (*this)[9] += *(_DWORD *)(*(_DWORD *)a3 + 80);
  v4 = *this;
  if ( !v4[4] && v4[2] )
  {
    if ( (unsigned int)v4[3] < *(_DWORD *)(*(_DWORD *)a3 + 80) )
    {
      v4[4] = (char *)111;
    }
    else if ( v4[6] + 8 <= v4[7] || EFSOBJ::bGrow((EFSOBJ *)this) )
    {
      v5 = (*this)[6];
      *(_DWORD *)v5 = *(_DWORD *)a2;
      *((_DWORD *)v5 + 1) = *((_DWORD *)a2 + 1);
      (*this)[6] += 8;
      v13 = 0;
      v14 = 0;
      v6 = 1;
      v7 = **this;
      if ( v7 )
      {
        v13 = **this;
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v14 = 1;
          LOBYTE(v6) = *((_BYTE *)a2 + 5);
        }
        else
        {
          v14 = (v7[129] & 1) == 0;
          LOBYTE(v6) = v7[128];
        }
        v6 = (unsigned __int8)v6;
      }
      else
      {
        v8 = *((_BYTE *)a2 + 4);
        if ( (v8 & 1) != 0 )
          v13 = (char *)gpfsTable + 196 * *((unsigned __int16 *)a2 + 3);
        if ( (v8 & 2) != 0 )
        {
          v14 = 1;
          v6 = *((unsigned __int8 *)a2 + 5);
        }
      }
      Size = *(_DWORD *)(*(_DWORD *)a3 + 80);
      v9 = (void *)AllocFreeTmpBuffer(Size);
      v10 = v9;
      if ( v9 )
      {
        memset(v9, 0, Size);
        v15 = cjCopyFontDataW((*this)[5], v10, a3, *(_DWORD *)a2, v13, v6, v14, v11);
        memcpy((*this)[2], v10, v15);
        FreeTmpBuffer(v10);
        (*this)[2] += v15;
        (*this)[3] -= v15;
      }
      else
      {
        (*this)[4] = (char *)8;
      }
    }
    else
    {
      (*this)[4] = (char *)14;
    }
  }
}
