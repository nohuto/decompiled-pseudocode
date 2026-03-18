/*
 * XREFs of FreeObject @ 0x1C008BB90
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C001D000 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C005142C (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     HmgAlloc @ 0x1C007AF10 (HmgAlloc.c)
 *     HmgFree @ 0x1C00C3E20 (HmgFree.c)
 *     EngDeleteDriverObj @ 0x1C0155EA0 (EngDeleteDriverObj.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FreeObject(__int64 a1, int a2)
{
  void * near *v3; // rdi
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 14) >= 0 )
    return Win32FreePool(a1);
  v3 = (&pHmgLookAsideList)[a2];
  if ( qword_1C0258C20 )
    result = qword_1C0258C20();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0258C28;
    if ( qword_1C0258C28 )
      return qword_1C0258C28(v3, a1);
  }
  return result;
}
