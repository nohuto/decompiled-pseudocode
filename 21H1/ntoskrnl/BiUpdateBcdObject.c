/*
 * XREFs of BiUpdateBcdObject @ 0x14096E608
 * Callers:
 *     BiBindEfiEntries @ 0x14096BDA0 (BiBindEfiEntries.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     BiMapEfiDeviceForSpaces @ 0x1405BE2A4 (BiMapEfiDeviceForSpaces.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BiGetRegistryValue @ 0x14076F608 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140770274 (BiSetRegistryValue.c)
 *     BiGetDeviceFromEfiPath @ 0x14096D7CC (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x14096D950 (BiGetFilePathFromEfiPath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r13
  PVOID v5; // r14
  PVOID PoolWithTag; // r15
  NTSTATUS v7; // eax
  HANDLE v8; // rdi
  int v9; // ebx
  ULONG v10; // eax
  BCD_FLAGS v11; // r8d
  _WORD *v12; // r12
  __int64 v13; // rax
  SIZE_T v14; // rbx
  NTSTATUS ElementDataWithFlags; // eax
  BCD_FLAGS v16; // r8d
  BCD_FLAGS v17; // r8d
  __int64 v18; // rax
  char *v19; // rbx
  BCD_FLAGS v20; // r8d
  BCD_FLAGS v21; // r8d
  int v23; // [rsp+30h] [rbp-30h] BYREF
  ULONG v24; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID Buffer; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  void *Source2; // [rsp+48h] [rbp-18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+50h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+B0h] [rbp+50h] BYREF
  ULONG v31; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(ULONG **)a2[2].Data4;
  v31 = 0;
  v24 = 0;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = 0LL;
  P = 0LL;
  PoolWithTag = 0LL;
  Source2 = 0LL;
  v23 = 0;
  BcdObjectHandle = 0LL;
  BufferSize = 0;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v8 = BcdObjectHandle;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_31;
  if ( (a2[3].Data1 & 2) != 0
    && (int)BiGetRegistryValue(
              (__int64)BcdObjectHandle,
              L"FirmwareVariable",
              (__int64)L"Description",
              3,
              &Source2,
              &v23) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == v23 && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_8:
      v12 = (_WORD *)((char *)v2 + v2[4]);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = (unsigned int)(2 * v13 + 2);
      ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v11, 0LL, &BufferSize);
      if ( ElementDataWithFlags == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferSize, 0x4B444342u);
        if ( !PoolWithTag )
        {
LABEL_17:
          BiDeleteElement(v8, 0x12000004u);
          BcdSetElementDataWithFlags(v8, 0x12000004u, v17, v12, v14);
LABEL_18:
          v18 = v2[5];
          if ( *(ULONG *)((char *)v2 + v18 + 8) == 4 )
          {
            v19 = (char *)v2 + v18;
            if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12, &Buffer, &v31) < 0 )
            {
              v4 = Buffer;
            }
            else
            {
              BiDeleteElement(v8, 0x11000001u);
              BiMapEfiDeviceForSpaces((__int64)a2, (const void **)&Buffer, &v31);
              v4 = Buffer;
              BcdSetElementDataWithFlags(v8, 0x11000001u, v20, Buffer, v31);
            }
            if ( BiGetFilePathFromEfiPath((__int64)(v19 + 12), &P, &v24) < 0 )
            {
              v5 = P;
            }
            else
            {
              BiDeleteElement(v8, 0x12000002u);
              v5 = P;
              BcdSetElementDataWithFlags(v8, 0x12000002u, v21, P, v24);
            }
          }
          v9 = 0;
          if ( v4 )
            ExFreePoolWithTag(v4, 0x4B444342u);
          if ( v5 )
            ExFreePoolWithTag(v5, 0x4B444342u);
          goto LABEL_29;
        }
        ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v16, PoolWithTag, &BufferSize);
      }
      if ( ElementDataWithFlags >= 0
        && PoolWithTag
        && BufferSize == (_DWORD)v14
        && RtlCompareMemory(v12, PoolWithTag, v14) == v14 )
      {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", L"Description", 3u, v2, v2[1]);
  if ( v9 >= 0 )
  {
    a2[3].Data1 |= 2u;
    goto LABEL_8;
  }
LABEL_29:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_31:
  if ( v8 )
    BcdCloseObject(v8);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)v9;
}
