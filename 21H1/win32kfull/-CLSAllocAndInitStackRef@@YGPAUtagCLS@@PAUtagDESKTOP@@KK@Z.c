/*
 * XREFs of ?CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z @ 0x4750A
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 * Callees:
 *     ??$InitLookAsideRef@UtagCLS@@@@YGEPAUtagCLS@@@Z @ 0x47532 (--$InitLookAsideRef@UtagCLS@@@@YGEPAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z @ 0x4756E (-ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z @ 0x479A8 (-ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z.c)
 */

struct tagCLS *__userpurge CLSAllocAndInitStackRef@<eax>(
        struct tagDESKTOP *a1@<ecx>,
        struct tagDESKTOP *a2,
        unsigned int a3,
        unsigned int a4)
{
  void *v4; // eax
  void *v5; // esi
  unsigned int v7; // [esp+0h] [ebp-8h]
  struct tagDESKTOP *v8; // [esp+0h] [ebp-8h]
  unsigned int v9; // [esp+4h] [ebp-4h]
  struct tagCLS *v10; // [esp+4h] [ebp-4h]

  v4 = ClassAlloc(a1, v7, v9);
  v5 = v4;
  if ( !v4 || (unsigned __int8)InitLookAsideRef<tagCLS>(v4) )
    return (struct tagCLS *)v5;
  ClassFree(v8, v10);
  return 0;
}
