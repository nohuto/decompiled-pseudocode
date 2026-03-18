/*
 * XREFs of ?ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z @ 0xF8DBA
 * Callers:
 *     _InitializeWin32kCall@0 @ 0xF8EA8 (_InitializeWin32kCall@0.c)
 * Callees:
 *     ?LoadApiSetHost@@YGJPAU_Win32kApiSetHost@@PAU_UNICODE_STRING@@@Z @ 0xF8CA0 (-LoadApiSetHost@@YGJPAU_Win32kApiSetHost@@PAU_UNICODE_STRING@@@Z.c)
 *     ?ResolveApiSetFunction@@YGJPAU_Win32kApiSetFunction@@PAD1HPAX@Z @ 0xF8D66 (-ResolveApiSetFunction@@YGJPAU_Win32kApiSetFunction@@PAD1HPAX@Z.c)
 *     _ApiSetResolveToHost@20 @ 0xF8F9A (_ApiSetResolveToHost@20.c)
 */

int __thiscall ResolveApiSetHost(_DWORD **this)
{
  int v2; // ebx
  PCWSTR *v3; // eax
  int v4; // ecx
  char v5; // al
  int v7; // [esp+0h] [ebp-20h]
  void *v8; // [esp+4h] [ebp-1Ch]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-14h] BYREF
  STRING v10; // [esp+14h] [ebp-Ch] BYREF
  char v11; // [esp+1Fh] [ebp-1h] BYREF

  v2 = 0;
  v11 = 0;
  *(_DWORD *)&v10.Length = 0;
  v3 = (PCWSTR *)this[1];
  v10.Buffer = 0;
  if ( v3 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    RtlInitUnicodeString(&DestinationString, *v3);
    if ( (int)ApiSetResolveToHost(v4, &v11, &v10) < 0 )
    {
      v5 = v11;
    }
    else
    {
      if ( !v11 )
        return v2;
      v5 = v10.Length == 0 ? 0 : v11;
    }
    if ( v5 )
    {
      v2 = LoadApiSetHost((int)this[1], &v10);
      if ( v2 >= 0 )
        return ResolveApiSetFunction(
                 this[1][1],
                 *this,
                 (struct _Win32kApiSetFunction *)this[1][2],
                 (char *)this[1][3],
                 (char *)this[1][4],
                 v7,
                 v8);
    }
  }
  return v2;
}
