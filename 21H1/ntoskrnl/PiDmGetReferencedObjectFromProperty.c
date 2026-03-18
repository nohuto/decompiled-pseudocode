/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x14072F900
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PiDmGetObject @ 0x1406A89EC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     PnpGetObjectProperty @ 0x1406A99BC (PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x1406AB274 (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DEFC0 (PiDmObjectGetCachedObjectReference.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  int v7; // ebp
  int CachedObjectReference; // eax
  unsigned int Object; // ebx
  int ObjectProperty; // eax
  PVOID v13; // rdi
  wchar_t *v14; // rdx
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  wchar_t v18[40]; // [rsp+80h] [rbp-88h] BYREF

  v7 = a2;
  LODWORD(v15) = 0;
  P = 0LL;
  *a7 = 0LL;
  CachedObjectReference = PiDmObjectGetCachedObjectReference(a1, a2, a3, a5, a7);
  Object = CachedObjectReference;
  if ( CachedObjectReference >= 0 )
  {
    if ( *(_DWORD *)(*a7 + 28) != a6 )
    {
      PiDmObjectRelease((unsigned int *)*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return Object;
  }
  if ( CachedObjectReference != -1073741802 )
    return Object;
  ObjectProperty = PnpGetObjectProperty(0x5A706E50u, 0x10uLL, v7, a1, 0LL, 0LL, a5, (__int64)&v15, &P, &v17, 0);
  v13 = P;
  Object = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v15 == 13 )
    {
      Object = PnpStringFromGuid((int *)P, v18);
      if ( (Object & 0x80000000) != 0 )
        goto LABEL_11;
      v14 = v18;
      goto LABEL_10;
    }
    if ( (_DWORD)v15 == 18 )
    {
      v14 = (wchar_t *)P;
LABEL_10:
      Object = PiDmGetObject(a6, (__int64)v14, a7);
      goto LABEL_11;
    }
    Object = -1073741772;
  }
LABEL_11:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x5A706E50u);
  return Object;
}
