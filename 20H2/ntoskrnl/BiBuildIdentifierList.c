/*
 * XREFs of BiBuildIdentifierList @ 0x140973210
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140973170 (BiBindEfiNamespaceObjects.c)
 *     BiExportStoreAlterationsToEfi @ 0x140974818 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x14077E1F8 (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x14077F748 (BiEnumerateSubKeys.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiEnumerateBootEntries @ 0x140974280 (BiEnumerateBootEntries.c)
 *     BiFreeIdentifierList @ 0x1409748B8 (BiFreeIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140974C20 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x140974DB4 (BiGetSavedBootEntry.c)
 *     BiLookupObjectByBootEntry @ 0x140975048 (BiLookupObjectByBootEntry.c)
 *     BiLookupObjectByIdentifierAndBootEntry @ 0x140975078 (BiLookupObjectByIdentifierAndBootEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBuildIdentifierList(__int64 BcdStoreHandle, __int64 a2, _QWORD *a3)
{
  int v3; // r13d
  HANDLE v5; // r14
  PCWSTR *v6; // rsi
  int v7; // ebx
  ULONG v8; // r12d
  unsigned int v9; // r15d
  PCWSTR *v10; // r13
  HANDLE v11; // r14
  int v12; // esi
  _OWORD *PoolWithTag; // rbx
  BCD_FLAGS v14; // r8d
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  PVOID v17; // rcx
  int v18; // eax
  _BYTE *v19; // r15
  unsigned __int64 v20; // r12
  unsigned int *v21; // rsi
  int v22; // eax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _DWORD *v29; // rax
  _DWORD *v30; // r14
  unsigned int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // r14
  _QWORD *v35; // rbx
  _OWORD *v36; // rcx
  _QWORD *v37; // rax
  PVOID *v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  __int16 Buffer[2]; // [rsp+30h] [rbp-89h] BYREF
  ULONG BufferSize; // [rsp+34h] [rbp-85h] BYREF
  _QWORD *v51; // [rsp+38h] [rbp-81h] BYREF
  _QWORD *v52; // [rsp+40h] [rbp-79h] BYREF
  _QWORD **v53; // [rsp+48h] [rbp-71h]
  PCWSTR *v54; // [rsp+50h] [rbp-69h] BYREF
  _QWORD *v55; // [rsp+58h] [rbp-61h] BYREF
  _QWORD **v56; // [rsp+60h] [rbp-59h]
  _QWORD *v57; // [rsp+68h] [rbp-51h] BYREF
  _QWORD **v58; // [rsp+70h] [rbp-49h]
  unsigned int v59; // [rsp+78h] [rbp-41h] BYREF
  void *v60; // [rsp+80h] [rbp-39h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp-31h] BYREF
  __int64 v62; // [rsp+90h] [rbp-29h] BYREF
  PVOID P; // [rsp+98h] [rbp-21h] BYREF
  PVOID v64; // [rsp+A0h] [rbp-19h] BYREF
  PVOID v65; // [rsp+A8h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-9h] BYREF
  GUID Guid; // [rsp+C0h] [rbp+7h] BYREF

  v3 = 0;
  a3[1] = a3;
  *a3 = a3;
  v51 = (_QWORD *)BcdStoreHandle;
  v58 = &v57;
  P = 0LL;
  v57 = &v57;
  v59 = 0;
  v56 = &v55;
  v62 = 0LL;
  v55 = &v55;
  v65 = 0LL;
  v53 = &v52;
  v5 = (HANDLE)BcdStoreHandle;
  BcdObjectHandle = 0LL;
  v52 = &v52;
  v6 = 0LL;
  Guid = 0LL;
  Buffer[0] = 0;
  BufferSize = 0;
  DestinationString = 0LL;
  v64 = 0LL;
  v60 = 0LL;
  v54 = 0LL;
  v7 = BiOpenKey(BcdStoreHandle, L"Objects", 0x20019u, &v60);
  if ( v7 >= 0 )
  {
    v7 = BiEnumerateSubKeys(v60, &v54, &BufferSize);
    if ( v7 < 0 )
      goto LABEL_59;
    v8 = BufferSize;
    v9 = 0;
    if ( BufferSize )
    {
      v10 = v54;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, v10[v9]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && BcdOpenObject(v5, &Guid, &BcdObjectHandle) >= 0 )
        {
          v11 = BcdObjectHandle;
          if ( (int)BiGetObjectDescription((__int64)BcdObjectHandle, &v62) >= 0
            && (HIDWORD(v62) & 0xF0000000) == 0x10000000
            && (HIDWORD(v62) & 0xF00000) == 0x100000 )
          {
            v12 = HIDWORD(v62) & 0xFFFFF;
            if ( (HIDWORD(v62) & 0xFFFFF) != 1 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
              if ( !PoolWithTag )
              {
                BcdCloseObject(v11);
                v7 = -1073741670;
                goto LABEL_59;
              }
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              *((_QWORD *)PoolWithTag + 6) = 0LL;
              PoolWithTag[1] = Guid;
              *((_DWORD *)PoolWithTag + 12) |= 4u;
              if ( v12 == 0xFFFFF )
              {
                *((_DWORD *)PoolWithTag + 12) |= 8u;
                v15 = v56;
                if ( *v56 != &v55 )
                  goto LABEL_67;
                *((_QWORD *)PoolWithTag + 1) = v56;
                *(_QWORD *)PoolWithTag = &v55;
                *v15 = PoolWithTag;
                v56 = (_QWORD **)PoolWithTag;
              }
              else
              {
                v16 = v58;
                if ( *v58 != &v57 )
LABEL_67:
                  __fastfail(3u);
                *((_QWORD *)PoolWithTag + 1) = v58;
                *(_QWORD *)PoolWithTag = &v57;
                *v16 = PoolWithTag;
                v58 = (_QWORD **)PoolWithTag;
              }
              BufferSize = 2;
              if ( BcdGetElementDataWithFlags(v11, 0x16000082u, v14, Buffer, &BufferSize) >= 0 && LOBYTE(Buffer[0]) )
                *((_DWORD *)PoolWithTag + 12) |= 0x10u;
              if ( (int)BiGetSavedBootEntry(v11, &P) >= 0 )
              {
                v17 = P;
                *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)P + 2);
                *((_DWORD *)PoolWithTag + 12) |= 2u;
                ExFreePoolWithTag(v17, 0x4B444342u);
              }
            }
          }
          BcdCloseObject(v11);
          v5 = v51;
        }
        if ( ++v9 >= v8 )
        {
          v3 = 0;
          break;
        }
      }
    }
    v18 = BiEnumerateBootEntries(&v64, &v59);
    v19 = v64;
    v7 = v18;
    if ( v18 >= 0 )
    {
      v20 = v59;
      v51 = 0LL;
      v21 = (unsigned int *)v64;
      if ( v59 )
      {
        while ( 1 )
        {
          if ( (int)BiGetObjectReferenceFromEfiEntry(v21 + 1, &Guid) < 0
            || (v22 = BiLookupObjectByIdentifierAndBootEntry(&v57, &Guid, v21[3], &v51), v23 = v51, v3 = 32, v22 < 0) )
          {
            v27 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
            v51 = v27;
            v23 = v27;
            if ( !v27 )
              break;
            *(_OWORD *)v27 = 0LL;
            *((_OWORD *)v27 + 1) = 0LL;
            *((_OWORD *)v27 + 2) = 0LL;
            v27[6] = 0LL;
            *((_DWORD *)v27 + 12) |= 8u;
            v28 = v53;
            if ( *v53 != &v52 )
              goto LABEL_67;
            v23[1] = v53;
            *v23 = &v52;
            *v28 = v23;
            v53 = (_QWORD **)v23;
          }
          else
          {
            v24 = *v51;
            if ( *(_QWORD **)(*v51 + 8LL) != v51 )
              goto LABEL_67;
            v25 = (_QWORD *)v51[1];
            if ( (_QWORD *)*v25 != v51 )
              goto LABEL_67;
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            v26 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v26 != a3 )
              goto LABEL_67;
            *v23 = a3;
            v23[1] = v26;
            *v26 = v23;
            a3[1] = v23;
          }
          v29 = ExAllocatePoolWithTag(PagedPool, v21[2], 0x4B444342u);
          v30 = v29;
          if ( !v29 )
            break;
          memmove(v29, v21 + 1, v21[2]);
          v23[5] = v30;
          *((_DWORD *)v23 + 8) = v30[2];
          v31 = v3 | v23[6] & 0xFFFFFFDF;
          v3 = 0;
          *((_DWORD *)v23 + 12) = v31 | 1;
          v32 = *v21;
          if ( (_DWORD)v32 )
          {
            v21 = (unsigned int *)((char *)v21 + v32);
            if ( (char *)v21 - v19 < v20 )
              continue;
          }
          goto LABEL_40;
        }
        v7 = -1073741670;
      }
      else
      {
LABEL_40:
        v33 = v52;
        while ( v33 != &v52 )
        {
          v34 = v33;
          v35 = v33;
          v33 = (_QWORD *)*v33;
          if ( (int)BiLookupObjectByBootEntry(&v55, *((unsigned int *)v34 + 8), &v65) >= 0 )
          {
            v36 = v65;
            v37 = *(_QWORD **)v65;
            if ( *(PVOID *)(*(_QWORD *)v65 + 8LL) != v65 )
              goto LABEL_67;
            v38 = (PVOID *)*((_QWORD *)v65 + 1);
            if ( *v38 != v65 )
              goto LABEL_67;
            *v38 = v37;
            v37[1] = v38;
            *((_OWORD *)v34 + 1) = v36[1];
            *((_DWORD *)v34 + 12) ^= (*((_DWORD *)v34 + 12) ^ *((_DWORD *)v36 + 12)) & 2;
            ExFreePoolWithTag(v36, 0x4B444342u);
            *((_DWORD *)v34 + 12) |= 4u;
            v39 = *v35;
            if ( *(_QWORD **)(*v35 + 8LL) != v35 )
              goto LABEL_67;
            v40 = (_QWORD *)v35[1];
            if ( (_QWORD *)*v40 != v35 )
              goto LABEL_67;
            *v40 = v39;
            *(_QWORD *)(v39 + 8) = v40;
            v41 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v41 != a3 )
              goto LABEL_67;
            *v35 = a3;
            v35[1] = v41;
            *v41 = v35;
            a3[1] = v35;
          }
        }
        if ( v57 != &v57 )
        {
          v42 = (_QWORD *)a3[1];
          *v42 = v57;
          v43 = v58;
          a3[1] = v58;
          *v43 = a3;
          v57[1] = v42;
        }
        if ( v55 != &v55 )
        {
          v44 = (_QWORD *)a3[1];
          *v44 = v55;
          v45 = v56;
          a3[1] = v56;
          *v45 = a3;
          v55[1] = v44;
        }
        if ( v52 != &v52 )
        {
          v46 = (_QWORD *)a3[1];
          *v46 = v52;
          v47 = v53;
          a3[1] = v53;
          *v47 = a3;
          v52[1] = v46;
        }
        v7 = 0;
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0x4B444342u);
LABEL_59:
    v6 = v54;
  }
  if ( v60 )
    BiCloseKey(v60);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 )
  {
    BiFreeIdentifierList(&v52);
    BiFreeIdentifierList(&v55);
    BiFreeIdentifierList(&v57);
    BiFreeIdentifierList(a3);
    BiLogMessage(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v7);
  }
  return (unsigned int)v7;
}
