/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C0065024
 * Callers:
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C000B4C0 (ReadObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0064E94 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  Object = AMLIGetNamespaceOverrideObject(a2, (__int64 *)&v8);
  if ( Object >= 0 )
  {
    v6 = v8;
    Object = ReadObject(a1, v8 + 64, a3);
    DereferenceObjectEx(v6);
  }
  return (unsigned int)Object;
}
