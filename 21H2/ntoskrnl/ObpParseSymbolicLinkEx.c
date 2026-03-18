/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x140784700
 * Callers:
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObpGetIntegrityLevel @ 0x1406C5404 (ObpGetIntegrityLevel.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int __fastcall ObpParseSymbolicLinkEx(
        _DWORD *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 v12; // rcx
  bool v13; // r15
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // eax
  unsigned __int16 *v18; // r13
  unsigned int v19; // r15d
  int v20; // eax
  unsigned __int16 v21; // r14
  char *v22; // r12
  char *v23; // rcx
  PVOID v24; // rcx
  _QWORD *v25; // rax
  int result; // eax
  signed __int32 v27; // eax
  char IsSandboxedToken; // al
  signed __int32 v29; // ett
  void *Pool2; // rax
  PVOID v31; // r10
  unsigned __int16 *v32; // r9
  char v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  PVOID v38; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v39[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID Objecta; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  _DWORD v49[2]; // [rsp+C8h] [rbp-38h] BYREF
  int *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  unsigned int *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  int *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  _QWORD *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]

  v12 = a10;
  v13 = 0;
  LODWORD(v38) = 0;
  Objecta = 0LL;
  v15 = Object[7];
  v33 = a4;
  P = a3;
  v36 = a10;
  v43 = a11;
  v44 = 0LL;
  if ( (v15 & 2) != 0 )
  {
    IsSandboxedToken = RtlIsSandboxedToken(a3 + 1);
    a4 = v33;
    a3 = (struct _SECURITY_SUBJECT_CONTEXT *)P;
    v12 = v36;
    v13 = IsSandboxedToken == 0;
  }
  v16 = 0x4000;
  if ( Object[9] < 0x4000u || v13 )
  {
    result = ObpGetIntegrityLevel(a3 + 1, a4, &v38);
    v34 = result;
    if ( result < 0 )
      goto LABEL_28;
    if ( (unsigned int)v38 < 0x4000 )
      v16 = (unsigned int)v38;
    if ( Object[9] < v16 || v13 )
    {
      _m_prefetchw(Object + 7);
      v27 = Object[7];
      do
      {
        v29 = v27;
        v27 = _InterlockedCompareExchange(Object + 7, v27 | 0x80000000, v27);
      }
      while ( v29 != v27 );
      if ( v27 >= 0 )
      {
        v39[0] = 1048590LL;
        v39[1] = L"UNKNOWN";
        P = 0LL;
        v35 = 0;
        if ( (unsigned int)ObQueryNameStringMode((char *)Object, 0LL, 0, &v35, 0) == -1073741820 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, v35, 1833853519LL);
          P = Pool2;
          v31 = Pool2;
          if ( Pool2 )
          {
            ObQueryNameStringMode((char *)Object, (__int64)Pool2, v35, &v35, 0);
            v31 = P;
          }
        }
        else
        {
          v31 = P;
        }
        if ( (unsigned int)dword_140C03008 > 5 && tlgKeywordOn((__int64)&dword_140C03008, 0x400000000000LL) )
        {
          v47 = 2LL;
          v49[1] = 0;
          v46 = v49;
          v48 = *((_QWORD *)v32 + 1);
          v49[0] = *v32;
          v40 = Object[9];
          v50 = &v40;
          v52 = &v41;
          v54 = &v34;
          v56 = v39;
          v51 = 4LL;
          v41 = v16;
          v53 = 4LL;
          LOBYTE(v34) = v13;
          v55 = 1LL;
          v39[0] = 0x1000000LL;
          v57 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03008,
            (unsigned __int8 *)byte_14002E124,
            0LL,
            0LL,
            8u,
            &v45);
          v31 = P;
        }
        if ( v31 )
          ExFreePoolWithTag(v31, 0);
      }
      if ( v13 )
      {
        result = -1073741772;
        goto LABEL_57;
      }
    }
    v12 = v36;
    a4 = v33;
  }
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) == 92 )
    {
LABEL_7:
      v17 = Object[7];
      if ( (v17 & 8) != 0 )
      {
        *(_DWORD *)(v12 + 4) &= Object[8];
        v17 = Object[7];
      }
      if ( (v17 & 4) != 0 )
      {
        *(_QWORD *)(v36 + 8) = HalSystemVectorDispatchEntry();
        v17 = Object[7];
      }
      v18 = (unsigned __int16 *)(Object + 2);
      if ( (v17 & 0x10) != 0 )
      {
        result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int128 *, PVOID *))v18)(
                   Object,
                   *((_QWORD *)Object + 2),
                   &v44,
                   &Objecta);
        v34 = result;
        if ( result < 0 )
          goto LABEL_28;
        v18 = (unsigned __int16 *)&v44;
      }
      v19 = *v18;
      if ( *v18
        && *(_WORD *)(*((_QWORD *)v18 + 1) + 2 * ((unsigned __int64)*v18 >> 1) - 2) == 92
        && *a7
        && **((_WORD **)a7 + 1) == 92 )
      {
        v19 -= 2;
      }
      v20 = *a7;
      v21 = v19 + v20;
      if ( v19 + v20 > 0xFFF0 )
      {
        result = -1073741562;
      }
      else
      {
        LOWORD(v34) = *(_WORD *)(a6 + 2);
        if ( (unsigned __int16)v34 > v21 )
        {
          v22 = *(char **)(a6 + 8);
LABEL_17:
          if ( (_WORD)v20 )
            memmove(&v22[v19], *((const void **)a7 + 1), (unsigned __int16)v20);
          memmove(v22, *((const void **)v18 + 1), v19);
          *(_WORD *)&v22[2 * ((unsigned __int64)v21 >> 1)] = 0;
          v23 = *(char **)(a6 + 8);
          if ( v22 != v23 && v23 )
            ExFreePoolWithTag(v23, 0);
          v24 = Objecta;
          *(_WORD *)(a6 + 2) = v34;
          v25 = v43;
          *(_QWORD *)(a6 + 8) = v22;
          *(_WORD *)a6 = v21;
          if ( v24 )
          {
            *v25 = v24;
            return 280;
          }
          else
          {
            *v25 = Object;
            if ( (Object[7] & 1) != 0 )
              return 872;
            else
              return 260;
          }
        }
        LOWORD(v34) = v21 + 2;
        v22 = (char *)ExAllocatePool2(256LL, (unsigned __int16)(v21 + 2), 1833853519LL);
        if ( v22 )
        {
          LOWORD(v20) = *a7;
          goto LABEL_17;
        }
        result = -1073741670;
      }
      goto LABEL_57;
    }
    result = -1073741788;
LABEL_57:
    v34 = result;
    goto LABEL_28;
  }
  if ( ObjectType != ObpSymbolicLinkObjectType )
    goto LABEL_7;
  if ( (Object[7] & 1) != 0 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
LABEL_61:
      v12 = v36;
      goto LABEL_7;
    }
    a4 = v33;
  }
  result = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
  v34 = result;
  if ( result >= 0 )
  {
    *a11 = Object;
    goto LABEL_28;
  }
  if ( result == -1073741788 )
    goto LABEL_61;
LABEL_28:
  if ( Objecta )
  {
    ObfDereferenceObject(Objecta);
    return v34;
  }
  return result;
}
