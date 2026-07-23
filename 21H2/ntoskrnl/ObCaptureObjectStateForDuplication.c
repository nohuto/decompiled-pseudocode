/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x1405E261C
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x1405E2350 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E27D0 (ObpReferenceProcessObjectByHandle.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        __int64 a2,
        ACCESS_MASK a3,
        char a4,
        char a5,
        __int64 a6)
{
  ACCESS_MASK v7; // r14d
  int v8; // esi
  int v10; // edi
  __int64 v11; // rax
  int v12; // r9d
  int v13; // esi
  char *v14; // rsi
  bool v15; // zf
  int v16; // r12d
  __int64 v17; // rdi
  int v18; // r13d
  __int64 v19; // r15
  int v20; // r14d
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK AccessMask; // [rsp+B0h] [rbp+50h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v7 = a3;
  Objecta[0] = 0LL;
  v8 = a2;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  LOBYTE(v12) = a5;
  v13 = ObpReferenceProcessObjectByHandle(
          v8,
          (_DWORD)Object,
          v11,
          v12,
          1967415887,
          (__int64)Objecta,
          (__int64)&v22,
          (__int64)&v23);
  if ( v13 < 0 )
  {
    ExReleaseRundownProtection(Object + 139);
    return (unsigned int)v13;
  }
  if ( (v22 & 4) != 0 )
    LODWORD(v23) = 0;
  v14 = (char *)Objecta[0];
  v15 = v10 == 0;
  v16 = HIDWORD(v22);
  v17 = a6;
  if ( !v15 )
    v7 = HIDWORD(v22);
  AccessMask = v7;
  v18 = v22 & 4 | 8;
  if ( (a4 & 8) == 0 )
    v18 = v22 & 0xC;
  *(_QWORD *)(a6 + 28) = v23;
  v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
  if ( (v7 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v19 + 76));
    v7 = AccessMask;
  }
  v27 = v7 & (*(_DWORD *)(v19 + 92) | 0x1000000);
  if ( (~v16 & v27) != 0 )
  {
    ExReleaseRundownProtection(Object + 139);
    ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
    return 3221225506LL;
  }
  v20 = ObpIncrementHandleCountEx(2, (unsigned int)&v27, (_DWORD)Object, (_DWORD)v14, a5, v18, 0LL);
  ExReleaseRundownProtection(Object + 139);
  if ( v20 < 0 )
  {
    ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(v17 + 24) = v27;
    *(_QWORD *)(v17 + 8) = a2;
    *(_DWORD *)(v17 + 36) = v18;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)v17 = Object;
    *(_QWORD *)(v17 + 16) = v14;
  }
  return (unsigned int)v20;
}
