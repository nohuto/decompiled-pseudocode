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
  int HeapInformation; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  HANDLE v5; // [esp-28h] [ebp-7Ch]
  int v6; // [esp-18h] [ebp-6Ch]
  _DWORD v7[11]; // [esp+Ch] [ebp-48h] BYREF
  _DWORD v8[4]; // [esp+38h] [ebp-1Ch] BYREF
  int v9; // [esp+48h] [ebp-Ch]
  _WORD v10[2]; // [esp+4Ch] [ebp-8h] BYREF
  int v11; // [esp+50h] [ebp-4h]

  switch ( *(_DWORD *)(a1 + 20) )
  {
    case 0x10000000:
      v11 = -1;
      v10[0] = 1;
      v10[1] = *(_WORD *)(a1 + 60);
      HeapInformation = RtlSetHeapInformation(0, 5, (int)v10, 8u);
      *(_DWORD *)(a1 + 24) = HeapInformation;
      goto LABEL_21;
    case 0x40000000:
      v2 = *(_DWORD *)(a1 + 8);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled() )
        *(_DWORD *)(a1 + 64) |= 1u;
      HeapInformation = 0;
LABEL_21:
      if ( *(_DWORD *)(a1 + 36) )
        NtUnmapViewOfSection(-1, *(_DWORD *)(a1 + 36));
      if ( *(_DWORD *)a1 )
        NtClose(*(HANDLE *)a1);
      *(_DWORD *)(a1 + 24) = HeapInformation;
      RtlExitUserThread(0);
    default:
      v2 = 0x10000;
      break;
  }
  *(_DWORD *)(a1 + 40) = v2;
  v6 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 48) = 0;
  v5 = *(HANDLE *)a1;
  *(_DWORD *)(a1 + 52) = 0;
  HeapInformation = ZwMapViewOfSection((int)v5, -1, a1 + 36, 0, v6, a1 + 48, a1 + 40, 2, 0, 4);
  if ( HeapInformation >= 0 )
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
      v8[1] = -1;
      v9 = 0;
      v8[0] = 2;
      v8[2] = RtlpHpRemoteStackSerializeWriter;
      v8[3] = a1;
      *(_DWORD *)(a1 + 24) = 0;
      HeapInformation = RtlQueryHeapInformation(0, 5, v8, 0x14u, 0);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 24);
      if ( (v9 & 0x100) != 0 )
        *(_DWORD *)(a1 + 64) |= 1u;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 16);
      v7[0] = -1;
      v7[1] = v4;
      memset(&v7[5], 0, 24);
      v7[2] = v3;
      v7[3] = RtlpExtendedHeapInformationWorkerCallback;
      v7[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0, 2, v7, 0x2Cu, 0);
      if ( HeapInformation >= 0 && *(int *)(a1 + 24) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 24);
    }
  }
  goto LABEL_21;
}
