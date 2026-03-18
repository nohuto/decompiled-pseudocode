/*
 * XREFs of ConvertToBuffer @ 0x1C006B0F8
 * Callers:
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     ToBuffer @ 0x1C006A640 (ToBuffer.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall ConvertToBuffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int16 v5; // ax
  unsigned int v6; // esi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h]
  _BYTE *v15; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = *(_WORD *)(a1 + 2);
  WORD1(v13) = 3;
  if ( v5 == 1 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = 8;
    }
    else
    {
      v8 = *(unsigned int *)(a1 + 16);
      v9 = 4;
    }
    DWORD2(v14) = v9;
    v10 = (_BYTE *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v9);
    v15 = v10;
    if ( v10 )
    {
      v11 = v9;
      do
      {
        *v10++ = v8;
        v8 >>= 8;
        --v11;
      }
      while ( v11 );
      goto LABEL_15;
    }
    return (unsigned int)-1073741670;
  }
  if ( v5 > 1u && v5 <= 3u )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( !v6 )
    {
LABEL_15:
      FreeDataBuffs(a2, 1u);
      *(_OWORD *)a2 = v13;
      *(_OWORD *)(a2 + 16) = v14;
      *(_QWORD *)(a2 + 32) = v15;
      return v2;
    }
    DWORD2(v14) = *(_DWORD *)(a1 + 24);
    v7 = (_BYTE *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v6);
    v15 = v7;
    if ( v7 )
    {
      memmove(v7, *(const void **)(a1 + 32), v6);
      goto LABEL_15;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)-1072431095;
}
