/*
 * XREFs of _PssNtWalkSnapshot@20 @ 0x4B386EE0
 * Callers:
 *     <none>
 * Callees:
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 *     _PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@12 @ 0x4B388B4A (_PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@12.c)
 *     _PsspWalkInfoClass_PSS_WALK_HANDLES@12 @ 0x4B388C1F (_PsspWalkInfoClass_PSS_WALK_HANDLES@12.c)
 *     _PsspWalkInfoClass_PSS_WALK_THREADS@12 @ 0x4B388D3F (_PsspWalkInfoClass_PSS_WALK_THREADS@12.c)
 *     _PsspWalkInfoClass_PSS_WALK_VA_SPACE@12 @ 0x4B388E5F (_PsspWalkInfoClass_PSS_WALK_VA_SPACE@12.c)
 */

int __stdcall PssNtWalkSnapshot(unsigned int *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  void *retaddr; // [esp+8h] [ebp+4h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      switch ( a2 )
      {
        case 1:
          if ( !a4 || a5 == 52 )
            return PsspWalkInfoClass_PSS_WALK_VA_SPACE(a1, a3, a4);
          break;
        case 2:
          if ( !a4 || a5 == 48 )
            return PsspWalkInfoClass_PSS_WALK_HANDLES(a1, a3, a4);
          break;
        case 3:
          if ( !a4 || a5 == 104 )
            return PsspWalkInfoClass_PSS_WALK_THREADS(a1, a3, a4);
          break;
        default:
          return -1073741821;
      }
      return -1073741820;
    }
    if ( a4 && a5 != 48 )
      return -1073741820;
    return PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(a1, a3, a4);
  }
  return result;
}
