/*
 * XREFs of OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402A53F8
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // eax

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1304);
  else
    v1 = qword_140D24990;
  v2 = (unsigned int)PsObjectDirectorySiloContextSlot;
  v3 = 0LL;
  if ( (unsigned int)PsObjectDirectorySiloContextSlot >= 0x20 )
  {
    v2 = (unsigned int)(PsObjectDirectorySiloContextSlot - 32);
    if ( (unsigned int)v2 >= 0x100 )
    {
      v6 = -1073741811;
LABEL_14:
      if ( v6 >= 0 )
        return (PVOID)v3;
      return ObpRootDirectoryObject;
    }
    v1 = *(_QWORD *)(v1 + 512);
    if ( !v1 )
    {
      v6 = -1073741275;
      goto LABEL_14;
    }
  }
  v4 = *(_QWORD *)(v1 + 16 * v2 + 8);
  v3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (v4 & 1) != 0 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  return ObpRootDirectoryObject;
}
