/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x14033A6C4
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x14033B4C4 (LdrpFindMessageInAlternateModule.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  char v5; // si
  unsigned __int16 v7; // bx
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  v5 = a4;
  if ( (unsigned int)(a3 - 3) > 1 )
    return 3221225713LL;
  if ( (a4 & 0x1000000) != 0 )
    v7 = -3346;
  else
    v7 = *(_WORD *)(a2 + 16);
  v11 = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, &v10, &v11, a4);
  if ( (int)result >= 0 )
  {
    v9 = v10;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 33554480, (__int64)a5);
    if ( (v5 & 0x40) != 0 && (int)result >= 0 )
    {
      result = LdrpFindMessageInAlternateModule(v10, *a5, 0, *(_DWORD *)(a2 + 24), 0);
      if ( (int)result < 0 )
        *a5 = 0LL;
    }
  }
  else if ( (_DWORD)result == -1073741766 || (_DWORD)result == -1073741772 )
  {
    return 3221946369LL;
  }
  return result;
}
