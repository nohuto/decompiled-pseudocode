/*
 * XREFs of SepReferenceTokenByHandle @ 0x1402595E0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140609AE0 (NtQuerySecurityAttributesToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140918260 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140259670 (SepReferenceTokenUsingPseudoHandle.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        _QWORD *a4,
        _BYTE *Object,
        _QWORD *a6)
{
  _QWORD *v7; // r9
  unsigned int v8; // ecx
  __int64 result; // rax

  v7 = a6;
  *Object = 0;
  *v7 = 0LL;
  if ( (unsigned __int64)a1 + 6 > 2 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, (PVOID *)&Object, 0LL);
    *a4 = Object;
    return v8;
  }
  if ( (a2 & 0xFFFFFFE7) != 0 )
    return 3221225506LL;
  result = SepReferenceTokenUsingPseudoHandle(a1, a4);
  v8 = result;
  if ( (int)result >= 0 )
    return v8;
  return result;
}
