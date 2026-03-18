/*
 * XREFs of ?vHorizontalLine8@@YGXPAEJJK@Z @ 0x2402BE
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vHorizontalLine8(unsigned __int8 *a1, int a2, int a3, unsigned int Val)
{
  int v4; // ebx
  unsigned __int8 *v5; // edi
  ULONG v6; // eax
  unsigned __int8 *v7; // edi
  int v8; // ebx
  int v9; // ebx

  v4 = a3 - a2;
  v5 = &a1[a2];
  if ( (unsigned int)(a3 - a2) <= 6 )
  {
    if ( v4 )
      memset(&a1[a2], Val, a3 - a2);
    return;
  }
  if ( (a2 & 3) == 1 )
  {
    v6 = Val;
    *v5++ = Val;
    --v4;
  }
  else
  {
    if ( (a2 & 3) != 2 )
    {
      v6 = Val;
      if ( (a2 & 3) == 3 )
      {
        *v5++ = Val;
        --v4;
      }
      goto LABEL_11;
    }
    v6 = Val;
  }
  *(_WORD *)v5 = v6;
  v5 += 2;
  v4 -= 2;
LABEL_11:
  RtlFillMemoryUlong(v5, v4 & 0xFFFFFFFC, v6);
  v7 = &v5[v4 & 0xFFFFFFFC];
  v8 = (v4 & 3) - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *(_WORD *)v7 = Val;
        v7[2] = Val;
      }
    }
    else
    {
      *(_WORD *)v7 = Val;
    }
  }
  else
  {
    *v7 = Val;
  }
}
