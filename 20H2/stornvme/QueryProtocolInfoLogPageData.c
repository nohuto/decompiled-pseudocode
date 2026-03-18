/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C000143C
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00013B0 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memmove @ 0x1C0005200 (memmove.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 SrbExtension; // rax
  __int64 v6; // rdx
  char v7; // dl
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  _DWORD *v11; // r14
  unsigned int v12; // ecx
  char v13; // r8
  unsigned int v14; // ebx
  int NamespaceId; // ebp
  int v16; // eax
  unsigned __int8 v17; // cl
  int v18; // r8d
  const void *v20; // rdx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v21 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v7 = *(_BYTE *)(v6 + 2);
  v8 = SrbExtension;
  v9 = *(_QWORD *)(a1 + 1608);
  v23 = v9;
  v10 = 0LL;
  v22 = 0LL;
  if ( v7 == 40 )
    v11 = *(_DWORD **)(a2 + 64);
  else
    v11 = *(_DWORD **)(a2 + 24);
  v12 = v11[11];
  v13 = 6;
  if ( v12 > 7 )
  {
    if ( v12 == 9 )
    {
LABEL_27:
      v14 = 512;
      goto LABEL_26;
    }
    if ( v12 == 128 )
    {
      v14 = 64;
      goto LABEL_37;
    }
    if ( v12 - 192 > 1 )
    {
LABEL_35:
      v14 = v11[14];
LABEL_37:
      NamespaceId = 0;
      goto LABEL_7;
    }
LABEL_25:
    v14 = v11[14];
LABEL_26:
    NamespaceId = -1;
    goto LABEL_7;
  }
  if ( v12 == 7 )
    goto LABEL_25;
  if ( v12 != 2 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 3 )
      {
        if ( v12 > 3 )
        {
          if ( v12 <= 5 )
            v14 = 4096;
          else
            v14 = 564;
          goto LABEL_26;
        }
        goto LABEL_35;
      }
      goto LABEL_27;
    }
    goto LABEL_25;
  }
  v14 = 512;
  NamespaceId = -((*(_BYTE *)(v9 + 261) & 1) == 0);
LABEL_7:
  if ( v11[14] >= v14 && v14 )
  {
    if ( v12 == 5 )
    {
      v20 = *(const void **)(a1 + 3760);
      if ( v20 )
      {
        memmove((char *)v11 + (unsigned int)v11[13] + 36, v20, v14);
        v13 = 1;
      }
      else
      {
        v3 = -1056964602;
      }
      *(_BYTE *)(a2 + 3) = v13;
      return v3;
    }
    if ( NamespaceId != -1 )
    {
      if ( v7 == 40 )
        v16 = *(_DWORD *)(a2 + 24);
      else
        v16 = *(_DWORD *)(a2 + 12);
      if ( (v16 & 1) != 0 )
      {
        NamespaceId = -1;
      }
      else
      {
        if ( v7 == 40 )
          v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v17 = *(_BYTE *)(a2 + 7);
        NamespaceId = GetNamespaceId(a1, v17, 6LL, 0xFFFFFFFFLL);
      }
    }
    NVMeAllocateDmaBuffer(a1, v14, &v21, &v22);
    if ( v21 )
    {
      NVMeZeroMemory(v21, v14);
      *(_BYTE *)(v8 + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      if ( (*(_BYTE *)(v23 + 261) & 4) != 0 )
        v10 = (unsigned int)v11[12] | ((unsigned __int64)(unsigned int)v11[16] << 32);
      LOBYTE(v18) = *((_BYTE *)v11 + 44);
      BuildGetLogPageCommand(a1, v8, v18, v14, v22, NamespaceId, v10, v11[17]);
      *(_BYTE *)(v8 + 4253) |= 4u;
      *(_QWORD *)(v8 + 4224) = QueryProtocolInfoCompletion;
      *(_QWORD *)(v8 + 4200) = v21;
      *(_QWORD *)(v8 + 4208) = v22;
      *(_DWORD *)(v8 + 4240) = v14;
      return v3;
    }
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
