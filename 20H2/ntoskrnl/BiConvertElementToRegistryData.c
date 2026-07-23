/*
 * XREFs of BiConvertElementToRegistryData @ 0x140780D9C
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140781218 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140971D50 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  int v6; // ebx
  size_t v7; // r14
  unsigned int *v9; // r13
  NTSTATUS v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r15d
  _BYTE *Buffer; // rsi
  GUID *v19; // rcx
  unsigned int v20; // eax
  _BYTE *v21; // rax
  int v23; // eax
  _OWORD *PoolWithTag; // rax
  _BYTE *v25; // rax
  unsigned int v26; // r14d
  int v27; // r15d
  _WORD *v28; // rax
  __int64 v29; // rcx
  size_t v30; // rbx
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+28h] [rbp-18h] BYREF
  int v33; // [rsp+88h] [rbp+48h]

  v6 = 0;
  v7 = a3;
  Src = 0LL;
  v9 = 0LL;
  v10 = 0;
  GuidString = 0LL;
  v11 = (HIBYTE(a1) & 0xF) - 1;
  if ( !v11 )
  {
    if ( a2->Data1 == 6 )
      v23 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v23 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v9 = (unsigned int *)Src;
    v10 = v23;
    if ( v23 < 0 )
      goto LABEL_23;
    v17 = *((_DWORD *)Src + 2) + 16;
    if ( *((_DWORD *)Src + 2) >= 0xFFFFFFF0 )
    {
      v10 = -1073741811;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
      Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = *(_OWORD *)&a2->Data2;
        memmove(PoolWithTag + 1, v9, v9[2]);
        ExFreePoolWithTag(v9, 0x4B444342u);
        v9 = 0LL;
        goto LABEL_21;
      }
      v10 = -1073741801;
    }
LABEL_23:
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4B444342u);
    return (unsigned int)v10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    v19 = a2;
    v20 = a3 >> 1;
    if ( a3 >> 1 )
    {
      while ( LOWORD(v19->Data1) )
      {
        v19 = (GUID *)((char *)v19 + 2);
        if ( !--v20 )
          goto LABEL_16;
      }
      LOBYTE(v6) = 1;
    }
LABEL_16:
    v17 = a3;
    if ( !(_BYTE)v6 )
    {
      if ( a3 + 2 < a3 )
        return (unsigned int)-1073741675;
      v17 = a3 + 2;
    }
    v21 = ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    Buffer = v21;
    if ( !v21 )
      return (unsigned int)-1073741801;
    memmove(v21, a2, v7);
    if ( !(_BYTE)v6 )
      *(_WORD *)&Buffer[v17 - 2] = 0;
    v10 = 0;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v10 = RtlStringFromGUIDEx(a2, &GuidString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    Buffer = GuidString.Buffer;
    v17 = GuidString.Length + 2;
    goto LABEL_21;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 || (a3 & 7) == 0 )
        {
          v17 = a3;
          v25 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v25;
          if ( v25 )
          {
            memmove(v25, a2, v7);
            goto LABEL_22;
          }
          return (unsigned int)-1073741801;
        }
      }
      else if ( a3 - 1 <= 1 )
      {
        v17 = 1;
        Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
        if ( Buffer )
        {
          *Buffer = LOBYTE(a2->Data1) != 0;
LABEL_22:
          v10 = 0;
          *a5 = Buffer;
          *a6 = v17;
          goto LABEL_23;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v17 = 8;
      if ( a3 == 8 )
      {
        Buffer = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
        if ( Buffer )
        {
          *(_QWORD *)Buffer = *(_QWORD *)&a2->Data1;
          goto LABEL_22;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741788;
  }
  if ( (a3 & 0xF) != 0 )
    return (unsigned int)-1073741788;
  v26 = a3 >> 4;
  v27 = 0;
  if ( !(a3 >> 4) )
  {
LABEL_48:
    v17 = v27 + 2;
    v28 = ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    Buffer = v28;
    if ( !v28 )
      return (unsigned int)-1073741801;
    v29 = 0LL;
    v33 = 0;
    Src = v28;
    if ( v26 )
    {
      while ( 1 )
      {
        v10 = RtlStringFromGUIDEx(&a2[v29], &GuidString, 1u);
        if ( v10 < 0 )
          goto LABEL_60;
        v30 = (unsigned int)GuidString.Length + 2;
        memmove(Src, GuidString.Buffer, v30);
        Src = (char *)Src + v30;
        RtlFreeAnsiString(&GuidString);
        v29 = (unsigned int)(v33 + 1);
        v33 = v29;
        if ( (unsigned int)v29 >= v26 )
        {
          v28 = Src;
          break;
        }
      }
    }
    *v28 = 0;
LABEL_21:
    if ( v10 >= 0 )
      goto LABEL_22;
LABEL_60:
    if ( !Buffer )
      return (unsigned int)v10;
    ExFreePoolWithTag(Buffer, 0x4B444342u);
    goto LABEL_23;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&GuidString, 0LL);
    v10 = RtlStringFromGUIDEx(&a2[v6], &GuidString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v27 += GuidString.Length + 2;
    RtlFreeAnsiString(&GuidString);
    if ( ++v6 >= v26 )
      goto LABEL_48;
  }
}
