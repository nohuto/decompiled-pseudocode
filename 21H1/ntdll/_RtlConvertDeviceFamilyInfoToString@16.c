/*
 * XREFs of _RtlConvertDeviceFamilyInfoToString@16 @ 0x4B334FA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980 (_RtlpGetDeviceFamilyInfoEnum@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlConvertDeviceFamilyInfoToString(size_t *a1, size_t *a2, void *a3, void *a4)
{
  char v4; // bl
  wchar_t *v5; // ecx
  void *v6; // eax
  wchar_t *v7; // edx
  const unsigned __int16 *v8; // edi
  size_t v10; // edx
  size_t v11; // esi
  void *Src; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v14; // [esp+10h] [ebp-4h] BYREF

  v4 = 0;
  RtlpGetDeviceFamilyInfoEnum(0, (int *)&v14, (int *)&Src);
  v5 = off_4B281A98[v14 <= 0x11 ? v14 : 0];
  v6 = (unsigned int)Src <= 0x21 ? Src : 0;
  Src = v5;
  v7 = v5 + 1;
  v8 = (const unsigned __int16 *)*((_DWORD *)&off_4B281AE0 + (_DWORD)v6);
  while ( *v5++ )
    ;
  v10 = 2 * (v5 - v7) + 2;
  v11 = 2 * wcslen(v8) + 2;
  if ( v10 > *a1 || v11 > *a2 )
    v4 = 1;
  *a1 = v10;
  *a2 = v11;
  if ( v4 )
    return -1073741789;
  memcpy(a3, Src, v10);
  memcpy(a4, v8, v11);
  return 0;
}
