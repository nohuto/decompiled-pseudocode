/*
 * XREFs of RtlCreateAndSetSD @ 0x180066990
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800D6C50 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180038020 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180038080 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18003C8E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAce @ 0x180066C70 (RtlAddAce.c)
 *     RtlCopySid @ 0x180067410 (RtlCopySid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180067450 (RtlSetSaclSecurityDescriptor.c)
 */

__int64 __fastcall RtlCreateAndSetSD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int Acl; // ebx
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned int v8; // r9d
  void *ProcessHeap; // r13
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 Heap; // rax
  __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned int v19; // r15d
  int *v20; // rsi
  int v21; // r12d
  __int64 v22; // r8
  int v23; // ebp
  int v24; // edx
  char v25; // al
  char v26; // cl
  __int64 v27; // rdx
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]

  Acl = 0;
  v29 = 0LL;
  v6 = 0;
  v30 = 0LL;
  v7 = 0LL;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  v11 = 8;
  if ( !a2 )
  {
LABEL_9:
    v15 = 40;
    if ( v10 != 8 )
    {
      if ( v10 + 40 < 0x28 )
        return (unsigned int)-1073741801;
      v15 = v10 + 40;
    }
    if ( v11 != 8 )
    {
      if ( v15 + v11 < v15 )
        return (unsigned int)-1073741801;
      v15 += v11;
    }
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v15);
    v17 = Heap;
    if ( Heap )
    {
      v18 = Heap + 40;
      if ( v10 != 8 )
      {
        v29 = Heap + 40;
        v18 += v10;
        Acl = RtlCreateAcl(Heap + 40, v10, 2);
        if ( Acl < 0 )
          goto LABEL_48;
      }
      if ( v11 != 8 )
      {
        v30 = v18;
        Acl = RtlCreateAcl(v18, v11, 2);
        if ( Acl < 0 )
          goto LABEL_48;
      }
      v7 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v6);
      if ( v7 )
      {
        v19 = 0;
        if ( a2 )
        {
          v20 = (int *)(a1 + 4);
          while ( 1 )
          {
            v21 = 0;
            v22 = **(_QWORD **)(v20 + 1);
            v23 = 4 * *(unsigned __int8 *)(v22 + 1) + 8;
            if ( !*((_BYTE *)v20 - 4) )
              break;
            if ( *((_BYTE *)v20 - 4) == 1 )
            {
              v24 = *v20;
              v25 = *((_BYTE *)v20 - 2);
              v26 = *((_BYTE *)v20 - 3);
              *(_BYTE *)v7 = 1;
              goto LABEL_22;
            }
            if ( *((_BYTE *)v20 - 4) != 2 )
              goto LABEL_24;
            v24 = *v20;
            v25 = *((_BYTE *)v20 - 2);
            v26 = *((_BYTE *)v20 - 3);
            v21 = v30;
            *(_BYTE *)v7 = 2;
LABEL_23:
            *(_DWORD *)(v7 + 4) = v24;
            *(_BYTE *)(v7 + 1) = v25 | v26;
            v23 += 12;
            *(_WORD *)(v7 + 2) = v23;
            Acl = RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(v22 + 1) + 8, v7 + 8, v22);
LABEL_24:
            if ( Acl < 0 )
              goto LABEL_48;
            Acl = RtlAddAce(v21, 2, -1, v7, v23);
            if ( Acl < 0 )
              goto LABEL_48;
            ++v19;
            v20 += 4;
            if ( v19 >= a2 )
              goto LABEL_27;
          }
          v24 = *v20;
          v25 = *((_BYTE *)v20 - 2);
          v26 = *((_BYTE *)v20 - 3);
          *(_BYTE *)v7 = 0;
LABEL_22:
          v21 = v29;
          goto LABEL_23;
        }
LABEL_27:
        Acl = RtlCreateSecurityDescriptor(v17, 1);
        if ( Acl >= 0 )
        {
          Acl = RtlSetOwnerSecurityDescriptor(v17, a3, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetGroupSecurityDescriptor(v17, a4, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(v17, 1, v29, 0);
              if ( Acl >= 0 )
              {
                LOBYTE(v27) = v30 != 0;
                Acl = RtlSetSaclSecurityDescriptor(v17, v27, v30, 0LL);
                if ( Acl >= 0 )
                {
                  Acl = 0;
                  *a5 = v17;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
      else
      {
        Acl = -1073741801;
      }
LABEL_48:
      RtlFreeHeap((__int64)ProcessHeap, 0, v17);
LABEL_33:
      if ( v7 )
        RtlFreeHeap((__int64)ProcessHeap, 0, v7);
      return (unsigned int)Acl;
    }
    return (unsigned int)-1073741801;
  }
  v12 = a1;
  while ( 1 )
  {
    v13 = *(unsigned __int8 *)(**(_QWORD **)(v12 + 8) + 1LL);
    if ( *(_BYTE *)v12 )
    {
      if ( *(_BYTE *)v12 != 1 )
        break;
    }
    v14 = 4 * v13 + 20;
    if ( v14 + v10 < v10 )
      return (unsigned int)-1073741801;
    v10 += v14;
LABEL_6:
    if ( v6 > v14 )
      v14 = v6;
    ++v8;
    v12 += 16LL;
    v6 = v14;
    if ( v8 >= a2 )
      goto LABEL_9;
  }
  if ( *(_BYTE *)v12 == 2 )
  {
    v14 = 4 * v13 + 20;
    if ( v14 + v11 < v11 )
      return (unsigned int)-1073741801;
    v11 += v14;
    goto LABEL_6;
  }
  return 3221225485LL;
}
