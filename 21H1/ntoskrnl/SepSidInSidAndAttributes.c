/*
 * XREFs of SepSidInSidAndAttributes @ 0x1407040E0
 * Callers:
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140703EE8 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 */

char __fastcall SepSidInSidAndAttributes(unsigned __int8 **a1, unsigned int a2, __int64 a3, char *a4)
{
  unsigned __int8 **v6; // rbx
  int v7; // edi
  unsigned int v8; // r14d
  char v9; // r15
  unsigned __int8 *v10; // rdx

  v6 = a1;
  if ( !a1 )
    return 0;
  v7 = 0;
  v8 = 4 * (unsigned __int8)a4[1] + 8;
  if ( !a2 )
    return 0;
  v9 = *a4;
  while ( 1 )
  {
    v10 = *v6;
    if ( v9 == **v6 && v8 == 4 * v10[1] + 8 && !memcmp(a4, v10, v8) )
      break;
    v6 += 2;
    if ( ++v7 >= a2 )
      return 0;
  }
  return 1;
}
