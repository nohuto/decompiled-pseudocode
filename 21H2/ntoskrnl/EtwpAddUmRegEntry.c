/*
 * XREFs of EtwpAddUmRegEntry @ 0x140796F10
 * Callers:
 *     EtwpRegisterUMProvider @ 0x140796040 (EtwpRegisterUMProvider.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     EtwpInitializeRegEntry @ 0x1407963F8 (EtwpInitializeRegEntry.c)
 */

__int64 __fastcall EtwpAddUmRegEntry(ULONG_PTR a1, int a2, __int16 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  int inserted; // ebx
  PVOID v11; // rdi
  __int64 v13; // [rsp+28h] [rbp-39h]
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  __int64 v15; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int128 v19; // [rsp+88h] [rbp+27h]

  v15 = 0LL;
  v18 = 0;
  Object = 0LL;
  v16[1] = 0LL;
  v16[2] = 0LL;
  v16[0] = 48LL;
  v17 = 64;
  v19 = 0LL;
  inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)v16, 1u, v13, 112, 0, 0, &Object, 0LL);
  if ( inserted >= 0 )
  {
    v11 = Object;
    EtwpInitializeRegEntry(a1, 1, a2, a4, 0LL, a3, (__int64)Object);
    ObReferenceObjectByPointer(v11, 0, EtwpRegistrationObjectType, 0);
    inserted = ObInsertObjectEx((char *)v11, 0LL, 0x804u, 1, 0, (__int64)&v15, a6);
    *a5 = v11;
    if ( inserted >= 0 )
      ObfDereferenceObject(v11);
  }
  return (unsigned int)inserted;
}
