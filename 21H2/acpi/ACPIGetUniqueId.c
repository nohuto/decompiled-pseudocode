/*
 * XREFs of ACPIGetUniqueId @ 0x1C00AF8F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rsi
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  void *Src; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v3 = *(__int64 **)(a1 + 760);
  v8 = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v4 = AMLIGetNamedChild(v3, 1145656671);
  v5 = (volatile signed __int32 *)v4;
  if ( !v4 )
    return 3221226021LL;
  v7 = AMLIEvalNameSpaceObject(v4, (__int64)&v8, 0, 0LL);
  AMLIDereferenceHandleEx(v5);
  if ( v7 >= 0 )
  {
    if ( WORD1(v8) == 1 )
    {
      *a2 = v9;
    }
    else if ( WORD1(v8) == 2 && (unsigned int)(DWORD2(v9) - 1) <= 8 )
    {
      memmove(a2, Src, (unsigned int)(DWORD2(v9) - 1));
    }
    else
    {
      v7 = -1073741811;
    }
    AMLIFreeDataBuffs((__int64)&v8);
  }
  return (unsigned int)v7;
}
