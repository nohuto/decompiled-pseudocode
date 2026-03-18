/*
 * XREFs of _NtGdiDoPalette@24 @ 0x7B556
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreAnimatePalette@16 @ 0x21E235 (_GreAnimatePalette@16.c)
 */

int __stdcall NtGdiDoPalette(int a1, unsigned __int16 a2, unsigned __int16 a3, char *a4, unsigned int a5, int a6)
{
  int v6; // esi
  BOOL v7; // edi
  unsigned int v8; // ecx
  int v9; // edi
  int v10; // eax
  size_t v12; // edi
  size_t v13; // ebx
  struct tagPALETTEENTRY *Src; // [esp+14h] [ebp-1Ch]

  v6 = 0;
  v7 = 1;
  Src = 0;
  v8 = a5;
  if ( a5 > 5 )
    return v6;
  if ( !dword_24CAF4[2 * a5] )
  {
    if ( a4 )
    {
      if ( a3 )
      {
        Src = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * a3);
        v7 = Src != 0;
        v8 = a5;
      }
      else
      {
        v7 = 0;
      }
    }
    v6 = 0;
    if ( v7 )
    {
      v9 = a3;
      v10 = (*(&off_24CAF0 + 2 * v8))(a1, a2, a3, Src);
      v6 = v10;
      if ( a3 >= v10 )
        v9 = v10;
      if ( v9 > 0 && a4 )
      {
        v12 = 4 * v9;
        if ( (unsigned int)&a4[v12] > _MmUserProbeAddress || &a4[v12] <= a4 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a4, Src, v12);
      }
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    v13 = 4 * a3;
    Src = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(v13);
    if ( !Src )
      goto LABEL_10;
    if ( &a4[v13] < a4 || (unsigned int)&a4[v13] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(Src, a4, v13);
  }
  v6 = (*(&off_24CAF0 + 2 * a5))(a1, a2, a3, Src);
LABEL_10:
  if ( Src )
    FreeTmpBuffer(Src);
  return v6;
}
