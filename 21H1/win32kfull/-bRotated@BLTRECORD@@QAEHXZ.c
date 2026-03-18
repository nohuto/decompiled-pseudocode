/*
 * XREFs of ?bRotated@BLTRECORD@@QAEHXZ @ 0x1EC9F7
 * Callers:
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     <none>
 */

int __thiscall BLTRECORD::bRotated(BLTRECORD *this)
{
  int v1; // esi
  int v2; // edx
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v1 = *((_DWORD *)this + 18);
  v7 = *((_DWORD *)this + 20);
  if ( v7 != v1 )
    return 1;
  v2 = *((_DWORD *)this + 21);
  v3 = *((_DWORD *)this + 17);
  if ( v2 != v3 )
    return 1;
  if ( (((unsigned __int8)v1 | (unsigned __int8)v3) & 0xF) != 0 )
    return 1;
  v4 = *((_DWORD *)this + 19);
  if ( (((unsigned __int8)v4 | (unsigned __int8)(v7 | v2)) & 0xF) != 0 )
    return 1;
  v5 = *((_DWORD *)this + 22);
  if ( (v5 & 0xF) != 0 )
    return 1;
  *((_DWORD *)this + 28) = v5 >> 4;
  result = 0;
  *((_DWORD *)this + 25) = v3 >> 4;
  *((_DWORD *)this + 26) = v1 >> 4;
  *((_DWORD *)this + 27) = v4 >> 4;
  return result;
}
