/*
 * XREFs of IoSetLinkShareAccess @ 0x1406C8E60
 * Callers:
 *     IoSetShareAccess @ 0x1406C8560 (IoSetShareAccess.c)
 *     RawCreate @ 0x1406C8AF4 (RawCreate.c)
 *     IoSetShareAccessEx @ 0x14077C4B0 (IoSetShareAccessEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSetLinkShareAccess(int a1, char a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  int v6; // r10d
  int v8; // ebx
  int v9; // ecx
  _DWORD *v10; // rax
  bool v11; // dl
  __int64 result; // rax

  v6 = a1 & 0x21;
  v8 = a1 & 6;
  *(_BYTE *)(a3 + 74) = v6 != 0;
  v9 = a1 & 0x10000;
  *(_BYTE *)(a3 + 75) = v8 != 0;
  *(_BYTE *)(a3 + 76) = v9 != 0;
  v10 = *(_DWORD **)(a3 + 208);
  v11 = v10 && (*v10 & 1) != 0;
  if ( v6 || v8 || v9 )
  {
    *(_BYTE *)(a3 + 78) = (a2 & 2) != 0;
    *(_BYTE *)(a3 + 77) = a2 & 1;
    *(_BYTE *)(a3 + 79) = (a2 & 4) != 0;
    if ( a6 < 0 && (a2 & 1) == 0 )
      *(_BYTE *)(a3 + 77) = 1;
    if ( v11 )
    {
      result = 0LL;
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    else
    {
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 4) = *(unsigned __int8 *)(a3 + 74);
      *(_DWORD *)(a4 + 8) = *(unsigned __int8 *)(a3 + 75);
      *(_DWORD *)(a4 + 12) = *(unsigned __int8 *)(a3 + 76);
      *(_DWORD *)(a4 + 16) = *(unsigned __int8 *)(a3 + 77);
      *(_DWORD *)(a4 + 20) = *(unsigned __int8 *)(a3 + 78);
      result = *(unsigned __int8 *)(a3 + 79);
    }
    *(_DWORD *)(a4 + 24) = result;
    if ( a5 && !v11 )
    {
      ++*a5;
      if ( (a6 & 0x80u) == 0 )
        a5[1] += *(unsigned __int8 *)(a3 + 76);
      result = *(unsigned __int8 *)(a3 + 79);
      a5[2] += result;
    }
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_DWORD *)(a4 + 24) = 0;
  }
  return result;
}
