/*
 * XREFs of ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E0E4
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E278 (SmmMapNonPagedObjectToIommu.c)
 *     ?SysMmMapIommuContiguousRange@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006E8C0 (-SysMmMapIommuContiguousRange@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 * Callees:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002FBC8 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8 (SmmIoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall SmmMapContiguousRangeToIommu(
        struct SYSMM_IOMMU *a1,
        __int64 a2,
        struct _MDL *a3,
        SIZE_T a4,
        unsigned __int8 a5)
{
  SIZE_T v8; // rsi
  int v9; // r15d
  PMDL Mdl; // rax
  struct _MDL *v11; // rbx
  struct _MDL *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int i; // esi
  __int64 v17; // rdx
  _QWORD v19[2]; // [rsp+20h] [rbp-60h] BYREF
  ULONG v20; // [rsp+30h] [rbp-50h]
  int v21; // [rsp+34h] [rbp-4Ch]
  __int64 v22; // [rsp+38h] [rbp-48h]
  struct _MDL v23; // [rsp+40h] [rbp-40h] BYREF
  struct _MDL *v24; // [rsp+70h] [rbp-10h] BYREF

  v8 = a4 >> 12;
  v9 = 0;
  Mdl = MmCreateMdl(0LL, 0LL, a4);
  v11 = Mdl;
  if ( Mdl )
  {
    v12 = Mdl + 1;
    if ( (_DWORD)v8 )
    {
      v13 = (unsigned int)v8;
      do
      {
        v12->Next = a3;
        a3 = (struct _MDL *)((char *)a3 + 1);
        v12 = (struct _MDL *)((char *)v12 + 8);
        --v13;
      }
      while ( v13 );
    }
    v9 = SmmMapMdlToIommu(a1, a2, v11, a5);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v23.Next = 0LL;
    v14 = 0;
    *(_DWORD *)&v23.Size = 56;
    v23.StartVa = 0LL;
    *(_QWORD *)&v23.ByteCount = 4096LL;
    if ( (_DWORD)v8 )
    {
      while ( 1 )
      {
        v24 = (struct _MDL *)((char *)a3 + v14);
        v15 = a2 ? a2 + (v14 << 12) : 0LL;
        v9 = SmmMapMdlToIommu(a1, v15, &v23, a5);
        if ( v9 < 0 )
          break;
        if ( ++v14 >= (unsigned int)v8 )
          return (unsigned int)v9;
      }
      for ( i = 0; i < v14; a3 = (struct _MDL *)((char *)a3 + 1) )
      {
        v24 = a3;
        if ( a2 )
          v17 = a2 + (i << 12);
        else
          v17 = 0LL;
        if ( a5 )
        {
          v22 = 0LL;
          v19[0] = &v24;
          v20 = v23.ByteCount >> 12;
          v19[1] = *((_QWORD *)a1 + 20) + 48LL;
          v21 = *((_DWORD *)a1 + 56);
          SmmIoMmuUnmapStagingMdl((__int64)a1, v17, (unsigned int *)v19);
        }
        else
        {
          SmmUnmapIommu((__int64)a1, v17, &v23);
        }
        ++i;
      }
    }
  }
  return (unsigned int)v9;
}
