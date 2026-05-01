/*
 * XREFs of ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001E0A0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BF28 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007E858 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800353D4 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetFirstDependency(struct _HAM_DEPENDENCY_GROUP *a1)
{
  unsigned __int64 v1; // rax
  struct _HAM_DEPENDENCY_LINK *v2; // rcx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax
  struct _HAM_DEPENDENCY_LINK *v4; // rdx
  char *v5; // r9

  v1 = (unsigned __int64)a1 + 72;
  v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  if ( ((unsigned __int8)v2 & 1) != 0 )
  {
    if ( v2 == (struct _HAM_DEPENDENCY_LINK *)1 )
      NextLink = 0LL;
    else
      NextLink = (struct _HAM_DEPENDENCY_LINK *)((unsigned __int64)v2 ^ (v1 | 1));
  }
  else
  {
    NextLink = v2;
  }
  if ( !NextLink )
    return 0LL;
  while ( 1 )
  {
    v4 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
    v5 = 0LL;
    if ( v4 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
      v5 = (char *)v4 - 16;
    if ( v5 )
      break;
    NextLink = HampDepGroupGetNextLink(NextLink);
    if ( !NextLink )
      return 0LL;
  }
  return (struct _HAM_HOST_DEPENDENCY *)v5;
}
