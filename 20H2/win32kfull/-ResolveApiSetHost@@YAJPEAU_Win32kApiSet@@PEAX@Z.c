/*
 * XREFs of ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C011E480
 * Callers:
 *     InitializeWin32kCall @ 0x1C011E3D0 (InitializeWin32kCall.c)
 * Callees:
 *     ?ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z @ 0x1C011E554 (-ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z.c)
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x1C011E5E8 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 *     ApiSetResolveToHost @ 0x1C011E868 (ApiSetResolveToHost.c)
 */

__int64 __fastcall ResolveApiSetHost(struct _Win32kApiSet *a1, void *a2)
{
  int v2; // ebx
  int v3; // esi
  PCWSTR *v4; // rdx
  int v6; // r8d
  char v7; // cl
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v10; // [rsp+40h] [rbp-18h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (int)a2;
  v4 = (PCWSTR *)*((_QWORD *)a1 + 1);
  v11 = 0;
  v9 = 0LL;
  if ( v4 )
  {
    v10 = 0LL;
    RtlInitUnicodeString(&v10, *v4);
    if ( (int)ApiSetResolveToHost(v3, (unsigned int)&v10, v6, (unsigned int)&v11, (__int64)&v9) < 0 )
    {
      v7 = v11;
    }
    else
    {
      if ( !v11 )
        return (unsigned int)v2;
      v7 = v9.Length != 0 ? v11 : 0;
    }
    if ( v7 )
    {
      v2 = LoadApiSetHost(*((struct _Win32kApiSetHost **)a1 + 1), &v9);
      if ( v2 >= 0 )
        return (unsigned int)ResolveApiSetFunction(
                               *(struct _Win32kApiSetFunction **)a1,
                               *(char **)(*((_QWORD *)a1 + 1) + 8LL),
                               *(char **)(*((_QWORD *)a1 + 1) + 16LL),
                               *(_DWORD *)(*((_QWORD *)a1 + 1) + 24LL),
                               *(void **)(*((_QWORD *)a1 + 1) + 32LL));
    }
  }
  return (unsigned int)v2;
}
