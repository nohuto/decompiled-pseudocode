/*
 * XREFs of NtSetTimerEx @ 0x140289560
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ExpSetTimerObject2 @ 0x1402E0A4C (ExpSetTimerObject2.c)
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1403638F8 (PoCaptureReasonContext.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(HANDLE Handle, int a2, __int128 *a3, unsigned int a4)
{
  __int128 *v4; // rbx
  unsigned __int8 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  NTSTATUS v13; // edi
  struct _OBJECT_TYPE *v14; // rax
  NTSTATUS v15; // eax
  __int64 result; // rax
  char v17[4]; // [rsp+50h] [rbp-68h] BYREF
  int v18; // [rsp+54h] [rbp-64h]
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF
  __int128 v22; // [rsp+78h] [rbp-40h]
  __int128 v23; // [rsp+88h] [rbp-30h]

  v4 = a3;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v17[0] = 0;
  P = 0LL;
  v6 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v6 && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a3 + a4;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( v6 )
  {
    v21 = *a3;
    v22 = a3[1];
    v23 = a3[2];
    v4 = &v21;
  }
  v8 = *((_DWORD *)v4 + 8);
  if ( v8 > 0x7FFFFFFF )
    return 3221225713LL;
  v9 = *((_QWORD *)v4 + 3);
  if ( !v9 )
  {
LABEL_14:
    v10 = *((_QWORD *)v4 + 5);
    v18 = *((_DWORD *)v4 + 9);
    v11 = *((_QWORD *)v4 + 2);
    v12 = *((_QWORD *)v4 + 1);
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(Handle, 2u, 0LL, v6, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_19:
      if ( v13 >= 0 && v13 != 1073741861 )
        return (unsigned int)v13;
      goto LABEL_36;
    }
    v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == ExpIRTimerObjectType )
    {
      if ( !v12 && !v11 && !P && !v18 && !v10 )
      {
        v15 = ExpSetTimerObject2(Object);
        goto LABEL_18;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741811;
    }
    else
    {
      if ( v14 == ExTimerObjectType )
      {
        v15 = ExpSetTimerObject((ULONG_PTR)Object, v11, (__int64)P, v17[0], v8, v18, v10);
LABEL_18:
        v13 = v15;
        goto LABEL_19;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741788;
    }
LABEL_36:
    if ( P )
      PoDestroyReasonContext(P);
    return (unsigned int)v13;
  }
  result = PoCaptureReasonContext(v9, v6, 0, 0, (__int64)v17, (__int64)&P);
  if ( (int)result >= 0 )
  {
    v8 = *((_DWORD *)v4 + 8);
    goto LABEL_14;
  }
  return result;
}
