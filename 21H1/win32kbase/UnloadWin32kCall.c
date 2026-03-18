/*
 * XREFs of UnloadWin32kCall @ 0x1C0035EEC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x1C0035F84 (-SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z.c)
 */

struct _EJOB *UnloadWin32kCall()
{
  struct _EJOB *result; // rax
  struct _EJOB *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  result = SetWin32kSilo(&v4);
  v1 = result;
  if ( off_1C024B2D8 )
  {
    v2 = 0LL;
    v3 = 0LL;
    do
    {
      if ( (*(_QWORD **)((char *)&Win32kApiSetTable + v3 + 8))[5] )
      {
        MmUnloadSystemImage();
        result = *(struct _EJOB **)((char *)&Win32kApiSetTable + v3 + 8);
        *((_QWORD *)result + 5) = 0LL;
      }
      ++v2;
      v3 = 16 * v2;
    }
    while ( *(&Win32kApiSetTable + 2 * v2 + 1) );
  }
  if ( v1 )
    return (struct _EJOB *)PsDetachSiloFromCurrentThread(v1);
  return result;
}
