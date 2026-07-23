/*
 * XREFs of RtlpCreateUserProcess @ 0x140A44478
 * Callers:
 *     RtlCreateUserProcessEx @ 0x140A443F8 (RtlCreateUserProcessEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x1403F4EC0 (ZwCreateUserProcess.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        _DWORD *a2,
        ULONG a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+E0h] [rbp-20h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+140h] [rbp+40h] BYREF
  __int64 v20; // [rsp+168h] [rbp+68h]
  __int64 v21; // [rsp+170h] [rbp+70h]
  __int64 v22; // [rsp+178h] [rbp+78h]
  __int64 v23; // [rsp+180h] [rbp+80h]
  _QWORD v24[36]; // [rsp+188h] [rbp+88h] BYREF

  memset(v24, 0, sizeof(v24));
  *(_QWORD *)&ProcessObjectAttributes.Length = 48LL;
  *(_QWORD *)&ProcessObjectAttributes.Attributes = 512LL;
  v14 = 0LL;
  *(_QWORD *)&ThreadObjectAttributes.Length = 48LL;
  *(_QWORD *)&ThreadObjectAttributes.Attributes = 512LL;
  memset((void *)(a6 + 4), 0, 0x64uLL);
  *(_DWORD *)a6 = 104;
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.ObjectName = 0LL;
  ThreadObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ThreadObjectAttributes.SecurityDescriptor = 0LL;
  v15 = 0LL;
  memset(&CreateInfo.State, 0, 0x50uLL);
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].Value = a6 + 24;
  v22 = a6 + 40;
  v9 = 2;
  CreateInfo.Size = 88LL;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v20 = 6LL;
  v21 = 64LL;
  v23 = 0LL;
  if ( a1 )
  {
    v24[1] = *a1;
    v24[2] = *((_QWORD *)a1 + 1);
    LODWORD(v14) = 2;
    v9 = 4;
    v24[6] = &v14;
    v24[0] = 131077LL;
    v24[3] = 0LL;
    v24[4] = 131082LL;
    v24[5] = 8LL;
    v24[7] = 0LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v10 = v9++;
    AttributeList.Attributes[v10].Attribute = 393233LL;
    AttributeList.Attributes[v10].Size = 1LL;
    AttributeList.Attributes[v10].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v10 * 32) = 97LL;
  }
  if ( a2 )
  {
    v11 = a2[2];
    if ( v11 < 0 )
    {
      a2[2] = v11 & 0x7FFFFFFF;
      v13 = v9++;
      AttributeList.Attributes[v13].Attribute = 131090LL;
      AttributeList.Attributes[v13].Size = 8LL;
      AttributeList.Attributes[v13].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v13 * 32) = (ULONG_PTR)&v15;
    }
  }
  AttributeList.TotalLength = 32LL * v9 + 8;
  return ZwCreateUserProcess(
           (PHANDLE)(a6 + 8),
           (PHANDLE)(a6 + 16),
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a3,
           1u,
           a2,
           &CreateInfo,
           &AttributeList);
}
