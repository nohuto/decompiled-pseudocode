/*
 * XREFs of EtwpAddReloggedHeaderExtensionEvents @ 0x18004C3CC
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

_UNKNOWN **__fastcall EtwpAddReloggedHeaderExtensionEvents(__int64 a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  const void *v6; // rdx
  const void *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r14
  unsigned int v11; // ebp
  __int64 v12; // rdi
  unsigned int v13; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = *(const void **)(a1 + 520);
  if ( v6 )
  {
    v9 = *(_DWORD *)(a1 + 528);
    v10 = *(unsigned int *)(a2 + 48);
    v11 = (v9 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v10 < a3 && (unsigned int)v10 >= 0x180 )
    {
      result = (_UNKNOWN **)(a3 - (unsigned int)v10);
      if ( (unsigned int)result >= v11 )
      {
        memmove((void *)(a2 + v10), v6, v9);
        result = (_UNKNOWN **)((unsigned int)v10 + v11);
        *(_DWORD *)(a2 + 48) = (_DWORD)result;
      }
    }
  }
  v8 = *(const void **)(a1 + 536);
  if ( v8 )
  {
    result = (_UNKNOWN **)*(unsigned int *)(a1 + 544);
    v12 = *(unsigned int *)(a2 + 48);
    v13 = ((_DWORD)result + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v12 < a3 && (unsigned int)v12 >= 0x180 && a3 - (unsigned int)v12 >= v13 )
    {
      memmove((void *)(a2 + v12), v8, (unsigned int)result);
      result = (_UNKNOWN **)((unsigned int)v12 + v13);
      *(_DWORD *)(a2 + 48) = (_DWORD)result;
    }
  }
  return result;
}
