/*
 * XREFs of ?IsUnmappedSystemFolderFont@UmfdClientSideFileViewMapper@@AAE_NXZ @ 0xD31A4
 * Callers:
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall UmfdClientSideFileViewMapper::IsUnmappedSystemFolderFont(UmfdClientSideFileViewMapper *this)
{
  int v1; // esi
  unsigned int v2; // edx
  unsigned int v3; // ecx
  bool result; // al
  int v5; // eax

  v1 = *(_DWORD *)this;
  v2 = *(_DWORD *)(*(_DWORD *)this + 20);
  if ( !v2 )
    return 0;
  v3 = 0;
  result = 1;
  do
  {
    if ( !result )
      break;
    v5 = *(_DWORD *)(*(_DWORD *)(v1 + 120) + 4 * v3);
    result = (*(_BYTE *)(v5 + 24) & 0x10) != 0 && !*(_DWORD *)(v5 + 28);
    ++v3;
  }
  while ( v3 < v2 );
  return result;
}
