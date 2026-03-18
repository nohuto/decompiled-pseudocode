/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C0014DB4
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00013B0 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // r14
  _DWORD *v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int NamespaceId; // esi
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 result; // rax
  int v15; // ecx
  int v16; // edx
  void *v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = SrbExtension;
  v18 = 0LL;
  if ( v6 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = v8[11];
  if ( v9 >= 0x800
    || (_BYTE)v9
    && ((unsigned __int8)v9 <= 3u
     || (unsigned __int8)v9 > 4u
     && ((unsigned __int8)v9 <= 0xEu
      || (unsigned __int8)v9 > 0xFu && ((unsigned __int8)v9 <= 0x11u || (unsigned int)(unsigned __int8)v9 - 128 <= 3)))
    && v8[12] )
  {
    goto LABEL_52;
  }
  if ( (unsigned __int8)v9 > 0xDu )
  {
    if ( (unsigned __int8)v9 != 14 )
    {
      if ( (unsigned __int8)v9 <= 0xFu )
        goto LABEL_22;
      if ( (unsigned __int8)v9 <= 0x11u || (unsigned __int8)v9 == 128 )
        goto LABEL_31;
      if ( (unsigned __int8)v9 != 129 )
      {
        if ( (unsigned int)(unsigned __int8)v9 - 130 <= 1 )
        {
          v10 = 0;
          NamespaceId = 0;
          goto LABEL_35;
        }
        goto LABEL_22;
      }
    }
    v10 = 8;
    goto LABEL_33;
  }
  if ( (unsigned __int8)v9 == 13 )
  {
    v10 = 4096;
    goto LABEL_33;
  }
  if ( !(_BYTE)v9 )
    goto LABEL_22;
  if ( (unsigned __int8)v9 <= 2u )
  {
LABEL_31:
    v10 = 0;
    NamespaceId = -1;
    goto LABEL_35;
  }
  if ( (unsigned __int8)v9 <= 3u )
  {
LABEL_22:
    v10 = 4096;
    NamespaceId = 0;
    goto LABEL_34;
  }
  if ( (unsigned __int8)v9 <= 6u )
    goto LABEL_31;
  if ( (unsigned __int8)v9 == 7 )
  {
LABEL_52:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002694LL;
  }
  if ( (unsigned __int8)v9 <= 0xBu )
    goto LABEL_31;
  v10 = 256;
LABEL_33:
  NamespaceId = -1;
LABEL_34:
  if ( v8[13] < 0x28u )
  {
LABEL_51:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_35:
  if ( v8[14] < v10 )
    goto LABEL_51;
  if ( NamespaceId != -1 )
  {
    if ( v6 == 40 )
      v12 = *(_DWORD *)(a2 + 24);
    else
      v12 = *(_DWORD *)(a2 + 12);
    if ( (v12 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v6 == 40 )
        v13 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v13 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v13);
    }
  }
  if ( v10 )
  {
    NVMeAllocateDmaBuffer(a1, v10, &v17, &v18);
    if ( !v17 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    NVMeZeroMemory(v17, v10);
  }
  *(_BYTE *)(v7 + 4253) = *(_BYTE *)(v7 + 4253) & 0xFD | (v10 != 0 ? 2 : 0) | 1;
  SrbAssignQueueId(a1, a2);
  v15 = v8[11];
  v16 = v8[12];
  *(_QWORD *)(v7 + 4120) = v18;
  *(_DWORD *)(v7 + 4136) = v15;
  *(_BYTE *)(v7 + 4096) = 10;
  *(_DWORD *)(v7 + 4100) = NamespaceId;
  *(_DWORD *)(v7 + 4140) = v16;
  LOBYTE(v15) = *(_BYTE *)(v7 + 4253) & 0xFB | (v10 != 0 ? 4 : 0);
  *(_QWORD *)(v7 + 4224) = QueryProtocolInfoCompletion;
  *(_BYTE *)(v7 + 4253) = v15;
  *(_QWORD *)(v7 + 4200) = v17;
  *(_QWORD *)(v7 + 4208) = v18;
  result = 0LL;
  *(_DWORD *)(v7 + 4240) = v10;
  return result;
}
