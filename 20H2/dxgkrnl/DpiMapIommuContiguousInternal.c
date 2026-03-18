/*
 * XREFs of DpiMapIommuContiguousInternal @ 0x1C0056840
 * Callers:
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C00569D0 (DpiMapMemoryTrackerToIoMmu.c)
 *     DpiMapIommuContiguous @ 0x1C02C56B0 (DpiMapIommuContiguous.c)
 * Callees:
 *     DpiMapIommuIdentityRangeInternal @ 0x1C0056988 (DpiMapIommuIdentityRangeInternal.c)
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0056DB8 (DpiUnmapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiMapIommuContiguousInternal(int a1, struct _MDL *a2, SIZE_T a3, int a4, __int64 a5)
{
  SIZE_T v7; // rsi
  int v8; // ebp
  PMDL Mdl; // rax
  PMDL v11; // rdi
  struct _MDL *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r14
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  struct _MDL *v21; // [rsp+60h] [rbp-38h]

  v7 = a3 >> 12;
  v8 = 0;
  Mdl = MmCreateMdl(0LL, 0LL, a3);
  v11 = Mdl;
  if ( Mdl )
  {
    v12 = Mdl + 1;
    if ( (_DWORD)v7 )
    {
      v13 = (unsigned int)v7;
      do
      {
        v12->Next = a2;
        a2 = (struct _MDL *)((char *)a2 + 1);
        v12 = (struct _MDL *)((char *)v12 + 8);
        --v13;
      }
      while ( v13 );
    }
    v8 = DpiMapIommuIdentityRangeInternal(a1, (_DWORD)v11, 0, a4, a5);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v17 = 0LL;
    v14 = 0;
    v18 = 56;
    v19 = 0LL;
    v20 = 4096LL;
    if ( (_DWORD)v7 )
    {
      while ( 1 )
      {
        v15 = v14;
        v21 = (struct _MDL *)((char *)a2 + v14);
        v8 = DpiMapIommuIdentityRangeInternal(a1, (unsigned int)&v17, 0, a4, a5);
        if ( v8 < 0 )
          break;
        if ( ++v14 >= (unsigned int)v7 )
          return (unsigned int)v8;
      }
      if ( v14 )
      {
        do
        {
          v21 = a2;
          DpiUnmapIommuIdentityRangeInternal(a1, (unsigned int)&v17, 0, a4, a5);
          a2 = (struct _MDL *)((char *)a2 + 1);
          --v15;
        }
        while ( v15 );
      }
    }
  }
  return (unsigned int)v8;
}
