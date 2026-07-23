/*
 * XREFs of RtlpCreateUserProcess @ 0x180088A30
 * Callers:
 *     RtlCreateUserProcessEx @ 0x180088970 (RtlCreateUserProcessEx.c)
 *     RtlCloneUserProcess @ 0x1800D6700 (RtlCloneUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtCreateUserProcess @ 0x18009E9A0 (NtCreateUserProcess.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, _DWORD *a2, ULONG a3, ULONG a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ecx
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  __int16 v14; // ax
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+E0h] [rbp-20h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+140h] [rbp+40h] BYREF
  __int64 v31; // [rsp+168h] [rbp+68h]
  __int64 v32; // [rsp+170h] [rbp+70h]
  __int64 v33; // [rsp+178h] [rbp+78h]
  __int64 v34; // [rsp+180h] [rbp+80h]
  __int64 v35; // [rsp+188h] [rbp+88h]
  __int64 v36; // [rsp+190h] [rbp+90h]
  __int64 v37; // [rsp+198h] [rbp+98h]
  __int64 v38; // [rsp+1A0h] [rbp+A0h]
  __int64 v39; // [rsp+1A8h] [rbp+A8h]
  __int64 v40; // [rsp+1B0h] [rbp+B0h]
  unsigned int *v41; // [rsp+1B8h] [rbp+B8h]
  __int64 v42; // [rsp+1C0h] [rbp+C0h]

  memset((void *)(a6 + 4), 0, 0x64uLL);
  *(_DWORD *)a6 = 104;
  if ( a5 && *(_WORD *)a5 != 1 )
    return -1073741811;
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.Length = 48;
  ProcessObjectAttributes.Attributes = 512;
  ProcessObjectAttributes.ObjectName = 0LL;
  if ( a5 )
    ProcessObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 8);
  else
    ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ProcessObjectAttributes.SecurityQualityOfService = 0LL;
  ThreadObjectAttributes.Length = 48;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  ThreadObjectAttributes.ObjectName = 0LL;
  if ( a5 )
    ThreadObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 16);
  else
    ThreadObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.SecurityQualityOfService = 0LL;
  v26 = 0LL;
  memset(&CreateInfo.State, 0, 0x50uLL);
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].Value = a6 + 24;
  CreateInfo.Size = 88LL;
  v33 = a6 + 40;
  v10 = 2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v31 = 6LL;
  v32 = 64LL;
  v34 = 0LL;
  if ( a1 )
  {
    v10 = 4;
    v36 = *a1;
    v37 = *((_QWORD *)a1 + 1);
    v35 = 131077LL;
    v38 = 0LL;
    v25 = v25 & 0xFFFFFFE0 | 2;
    v41 = &v25;
    v39 = 131082LL;
    v40 = 8LL;
    v42 = 0LL;
  }
  if ( a5 )
  {
    v11 = *(_QWORD *)(a5 + 24);
    if ( v11 )
    {
      v19 = v10++;
      AttributeList.Attributes[v19].Attribute = 393216LL;
      AttributeList.Attributes[v19].Size = 8LL;
      AttributeList.Attributes[v19].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v19 * 32) = v11;
    }
    v12 = *(_QWORD *)(a5 + 32);
    if ( v12 )
    {
      v20 = v10++;
      AttributeList.Attributes[v20].Attribute = 393217LL;
      AttributeList.Attributes[v20].Size = 8LL;
      AttributeList.Attributes[v20].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v20 * 32) = v12;
    }
    v13 = *(_QWORD *)(a5 + 40);
    if ( v13 )
    {
      v21 = v10++;
      AttributeList.Attributes[v21].Attribute = 393218LL;
      AttributeList.Attributes[v21].Size = 8LL;
      AttributeList.Attributes[v21].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v21 * 32) = v13;
    }
    if ( *(_QWORD *)(a5 + 48) )
    {
      v22 = v10++;
      AttributeList.Attributes[v22].Attribute = 131091LL;
      AttributeList.Attributes[v22].Size = 8LL;
      AttributeList.Attributes[v22].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v22 * 32) = a5 + 48;
    }
    v14 = *(_WORD *)(a5 + 2);
    if ( v14 )
    {
      v24 = v14 - 1;
      v18 = v10++;
      AttributeList.Attributes[v18].Attribute = 131085LL;
      AttributeList.Attributes[v18].Size = 2LL;
      AttributeList.Attributes[v18].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v18 * 32) = (ULONG_PTR)&v24;
    }
    else
    {
      a3 |= 0x100u;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v15 = v10++;
    AttributeList.Attributes[v15].Attribute = 393233LL;
    AttributeList.Attributes[v15].Size = 1LL;
    AttributeList.Attributes[v15].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v15 * 32) = 97LL;
  }
  if ( a2 )
  {
    v16 = a2[2];
    if ( v16 < 0 )
    {
      a2[2] = v16 & 0x7FFFFFFF;
      v23 = v10++;
      AttributeList.Attributes[v23].Attribute = 131090LL;
      AttributeList.Attributes[v23].Size = 8LL;
      AttributeList.Attributes[v23].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v23 * 32) = (ULONG_PTR)&v26;
    }
  }
  AttributeList.TotalLength = 32LL * v10 + 8;
  return NtCreateUserProcess(
           (PHANDLE)(a6 + 8),
           (PHANDLE)(a6 + 16),
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a3,
           a4,
           a2,
           &CreateInfo,
           &AttributeList);
}
