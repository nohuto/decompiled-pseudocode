/*
 * XREFs of _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpStackLoggingEnabled@4 @ 0x4B2C3BD0 (_RtlpHpStackLoggingEnabled@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 *     _RtlpHpTagQueryTags@12 @ 0x4B370317 (_RtlpHpTagQueryTags@12.c)
 */

void __stdcall __noreturn RtlpExtendedHeapInformationWorkerThread(int a1)
{
  NTSTATUS v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  HANDLE v5; // [esp-28h] [ebp-7Ch]
  ULONG_PTR v6; // [esp-1Ch] [ebp-70h]
  SIZE_T v7; // [esp-14h] [ebp-68h]
  SIZE_T v8; // [esp-4h] [ebp-58h]
  ULONG_PTR *v9; // [esp+0h] [ebp-54h]
  ULONG v10; // [esp+4h] [ebp-50h]
  _DWORD v11[11]; // [esp+Ch] [ebp-48h] BYREF
  _DWORD v12[4]; // [esp+38h] [ebp-1Ch] BYREF
  int v13; // [esp+48h] [ebp-Ch]
  _WORD HeapInformation[2]; // [esp+4Ch] [ebp-8h] BYREF
  int v15; // [esp+50h] [ebp-4h]

  switch ( *(_DWORD *)(a1 + 20) )
  {
    case 0x10000000:
      v15 = -1;
      HeapInformation[0] = 1;
      LODWORD(v8) = 8;
      HeapInformation[1] = *(_WORD *)(a1 + 60);
      v1 = RtlSetHeapInformation(0, (HEAP_INFORMATION_CLASS)5, HeapInformation, v8);
      *(_DWORD *)(a1 + 24) = v1;
      goto LABEL_21;
    case 0x40000000:
      v2 = *(_DWORD *)(a1 + 8);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled() )
        *(_DWORD *)(a1 + 64) |= 1u;
      v1 = 0;
LABEL_21:
      if ( *(_DWORD *)(a1 + 36) )
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *(PVOID *)(a1 + 36));
      if ( *(_DWORD *)a1 )
        NtClose(*(HANDLE *)a1);
      *(_DWORD *)(a1 + 24) = v1;
      RtlExitUserThread(0);
    default:
      v2 = 0x10000;
      break;
  }
  *(_DWORD *)(a1 + 40) = v2;
  HIDWORD(v7) = a1 + 40;
  LODWORD(v7) = a1 + 48;
  HIDWORD(v6) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 48) = 0;
  LODWORD(v6) = 0;
  v5 = *(HANDLE *)a1;
  *(_DWORD *)(a1 + 52) = 0;
  v1 = ZwMapViewOfSection(
         v5,
         (HANDLE)0xFFFFFFFF,
         (PVOID *)(a1 + 36),
         v6,
         v7,
         (PLARGE_INTEGER)2,
         0,
         (SECTION_INHERIT)4,
         HIDWORD(v8),
         v10);
  if ( v1 >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    if ( v3 == 0x40000000 )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) = -1;
      *(_DWORD *)(a1 + 24) = RtlpHpTagQueryTags(a1 + 28);
    }
    else if ( v3 == 0x20000000 )
    {
      v12[1] = -1;
      v13 = 0;
      v12[0] = 2;
      v12[2] = &RtlpHpRemoteStackSerializeWriter;
      v12[3] = a1;
      *(_DWORD *)(a1 + 24) = 0;
      v1 = RtlQueryHeapInformation(0, (HEAP_INFORMATION_CLASS)5, v12, 0x14uLL, v9);
      if ( v1 >= 0 )
        v1 = *(_DWORD *)(a1 + 24);
      if ( (v13 & 0x100) != 0 )
        *(_DWORD *)(a1 + 64) |= 1u;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 16);
      v11[0] = -1;
      v11[1] = v4;
      memset(&v11[5], 0, 24);
      v11[2] = v3;
      v11[3] = RtlpExtendedHeapInformationWorkerCallback;
      v11[4] = a1;
      v1 = RtlQueryHeapInformation(0, (HEAP_INFORMATION_CLASS)2, v11, 0x2CuLL, v9);
      if ( v1 >= 0 && *(int *)(a1 + 24) < 0 )
        v1 = *(_DWORD *)(a1 + 24);
    }
  }
  goto LABEL_21;
}
