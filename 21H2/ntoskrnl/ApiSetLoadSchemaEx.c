/*
 * XREFs of ApiSetLoadSchemaEx @ 0x14095EA94
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x14095EB64 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x14095ED60 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403FAAC0 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ApiSetpFindImageSection @ 0x14095ECDC (ApiSetpFindImageSection.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EFA4 (ApiSetpLoadSchemaImage.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ApiSetLoadSchemaEx(__int64 a1, _QWORD *a2, SIZE_T *a3)
{
  int v5; // ebx
  __int64 ImageSection; // rax
  SIZE_T v7; // rsi
  char *v8; // r14
  PVOID PoolWithTag; // rax
  PVOID v10; // rbp
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  BaseAddress = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, _QWORD *))ApiSetpLoadSchemaImage)(a1, a1, &BaseAddress, v12);
  if ( v5 >= 0 )
  {
    ImageSection = ApiSetpFindImageSection(BaseAddress);
    if ( ImageSection )
    {
      v7 = *(unsigned int *)(ImageSection + 16);
      v8 = (char *)BaseAddress + *(unsigned int *)(ImageSection + 20);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x68635341u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v8, v7);
        *a2 = v10;
        *a3 = v7;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741701;
    }
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v5;
}
