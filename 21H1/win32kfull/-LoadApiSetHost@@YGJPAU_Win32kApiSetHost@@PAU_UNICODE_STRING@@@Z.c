/*
 * XREFs of ?LoadApiSetHost@@YGJPAU_Win32kApiSetHost@@PAU_UNICODE_STRING@@@Z @ 0xF8CA0
 * Callers:
 *     ?ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z @ 0xF8DBA (-ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z.c)
 * Callees:
 *     ?FormFullImageName@@YGKPBU_UNICODE_STRING@@PAU1@1@Z @ 0xF8C20 (-FormFullImageName@@YGKPBU_UNICODE_STRING@@PAU1@1@Z.c)
 */

int __fastcall LoadApiSetHost(int a1, const STRING *a2)
{
  const STRING *v2; // eax
  int v3; // ebx
  int v5; // edi
  unsigned __int16 *v6; // ecx
  int v7; // esi
  struct _UNICODE_STRING *v9; // [esp+0h] [ebp-30h]
  struct _UNICODE_STRING *v10; // [esp+4h] [ebp-2Ch]
  _WORD v11[2]; // [esp+10h] [ebp-20h] BYREF
  const wchar_t *v12; // [esp+14h] [ebp-1Ch]
  _WORD v13[2]; // [esp+18h] [ebp-18h] BYREF
  const wchar_t *v14; // [esp+1Ch] [ebp-14h]
  struct _UNICODE_STRING v15; // [esp+20h] [ebp-10h] BYREF
  const STRING *v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)&v15.Length = 0;
  v2 = a2;
  v15.Buffer = 0;
  v3 = 0;
  v16 = a2;
  v13[0] = 42;
  v5 = -2147483647;
  v13[1] = 44;
  v11[0] = 58;
  v11[1] = 60;
  v6 = v13;
  v17 = a1;
  v14 = L"\\SystemRoot\\System32\\";
  v12 = L"\\SystemRoot\\System32\\Drivers\\";
  while ( 1 )
  {
    ++v3;
    if ( !FormFullImageName(v2, v6, (struct _STRING *)&v15, v9, v10) )
      break;
    v7 = MmLoadSystemImage(&v15, 0, 0, v5, a1 + 20, a1 + 16);
    ExFreePoolWithTag(v15.Buffer, 0);
    v15.Buffer = 0;
    if ( v7 == -1073741411 || v7 == -1073741554 )
      return 0;
    if ( v7 != -1073741772 )
      return v7;
    v2 = v16;
    v6 = v11;
    v5 &= ~1u;
    if ( v3 >= 2 )
      return v7;
    a1 = v17;
  }
  return -1073741801;
}
