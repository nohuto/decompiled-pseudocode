/*
 * XREFs of FreeObject @ 0x1C003C6B0
 * Callers:
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     HmgFree @ 0x1C004BFE0 (HmgFree.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0090D1C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0092740 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C014D5A0 (EngDeleteDriverObj.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FreeObject(__int64 a1, int a2)
{
  void * near *v3; // rdi
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 14) >= 0 )
    return Win32FreePool(a1);
  v3 = (&pHmgLookAsideList)[a2];
  if ( qword_1C0250C60 )
    result = qword_1C0250C60();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0250C68;
    if ( qword_1C0250C68 )
      return qword_1C0250C68(v3, a1);
  }
  return result;
}
