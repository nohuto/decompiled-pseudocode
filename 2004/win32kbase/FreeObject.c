/*
 * XREFs of FreeObject @ 0x1C0080F60
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C003147C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgFree @ 0x1C007FE20 (HmgFree.c)
 *     HmgAlloc @ 0x1C0081830 (HmgAlloc.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00C1E78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C014FB50 (EngDeleteDriverObj.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FreeObject(__int64 a1, int a2)
{
  void * near *v3; // rdi
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 14) >= 0 )
    return Win32FreePool(a1);
  v3 = (&pHmgLookAsideList)[a2];
  if ( qword_1C0252C60 )
    result = qword_1C0252C60();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0252C68;
    if ( qword_1C0252C68 )
      return qword_1C0252C68(v3, a1);
  }
  return result;
}
