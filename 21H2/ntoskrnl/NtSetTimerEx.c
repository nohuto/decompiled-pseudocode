/*
 * XREFs of NtSetTimerEx @ 0x1402ED9F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimerObject2 @ 0x14026E4AC (ExpSetTimerObject2.c)
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  __int128 *v4; // rbx
  unsigned __int8 v6; // r14
  char *v7; // rcx
  unsigned int v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // edi
  struct _OBJECT_TYPE *v14; // rax
  int v15; // eax
  NTSTATUS result; // eax
  char v17[4]; // [rsp+50h] [rbp-68h] BYREF
  int v18; // [rsp+54h] [rbp-64h]
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF
  __int128 v22; // [rsp+78h] [rbp-40h]
  __int128 v23; // [rsp+88h] [rbp-30h]

  v4 = (__int128 *)TimerSetInformation;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v17[0] = 0;
  P = 0LL;
  v6 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v6 && TimerSetInformationLength )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)TimerSetInformation + TimerSetInformationLength;
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < TimerSetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( v6 )
  {
    v21 = *(_OWORD *)TimerSetInformation;
    v22 = *((_OWORD *)TimerSetInformation + 1);
    v23 = *((_OWORD *)TimerSetInformation + 2);
    v4 = &v21;
  }
  v8 = *((_DWORD *)v4 + 8);
  if ( v8 > 0x7FFFFFFF )
    return -1073741583;
  v9 = *((_QWORD *)v4 + 3);
  if ( !v9 )
  {
LABEL_14:
    v10 = *((_QWORD *)v4 + 5);
    v18 = *((_DWORD *)v4 + 9);
    v11 = *((_QWORD *)v4 + 2);
    v12 = *((_QWORD *)v4 + 1);
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, v6, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_19:
      if ( v13 >= 0 && v13 != 1073741861 )
        return v13;
      goto LABEL_36;
    }
    v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == ExpIRTimerObjectType )
    {
      if ( !v12 && !v11 && !P && !v18 && !v10 )
      {
        v15 = ExpSetTimerObject2(Object, (__int64 *)v4, 10000LL * v8, 0LL);
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
    return v13;
  }
  result = PoCaptureReasonContext(v9, v6, 0LL, 0, (__int64)v17, &P);
  if ( result >= 0 )
  {
    v8 = *((_DWORD *)v4 + 8);
    goto LABEL_14;
  }
  return result;
}
