/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x1406C6000
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpParseSymbolicLinkEx(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int16 **a11)
{
  int v12; // eax
  unsigned __int16 *v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int16 *v18; // r15
  unsigned int v19; // ebp
  int v20; // eax
  unsigned __int16 v21; // bx
  __int64 v22; // rsi
  unsigned __int16 v23; // r13
  char *PoolWithTag; // r12
  char *v25; // rcx
  PADAPTER_OBJECT v26; // rcx
  PADAPTER_OBJECT *v27; // rax
  NTSTATUS v29; // eax
  int v30; // ebx
  __int128 v31; // [rsp+30h] [rbp-38h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp+8h] BYREF

  DmaAdapter = 0LL;
  v12 = *((_DWORD *)Object + 7);
  v31 = 0LL;
  if ( (v12 & 2) != 0 && !(unsigned __int8)RtlIsSandboxedToken(a3 + 1) )
  {
    v30 = -1073741772;
    goto LABEL_24;
  }
  v15 = a7;
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      v30 = -1073741788;
      goto LABEL_24;
    }
  }
  else if ( ObjectType == ObpSymbolicLinkObjectType
         && ((*((_DWORD *)Object + 7) & 1) == 0 || !PsIsCurrentThreadInServerSilo((__int64)Object, (__int64)ObjectType)) )
  {
    v29 = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
    v30 = v29;
    if ( v29 >= 0 )
    {
      *a11 = Object;
LABEL_24:
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)v30;
    }
    if ( v29 != -1073741788 )
      goto LABEL_24;
  }
  v16 = *((_DWORD *)Object + 7);
  v17 = a10;
  if ( (v16 & 8) != 0 )
  {
    *(_DWORD *)(a10 + 4) &= *((_DWORD *)Object + 8);
    v16 = *((_DWORD *)Object + 7);
  }
  if ( (v16 & 4) != 0 )
  {
    *(_QWORD *)(v17 + 8) = HalSystemVectorDispatchEntry();
    v16 = *((_DWORD *)Object + 7);
  }
  v18 = Object + 4;
  if ( (v16 & 0x10) != 0 )
  {
    v30 = (*(__int64 (__fastcall **)(unsigned __int16 *, _QWORD, __int128 *, PADAPTER_OBJECT *))v18)(
            Object,
            *((_QWORD *)Object + 2),
            &v31,
            &DmaAdapter);
    if ( v30 < 0 )
      goto LABEL_24;
    v18 = (unsigned __int16 *)&v31;
  }
  v19 = *v18;
  if ( *v18
    && *(_WORD *)(*((_QWORD *)v18 + 1) + 2 * ((unsigned __int64)*v18 >> 1) - 2) == 92
    && *v15
    && **((_WORD **)v15 + 1) == 92 )
  {
    v19 -= 2;
  }
  v20 = *v15;
  v21 = v20 + v19;
  if ( v20 + v19 > 0xFFF0 )
  {
    v30 = -1073741562;
    goto LABEL_24;
  }
  v22 = a6;
  v23 = *(_WORD *)(a6 + 2);
  if ( v23 <= v21 )
  {
    v23 = v21 + 2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v20 + v19 + 2), 0x6D4E624Fu);
    if ( !PoolWithTag )
    {
      v30 = -1073741670;
      goto LABEL_24;
    }
    LOWORD(v20) = *v15;
  }
  else
  {
    PoolWithTag = *(char **)(a6 + 8);
  }
  if ( (_WORD)v20 )
    memmove(&PoolWithTag[v19], *((const void **)v15 + 1), (unsigned __int16)v20);
  memmove(PoolWithTag, *((const void **)v18 + 1), v19);
  *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)v21 >> 1)] = 0;
  v25 = *(char **)(v22 + 8);
  if ( PoolWithTag != v25 && v25 )
    ExFreePoolWithTag(v25, 0);
  v26 = DmaAdapter;
  v27 = (PADAPTER_OBJECT *)a11;
  *(_QWORD *)(v22 + 8) = PoolWithTag;
  *(_WORD *)v22 = v21;
  *(_WORD *)(v22 + 2) = v23;
  if ( v26 )
  {
    *v27 = v26;
    return 280LL;
  }
  else
  {
    *v27 = (PADAPTER_OBJECT)Object;
    if ( (*((_DWORD *)Object + 7) & 1) != 0 )
      return 872LL;
    else
      return 260LL;
  }
}
